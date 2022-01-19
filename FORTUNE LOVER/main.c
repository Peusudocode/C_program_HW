#include<stdio.h>

void addition(){
    float a, b, *A, *B;
    scanf("%f %f", &a, &b);
    A = &a;
    B = &b;
    printf("   ");
    print_binary(A);
    printf("\n+) ");
    print_binary(B);
    printf("\n---------------------------------------\n");
    int c = 0, total[32];
    printf("   ");
    for(int i = 0; i <= 31; ++i){
        int a = (*(int *)A >> i) & 1;
        int b = (*(int *)B >> i) & 1;
        if (a+b+c >= 2){
            total[i] = a + b + c - 2;
            c = 1;
        }
        else{
            total[i] = a + b + c;
            c = 0;
        }
    }
    for(int i = 31; i >= 0; --i){
        printf("%d", total[i]);
        if (i && !(i % 8)) printf(" ");
    }
    long int k = 0;
    if (total[31] == 0){
        for(int i = 0; i < 31; i++){
            long int m = total[i];
            for(int j = 0; j < i; j++){
                m *= 2;
            }
            k += m;
        }
    }
    else if (total[31] == 1){
        for(int i = 0; i < 31; i++){
            if(total[i] == 0){
                total[i] =1;
            }
            else if(total[i] == 1){
                total[i] =0;
            }
        }
        for(int i = 0; i < 31; i++){
            long int m = total[i];
            for(int j = 0; j < i; j++){
                m *= 2;
            }
            k += m;
        }
        k = k + 1;
        k = 0 - k;
    }
    printf("\n%.0f + %.0f = %ld", *A, *B, k);

}

void print_binary(void *n){
    for(int i = 31; i >= 0; --i){
        printf("%d", (*(int *)n >> i) & 1);
        if (i && !(i % 8)) printf(" ");
    }
}

int main(){
    addition();
    return 0;
}