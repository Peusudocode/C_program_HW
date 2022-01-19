#include <stdio.h>
#include <math.h>
int main() {
    int mode ;
    scanf("%d", &mode);
    if (mode == 1){
        float k;
        scanf ("%f", &k);
        printf("%.2f", k*k*k);
    }
    else if (mode ==2){
        float a, b, c;
        scanf ("%f %f %f", &a, &b, &c);
        printf("%.2f", a*b*c);
    }
    else if (mode ==3){
        float r, h;
        scanf ("%f %f", &r, &h);
        printf("%.2f", r*r*h*3.14);
    }
    else if (mode ==4){
        float k;
        scanf ("%f", &k);
        double a =2;
        a = sqrt(a);
        printf("%.2f", k*k*k/12*a);
    }
    return 0;
}
