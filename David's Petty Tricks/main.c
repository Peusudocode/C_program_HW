#include<stdio.h>
#include<stdbool.h>
void reverse_caterpillar(char *l, char *r){
    char copy_text[100000], *p, *q;
    p = l;
    q = r;
    int index = 0;
    while(p != q){
        copy_text[index] = *p;
        index++;
        p++;
    }
    copy_text[index] = *q;
    while(l != r){
        *l = copy_text[index];
        index--;
        l++;
    }
    *l = copy_text[index];
}
void swap(char *a, char *b){
    char k = *a;
    *a = *b;
    *b = k;
}
void lineup_again(char line[]){
    char *p, *q;
    int index = 0;
    p = line;
    while(*p != '\0'){
        if(*p == 'A'){
            while(*p != 'Z'){
                p++;
            }
        }
        else if (*p == 'Z'){
            q = p;
            while(*q != 'A'){
                q++;
                index++;
            }
            if(index >= 1){
                reverse_caterpillar(p, q);
                p = q;
            }
            else if (index == 1){
                swap(p, q);
                p = q;
            }
        }
        p++;
    }
}



int main() {
    char line[1000000];
    scanf("%s", line);
    lineup_again(line);
    printf("%s", line);
}