#include <stdio.h>
#include <string.h>
int main() {
    char key[1001], data[10001];
    fgets(key, 1001, stdin);
    fgets(data, 100001, stdin);
    int data_length = strlen(data), key_length = strlen(key);
    key[key_length] = '\0';
    data[data_length] = '\0';
    int i = 0, j = 0;
    while (data[i] != '\n') {
        char k = data[i] ^ key[j];
        //printf("(%c:%c:%x:%d)\n", data[i], key[j], k, j);
        //if (k<=255 && k >= 32)
        printf("%c", k);
        i++;
        if (j == key_length - 2)
            j = 0;
        else
            j++;
    }
    return 0;
}
//?$
//KE
//E
//
//
//zj3)[=D(x?4=x&	8(bG$C;q>R4JCldXW1mI`|QFv<q