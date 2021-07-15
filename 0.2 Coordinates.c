#include <stdio.h>
char *point_in_quadrant(double x, double y){
    char *zero_res = "One of the coordinates is equal to zero!";
    char *res_1 = "I";
    char *res_2 = "II";
    char *res_3 = "III";
    char *res_4 = "IV";
    char *res_origin = "It's the origin!";

    if (x > 0 && y > 0) return res_1;
    else if (x < 0 && y > 0) return res_2;
    else if (x < 0 && y < 0) return res_3;
    else if (x > 0 && y < 0) return res_4;
    else if (x == 0 && y == 0) return res_origin;
    else return zero_res;
}

int main() {
    double x,y;
    scanf(" %lf", &x);
    scanf(" %lf", &y);
    char *quadrant = point_in_quadrant(x,y);
    printf("%s\n", quadrant);
    return 0;
}
