#include <stdio.h>

int main() {
    int k;
    char ch;
    scanf("%d \n", &k);
    do{
        ch = getchar();
        if (ch >= 'a' && ch <= 'z') {
            while(k > 26) {
                k = k - 26;
            }
            ch = ch + k;
            if (ch > 'z' || ch < 'a') {
                if (ch > 'z') {
                    do {
                        ch = ch - 'z' + 'a' - 1;
                    } while (ch > 'z');
                }
                else if (ch < 'a') {
                    do {
                        ch = ch + 'z' - 'a' + 1;
                    } while (ch < 'a');
                }
            }
        }
        else if (ch >= 'A' && ch <= 'Z') {
            while(k > 26) {
                k = k - 26;
            }
            ch = ch + k;
            if (ch > 'Z' || ch < 'A') {
                if (ch > 'Z') {
                    do {
                        ch = ch - 'Z' + 'A' - 1;
                    } while (ch > 'Z');
                }
                else if (ch < 'A') {
                    do {
                        ch = ch + 'Z' - 'A' + 1;
                    } while (ch < 'A');
                }
            }
        }
        if (ch !='\n') {
            printf("%c", ch);
        }
    }while (ch != '\n');
    return 0;
}
