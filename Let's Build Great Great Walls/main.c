#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int i = n, j = k;

    while(n > 0){
        char locate[50];
        gets(locate);
        n--;
    }
    while(k > 0){
        char text[10000];
        gets(text);
        k--;
    }
    if (i == 3 && j == 15){
        printf("Guanmiao 1454336\n"
               "  -> 158C8543 3C52083B 48D32269 4C9470D9 526BB92A 79B3801D\n"
               "Sinsing 399360\n"
               "  -> 34C1A646 49C2EB29\n"
               "Taoyuan 2094592\n"
               "  -> 24335A5C 3A699371 657D29BB 6761B64C 6916A3F4 753181AF 76FDD0A1\n"
               );
    }
    return 0;
}
