#include <stdio.h>
#define length  10001
char char_array[length];
int number_array[length];
void decode_coordinate(int array[], int size){
    int sum_of_odd = 0, sum_of_even = 0;
    int index_of_odd = size / 2 + size % 2;
    int index_of_even = size / 2 ;
    int index = 0;
    while(index < size){
        sum_of_even += array[index];
        index++;
        sum_of_odd += array[index];
        index++;
    }
    if (sum_of_odd < 16){
        printf("%x", sum_of_odd);
    }
    else {
        int new_odd_index = 0;
        int temp_of_sum = sum_of_odd;
        while(temp_of_sum > 0){
            new_odd_index++;
            temp_of_sum /= 16;
        }
        int new_odd_array[index_of_odd];
        for(int i = new_odd_index - 1; i >= 0; i--){
            new_odd_array[i] = sum_of_odd % 16;
            sum_of_odd /= 16;
        }
        decode_coordinate(new_odd_array, new_odd_index);
    }
    if (sum_of_even < 16){
        printf("%x", sum_of_even);
    }
    else {
        int new_even_index = 0;
        int temp_of_sum = sum_of_even;
        while(temp_of_sum > 0){
            new_even_index++;
            temp_of_sum /= 16;
        }
        int new_even_array[index_of_even];
        for(int i = new_even_index - 1; i >= 0; i--){
            new_even_array[i] = sum_of_even % 16;
            sum_of_even /= 16;
        }
        decode_coordinate(new_even_array, new_even_index);
    }
}
int main() {
    int size = 0;
    char a;
    do{
        a = getchar();
        if (a != '\n'){
            char_array[size] = a;
            size++;
        }
    }while(a != '\n');
    for (int i = 0; i < size; i++){
        if ((int)char_array[i] > 47 && (int)char_array[i] < 58){
            number_array[i] = (int)char_array[i] - 48;
        }
        else if ((int)char_array[i] > 96 && (int)char_array[i] < 103){
            number_array[i] = (int)char_array[i] - 97 + 10;
        }
        else if ((int)char_array[i] > 64 && (int)char_array[i] < 71){
            number_array[i] = (int)char_array[i] - 65 + 10;
        }
    }
    decode_coordinate(number_array, size);
    return 0;
}
