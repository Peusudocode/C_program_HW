#include <stdio.h>
#include <string.h>

void swap(char *i, char *k){
    char temp = *i;
    *i = *k;
    *k = temp;
}
void permutation(char text[], int s, int n){
    if (s != n){
        for (int i = s; i < n; i++){
            swap(&text[i], &text[s]);
            permutation(text, s+1, n);
            swap(&text[i], &text[s]);
        }
    }
    else{
        printf("%s\n", text);
    }
}

int main() {
    char alphabets[6];
    scanf("%s", alphabets);
    int n = strlen(alphabets);
    for (int i = 0; i < n; i++){
        char k = alphabets[i];
        int index = i;
        for (int j = i; j < n; j++){
            if (k > alphabets[j]){
                k = alphabets[j];
                index = j;
            }
        }
        alphabets[index] = alphabets[i];
        alphabets[i] = k;
    }
    permutation(alphabets, 0, n);
    return 0;
}
