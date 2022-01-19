#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int stb;
    long long int num;
    while(n > 0){
        scanf("%d-%llx", &stb, &num);
        for (int i = 8 * 8 - 1; i >= 0; i--){
            if (i < (stb + 8) && i >= (stb)){
                printf("%d", (num >> i) & 1 ? : 0);

            }
            else{
                printf("0");
            }
            if (i % 8 == 0){
                printf(" ");
            }
        }
        printf("\n");
        n--;
    }

    return 0;
}
//00000000 11111001 00000000 00000000 00000000 00000000 00000000 00000000
//00000000 00000000 00000000 00000000 00000000 00000001 10000000 00000000
//00000000 00000000 00000000 00000000 01111000 00000000 00000000 00000000
//00000000 01110111 00000000 00000000 00000000 00000000 00000000 00000000
//00000000 00000000 00000000 00000001 00111000 00000000 00000000 00000000
//00000000 00000010 00000000 00000000 00000000 00000000 00000000 00000000
//00000000 00000000 00000000 00000000 00000010 01111100 00000000 00000000
//00000000 00000000 00000000 00000000 00000000 01110100 00000000 00000000
//00000000 00000000 00000000 00000000 00000000 00000001 11001010 00000000
//00000000 00000000 00000000 00000000 00000100 10000000 00000000 00000000
//00000000 00000000 00000000 00001011 00000000 00000000 00000000 00000000
//7-0x1151b9a4384027f7