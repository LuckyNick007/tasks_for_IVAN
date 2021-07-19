#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    fgets(input, 20, stdin);
    for (int i = 0; i < strlen(input) - 1; i++) {
        int num = input[i] - '0';
        switch (num) {
            case 0: printf("%s", "zero\n"); break;
            case 1: printf("%s", "one\n"); break;
            case 2: printf("%s", "two\n"); break;
            case 3: printf("%s", "three\n"); break;
            case 4: printf("%s", "four\n"); break;
            case 5: printf("%s", "five\n"); break;
            case 6: printf("%s", "six\n"); break;
            case 7: printf("%s", "seven\n"); break;
            case 8: printf("%s", "eight\n"); break;
            case 9: printf("%s", "nine\n"); break;
            default: printf("%s", "wtf motherfucker?!\n");
        }
    }
    return 0;
}
