#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_N 1024

void convert_to_polar(int *coords, int N){
    int *p;
    double a, b, length, angle;
    double PI = 3.14159265;
    double val = 180.0 / PI;
    p = coords;
    for(int i = 1; i <= N; i++){
        a = *p;
        p++;
        b = *p;
        p++;
        length = sqrt(a*a+ b*b);
        if(a > 0 && b > 0){
            angle = atan(b/a)* val;
        }
        else if (a < 0 && b > 0){
            angle = (atan(b/a)+ PI) * val;
        }
        else if (a < 0 && b < 0){
            angle = (atan(b/a)+ PI) * val;
        }
        else if (a > 0 && b < 0){
            angle = (atan(b/a) + (2 * PI))* val;
        }
        printf("%.2f %.2f\n", angle, length);
    }
}

int main()
{
    int N, coords[MAX_N + 1][2];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d%d", &coords[i][0], &coords[i][1]);


    convert_to_polar((int *) coords, N);
}