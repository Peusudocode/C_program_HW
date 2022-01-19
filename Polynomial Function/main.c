#include<stdio.h>

int *poly(int*A, int*B, int*C){
    static int total;
    int a = 0, b = 0 , c = 0;
    if(A != NULL){
        a = *A * *A * *A;
    }
    if (B != NULL){
        b = *B * *B;
    }
    if(C != NULL){
        c = *C;
    }
    total = a + b+ c;
    return &total;
}


int main() {
    int a, b, c;
    int *A, *B, *C;
    scanf("%d %d %d", &a, &b, &c);
    A = &a;
    B = &b;
    C = &c;
    if (a < 0) A = NULL;
    if (b < 0) B = NULL;
    if (c < 0) C = NULL;

    int *result = poly(A, B, C);
    printf("%d", *result);
    return 0;
}