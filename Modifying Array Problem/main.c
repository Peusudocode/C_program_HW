#include <stdio.h>
#define SIZE 201

void modify_array(int *p){
    p = p - 100;
    int mode = *p;
    int index = 1;
    if(mode == 1){
        while(index < 201){
            p++;
            if((index-1)%2==0){
                *p += 10;
            }
            index++;
        }
    }
    else if (mode == 2){
        while(index < 201){
            p++;
            if((index-1)%3==0){
                *p *= 8;
            }
            index++;
        }
    }
    else if (mode == 3){
        while(index < 201){
            p++;
            if((index-1)%5==0){
                *p -= 2;
            }
            index++;
        }
    }
}

int main(void) {
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    modify_array(&arr[SIZE/2]);
    for (int i = 1; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}