#include <stdio.h>

void print(char text[], int text_length){
    for(int i = 1; i <= text_length; i++){
        printf("%c", text[i]);
    }
    printf("\n");
}
void reverse(char text[], int text_length){
    char copy_text[text_length];
    for(int i = 0; i <= text_length; i++){
        copy_text[i] = text[i];
    }
    int copy_text_index = text_length;
    for(int i = 1; i <= text_length; i++){
        text[i] = copy_text[copy_text_index];
        copy_text_index--;
    }
    print(text, text_length);
}

void to_upper(char text[], int text_length){
    for(int i = 1; i <= text_length; i++){
        if (text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] + 'A' - 'a';
        }
    }
    print(text, text_length);
}

void to_lower(char text[], int text_length){
    for(int i = 1; i <= text_length; i++){
        if (text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] - 'A' + 'a';
        }
    }
    print(text, text_length);
}

void Remove(char text[], int text_length, char target, int *p){
    char copy_text[text_length];
    for(int i = 0; i <= text_length; i++){
        copy_text[i] = text[i];
    }
    int copy_text_index = 1;
    int text_index = 1;
    for(int i = 1; i<= text_length; i++){
        while(copy_text[copy_text_index] == target){
            copy_text_index++;
        }
        if (copy_text_index <= text_length){
            text[text_index] = copy_text[copy_text_index];
            copy_text_index++;
            text_index++;
        }
        else {
            text[i] = 0;
        }
    }
    text_index--;
    *p = text_index;
    print(text, text_index);
}
void compress(char text[], int text_length, int *p){
    char copy_text[text_length];
    for(int i = 0; i <= text_length; i++){
        copy_text[i] = text[i];
    }
    int copy_text_index = 1;
    int text_index = 1;
    while(copy_text_index <= text_length){
        int count = 0;
        text[text_index] = '-';
        text_index++;
        text[text_index] = copy_text[copy_text_index];
        text_index++;
        char k = copy_text[copy_text_index];
        while(k == copy_text[copy_text_index]){
            copy_text_index++;
            count++;
        }
        text[text_index] = count + 48;
        text_index++;
    }
    text_index--;
    *p = text_index;
    print(text, text_index);
}
int main () {
    char str[1025] = {0};
    int str_length = 0;
    do{
        str_length++;
        str[str_length] = getchar();
    }while(str[str_length] != '\n');
    str_length--;
    int k;
    scanf("%d", &k);
    char order[20];
    while(k > 0){
        scanf("%s", order);
        if (order[0] == 'R'){
            if(order[1] == 'E'){
                if(order[2] == 'V'){
                    reverse(str, str_length);
                    k--;
                }
                else if (order[2] == 'M'){
                    char target = getchar();
                    target = getchar();
                    Remove(str, str_length, target, &str_length);
                    k--;
                }
            }
        }
        else if(order[0] == 'C'){
            compress(str, str_length, &str_length);
            k--;
        }
        else if(order[0] == 'T'){
            if (order[3] == 'L'){
                to_lower(str, str_length);
                k--;
            }
            else if(order[3] == 'U'){
                to_upper(str,str_length);
                k--;
            }
        }
        else if (order[0] == 'P'){
            print(str, str_length);
            k--;
        }
    }
    return 0;
}
