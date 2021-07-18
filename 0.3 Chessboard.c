#include <stdio.h>
#include <stdlib.h>

struct ChessField {
    int x;
    int y;
    struct ChessField *up_left;
    struct ChessField *up;
    struct ChessField *up_right;
    struct ChessField *left;
    struct ChessField *right;
    struct ChessField *low_left;
    struct ChessField *low;
    struct ChessField *low_right;
};

struct ChessField *CreateChessField(int x, int y){
    struct ChessField *field = NULL;
    field = malloc(sizeof(struct ChessField));
    if (field != NULL) {
        field -> x = x;
        field -> y = y;
        field -> up_left = NULL;
        field -> up = NULL;
        field -> up_right = NULL;
        field -> left = NULL;
        field -> right = NULL;
        field -> low_left = NULL;
        field -> low = NULL;
        field -> low_right = NULL;
    }
    else {
        printf("Filed to allocate memory! for position x:%d y:%d\n", x ,y);
    }
    return field;
}

struct ChessField *CreateChessBoard(struct ChessField *first, int x_size, int y_size){
    struct ChessField *back = NULL;
    struct ChessField *forward = NULL;
    struct ChessField *firstofline = NULL;
    struct ChessField *previousline = NULL;
    struct ChessField *tmp = NULL;
    for (int i = 1; i <= x_size; i++){
        firstofline = CreateChessField(i,1);
        for(int j = 1; j <= y_size; j++){
            if (i == 1 && j == 1) {
                first = firstofline;
                back = firstofline;
            }
            else if (j == 1) {
                back = firstofline;
            }
            else if (j == y_size){
                forward = CreateChessField(i,j);
                back -> right = forward;
                forward -> left = back;
                if (previousline != NULL){
                    tmp = firstofline;
                    while (tmp) {
                        previousline -> low_left = tmp -> left;
                        previousline -> low = tmp;
                        previousline -> low_right = tmp -> right;
                        tmp -> up_left = previousline -> left;
                        tmp -> up = previousline;
                        tmp -> up_right = previousline -> right;
                        tmp = tmp -> right;
                        previousline = previousline -> right;
                    }
                }
                previousline = firstofline;
            }
            else {
                forward = CreateChessField(i,j);
                back -> right = forward;
                forward -> left = back;
                back = forward;
            }
        }
    }
    return first;
}

void PrintChessField(const struct ChessField *field) {
    if (field == NULL)
        printf("Field is empty");
    else {
        printf("pos x:%d, pos y:%d\n", field -> x, field -> y);
        printf("up left: %p\n"
               "up: %p\n"
               "up right: %p\n"
               "left: %p\n"
               "right: %p\n"
               "low left: %p\n"
               "low: %p\n"
               "low right: %p\n",
               field -> up_left,
               field -> up,
               field -> up_right,
               field -> left,
               field -> right,
               field -> low_left,
               field -> low,
               field -> low_right);
    }
}

void CleanUp(struct ChessField *field, int lines){
    struct ChessField *next;
    struct ChessField *nextline;
    for (int i = 1; i <= lines; i++){
        nextline = field -> low;
        while(field){
            next = field -> right;
            // printf("Cleaning %d %d\n", field -> x, field -> y);
            free(field);
            field = next;
        }
        if (nextline != NULL)
            field = nextline;
    }
}

int main() {

    int a;
    int b;
    int res = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    struct ChessField *chessboard = NULL;
    chessboard = CreateChessBoard(chessboard, 8, 8);
    struct ChessField *first_filed = chessboard;

    for (int i = 1; i != a; i++) {
        chessboard = chessboard -> low;
    }
    for (int i = 1; i != b; i++) {
        chessboard = chessboard -> right;
    }

    // PrintChessField(chessboard);

    if (chessboard -> up_left != NULL)
        res += 1;
    if (chessboard -> up != NULL)
        res += 1;
    if (chessboard -> up_right != NULL)
        res += 1;
    if (chessboard -> left != NULL)
        res += 1;
    if (chessboard -> right != NULL)
        res += 1;
    if (chessboard -> low_left != NULL)
        res += 1;
    if (chessboard -> low != NULL)
        res += 1;
    if (chessboard -> low_right != NULL)
        res += 1;

    printf("%d\n", res);

    CleanUp(first_filed, 8);

    return 0;

}
