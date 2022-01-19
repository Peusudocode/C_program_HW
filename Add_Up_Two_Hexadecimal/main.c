#include <stdio.h>

int main() {
    unsigned int A, B, C;
    scanf("%x %x", &A, &B);
    C = A + B;
    if ( C < 65536 && C >=0){
        printf("%u", C);
    }
    else{
        printf("OVERFLOW!");
    }


    return 0;
}
