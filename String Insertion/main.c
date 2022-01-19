#include <stdio.h>
#include <string.h>
#define MAX_LEN_P 100000
#define MAX_LEN_S 100

void strins(char *P, char *s, char *t){
    char *P_start, *s_start, *t_start;
    int t_len = strlen(t);
    P_start = P;
    s_start = s;
    t_start = t;
    while(*P_start != '\0'){
        if (*s_start == *P_start){
            s_start++;
        }
        P_start++;
        if(*s_start == '\0'){
            int array_len = strlen(P_start) + t_len +1;
            char array[array_len], *P_temp = P_start;
            for(int i = 0; i < array_len; i++){
                if (i < t_len){
                    array[i] = *t_start;
                    t_start++;
                }
                else{
                    array[i] = *P_temp;
                    P_temp++;
                }
            }
            P_temp = P_start;
            for(int i = 0; i < array_len; i++){
                *P_temp = array[i];
                P_temp++;
            }
            t_start = t;
            P_start += t_len;
            s_start = s;
        }
    }
}

int main() {
    char P[MAX_LEN_P + 1], s[MAX_LEN_S + 2], t[MAX_LEN_S + 2];
    size_t P_len = 0;
    for (char buf[MAX_LEN_P + 1] = ""; strcmp(buf, "---\n"); fgets(buf, MAX_LEN_P + 1, stdin)) {
        size_t len = strlen(buf);
        if (len + P_len > MAX_LEN_P) {
            fprintf(stderr, "The length of the paragraph exceeds %d\n", MAX_LEN_P);
            return 1;
        }
        strncat(P, buf, len + 1);
        P_len += len;
    }
    fgets(s, MAX_LEN_S + 2, stdin);
    s[strlen(s) - 1] = '\0';  // remove newline
    fgets(t, MAX_LEN_S + 2, stdin);
    t[strlen(t) - 1] = '\0';  // remove newline
    strins(P, s, t);
    printf("%s", P);
    return 0;
}