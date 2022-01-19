#include <stdio.h>
void swap(char text[], int length){
    char copy_text[length];
    for(int i = 0; i < length; i++){
        copy_text[i] = text[i];
    }
    int index = length /2;
    for (int i = 0; i < length; i++){
        text[i] = copy_text[index];
        index++;
        if(index == length){
            index = 0;
        }
    }
}
void print_text(char text[], int length){
    for(int i = 0; i < length; i++){
       printf("%c", text[i]);
    }
    printf("\n");
}
void rotate(char text[], int direction, int move, int length){
    char copy_text[length];
    for(int i = 0; i < length; i++){
        copy_text[i] = text[i];
    }
    //向右
    if (direction == 0){
        int index = length - move;
        for (int i = 0; i < length; i++){
            text[i] = copy_text[index];
            index++;
            if(index == length){
                index = 0;
            }
        }
    }
    //向左
    else if (direction == 1){
        int index = move;
        for (int i = 0; i < length; i++){
            text[i] = copy_text[index];
            index++;
            if(index == length){
                index = 0;
            }
        }
    }
}
void rail_fence_cipher(char text[], int length, int key[], int key_length){
    char copy_text[length];
    int decode_key[key_length];
    for(int i = 0; i < key_length; i++){
        decode_key[key[i] - 1] = i;
    }
    for(int i = 0; i < length; i++){
        copy_text[i] = text[i];
    }
    int index = 0;
    int left = length % key_length;
    for(int i = 0; i < (length - left); i++){
        text[i] = copy_text[decode_key[i%key_length] + index];
        if (i%key_length == key_length - 1){
            index += key_length;
        }
    }
}
void Caesar_Cipher(char text[], int length, int k){
    k = k % 26;
    for(int i = 0; i < length; i++){
        if (text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] + k;
            while (text[i] > 'z'){
                text[i] -= 26;
            }
            while (text[i] < 'a'){
                text[i] += 26;
            }
        }
        else if (text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] + k;
            while (text[i] > 'Z'){
                text[i] -= 26;
            }
            while (text[i] < 'A'){
                text[i] += 26;
            }
        }
    }
}
void Trithemius_Cipher(char text[], int length, int direction, int k){
    k = k % 26;
    for(int i = 0; i < length; i++){
        if (text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] + k;
            k += direction;
            k = k % 26;
            while (text[i] > 'z'){
                text[i] -= 26;
            }
            while(text[i] < 'a'){
                text[i] += 26;
            }
        }
        else if (text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] + k;
            k += direction;
            while (text[i] > 'Z'){
                text[i] -= 26;
            }
            while (text[i] < 'A'){
                text[i] += 26;
            }
        }
    }
}
void Vigenere_Cipher(char text[], int length, char key[], int key_length){
    int decode_key[key_length];
    for(int i = 0; i < key_length; i++){
        decode_key[i] = key[i] - 'a';
    }
    int decode_key_index = 0;
    for(int i = 0; i < length; i++){
        if (text[i] >= 'a' && text[i] <= 'z'){
            text[i] = text[i] + decode_key[decode_key_index];
            decode_key_index++;
            if (decode_key_index == key_length){
                decode_key_index = 0;
            }
            while (text[i] > 'z'){
                text[i] -= 26;
            }
            while(text[i] < 'a'){
                text[i] += 26;
            }
        }
        else if (text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = text[i] + decode_key[decode_key_index];
            decode_key_index++;
            if (decode_key_index == key_length){
                decode_key_index = 0;
            }
            while (text[i] > 'Z'){
                text[i] -= 26;
            }
            while (text[i] < 'A'){
                text[i] += 26;
            }
        }
    }

}
int main() {
    int way;
    char text[64];
    int index = 64;
    scanf("%d\n", &way);
    for (int i = 0; i < 64; i++){
        scanf("%c", &text[i]);
    }
    if (way == 1){
        swap(text, index);
        int forward_length = index / 2;
        int backward_length = index / 2;
        char forward_text[forward_length];
        for (int i = 0; i < forward_length; i++){
            forward_text[i] = text[i];
        }
        char backward_text[backward_length];
        for (int i = 0; i < forward_length; i++){
            backward_text[i] = text[i + forward_length];
        }
        Caesar_Cipher(forward_text, forward_length, 13);
        char key[] = { 'm', 'e', 'o', 'w'};
        int key_length = 4;
        Vigenere_Cipher(backward_text, backward_length, key, key_length);
        for (int i = 0; i < index; i++){
            if (i < forward_length){
                text[i] = forward_text[i];
            }
            else if (i >= forward_length){
                text[i] = backward_text[i-forward_length];
            }
        }
        rotate(text, 1, 3, index);
        print_text(text, index);
    }
    else if (way == 2){
        rotate(text, 0, 11, index);
        Trithemius_Cipher(text, index, 1, 74);
        int forward_length = index / 2;
        int backward_length = index / 2;
        char forward_text[forward_length];
        for (int i = 0; i < forward_length; i++){
            forward_text[i] = text[i];
        }
        char backward_text[backward_length];
        for (int i = 0; i < forward_length; i++){
            backward_text[i] = text[i + forward_length];
        }
        rotate(forward_text, 0, 1, forward_length);
        rotate(backward_text, 0, 3, backward_length);
        for (int i = 0; i < index; i++){
            if (i < forward_length){
                text[i] = forward_text[i];
            }
            else if (i >= forward_length){
                text[i] = backward_text[i-forward_length];
            }
        }
        int key[] = {4, 3, 1, 2, 7, 6, 5, 8};
        int key_index = 8;
        rail_fence_cipher(text, index, key, key_index);
        print_text(text, index);
    }
    else if (way == 3){
        int first_key[] = {3, 2, 4, 1};
        int first_key_index = 4;
        rail_fence_cipher(text, index, first_key, first_key_index);
        int forward_length = index / 2;
        int backward_length = index / 2;
        char forward_text[forward_length];
        for (int i = 0; i < forward_length; i++){
            forward_text[i] = text[i];
        }
        char backward_text[backward_length];
        for (int i = 0; i < forward_length; i++){
            backward_text[i] = text[i + forward_length];
        }
        Caesar_Cipher(forward_text, forward_length, 8);
        int second_key[] ={1, 8, 4, 3, 6, 5, 7, 2};
        int second_key_length = 8;
        rail_fence_cipher(backward_text, backward_length, second_key, second_key_length);
        for (int i = 0; i < index; i++){
            if (i < forward_length){
                text[i] = forward_text[i];
            }
            else if (i >= forward_length){
                text[i] = backward_text[i-forward_length];
            }
        }
        swap(text, index);
        Trithemius_Cipher(text, index, -1, 602);
        rotate(text, 0 ,7, index);
        print_text(text, index);
    }
    else if (way == 4){
        int forward_length = index / 2;
        int backward_length = index / 2;
        char forward_text[forward_length];
        for (int i = 0; i < forward_length; i++){
            forward_text[i] = text[i];
        }
        char backward_text[backward_length];
        for (int i = 0; i < forward_length; i++){
            backward_text[i] = text[i + forward_length];
        }
        char first_key[] = { 'v', 'i', 'g', 'e', 'n', 'e', 'r', 'e'};
        int first_key_length = 8;
        Vigenere_Cipher(forward_text, forward_length, first_key, first_key_length);
        swap(forward_text, forward_length);
        Trithemius_Cipher(forward_text, forward_length, 1, 3);
        rotate(backward_text, 1, 24, backward_length);
        for (int i = 0; i < index; i++){
            if (i < forward_length){
                text[i] = forward_text[i];
            }
            else if (i >= forward_length){
                text[i] = backward_text[i-forward_length];
            }
        }
        rotate(text, 0, 19, index);
        print_text(text, index);
    }
    else if (way == 5){
        int first_key [] = {3, 1, 7, 6, 4, 5, 2, 8};
        int first_key_index = 8;
        rail_fence_cipher(text, index, first_key, first_key_index);
        int forward_length = index / 2;
        int backward_length = index / 2;
        char forward_text[forward_length];
        for (int i = 0; i < forward_length; i++){
            forward_text[i] = text[i];
        }
        char backward_text[backward_length];
        for (int i = 0; i < forward_length; i++){
            backward_text[i] = text[i + forward_length];
        }
        Caesar_Cipher(forward_text, forward_length, 10);
        int second_key [] = {2, 4, 1, 3};
        int second_key_index = 4;
        rail_fence_cipher(backward_text, backward_length, second_key, second_key_index);
        for (int i = 0; i < index; i++){
            if (i < forward_length){
                text[i] = forward_text[i];
            }
            else if (i >= forward_length){
                text[i] = backward_text[i-forward_length];
            }
        }
        swap(text, index);
        Trithemius_Cipher(text, index, 1, 52);
        rotate(text, 0, 7, index);
        print_text(text, index);
    }
    return 0;
}


