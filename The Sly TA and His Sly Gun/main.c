#include <stdio.h>
typedef union{
    char c[sizeof(float)];
    float f;
    struct
    {
        unsigned int part1 : 8;
        unsigned int part2 : 8;
        unsigned int part3 : 8;
        unsigned int part4 : 8;
    } raw;
}location;
int sum_Binary(int n)
{
    int total = 0;
    int k;
    for (k = 0; k < 8; k++) {
        int add = 1;
        if ((n >> k) & 1){
            for(int i = 0; i < k; i++){
                add *= 2;
            }
            total += add;
        }
    }
    return total;
}
int main() {
    int n;
    scanf("%d", &n);
    location Fi_array;;
    for (int i = 0; i < n; i++){
        scanf("%f", &Fi_array.f);
        int sum = 0;
        sum += sum_Binary(Fi_array.raw.part1);
        sum += sum_Binary(Fi_array.raw.part2);
        sum += sum_Binary(Fi_array.raw.part3);
        sum += sum_Binary(Fi_array.raw.part4);
        if (sum % 2 == 1){
            printf("Back\n");
        }
        else{
            printf("Front\n");
        }
    }
}
