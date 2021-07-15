#include <stdio.h>

double power(double x, int y){
    if (y == 0) return 1;
    return x * power(x, y-1);
}
int main (){
    char *mod = "mod";
    char *pow = "pow";
    char *div = "div";
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    char sign[3];
    scanf(" %s", sign);
    char f = sign[0];

    switch(f){
        case '+':
            printf("%.2lf", x+y);
            break;
        case '-':
            printf("%.2lf", x-y);
            break;
        case '/':
            if (y == 0){
                printf("Division by 0!\n");
                return 5;
            }
            printf("%.2lf", x/y);
            break;
        case '*':
            printf("%.2lf", x*y);
            break;
        case 'm':
            if (*sign != *mod) {
                printf("Wrong operator");
                return 6;
            }
            if (y == 0){
                printf("Division by 0!\n");
                return 5;
            }
            printf("%.2lf", x/y);
            break;
        case 'p':
            if (*sign != *pow) {
                printf("Wrong operator");
                return 6;
            }
            printf("%.2lf", power(x,(int)y));
            break;
        case 'd':
            if (*sign != *div) {
                printf("Wrong operator");
                return 6;
            }
            if (y == 0){
                printf("Division by 0!\n");
                return 5;
            }
            printf("%d", (int)x/(int)y);
            break;
        default:
            printf("Operation not allowed");
            return 1;
    }
    return 0;
}
