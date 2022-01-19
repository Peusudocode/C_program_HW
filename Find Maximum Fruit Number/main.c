#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20000

void find_fruit(char input[],char fruit[][15]){
    int number_array[20] ={0};
    char *input_fruit, *split;
    input_fruit = strtok(input, "+_+");
    while(input_fruit != NULL){
        for (int i = 0; i < 20; i++){
            if (strcmp(input_fruit, fruit[i]) == 0){
                number_array[i]++;
            }
        }
        input_fruit = strtok(NULL, "+_+");
    }
    int max = 0;
    for (int i = 0; i < 20; i++){
        if (max <= number_array[i])
            max = number_array[i];
    }
    for (int i = 0; i < 20; i++){
        if (number_array[i] == max){
            printf("%s\n", fruit[i]);
        }
    }
}

int main(void) {
    char fruit[20][15] = {
            "guava",
            "litchi",
            "longan",
            "watermelon",
            "pomelo",
            "pear",
            "banana",
            "papaya",
            "pumpkin",
            "tomato",
            "mango",
            "kiwi",
            "persimmon",
            "cantaloupe",
            "strawberry",
            "grape",
            "peach",
            "orange",
            "coconut",
            "lemon"
    };
    char input[N];
    scanf("%s", input);
    find_fruit(input,fruit);
    return 0;
}