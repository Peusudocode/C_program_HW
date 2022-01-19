#include <stdio.h>

int main() {
    int n, a, b, win, total, k;
    float rate;
    win = 0;
    scanf("%d", &n);
    total = n;
    while(n != 0){
        k = 0;
        for (int i = 0; i < 3; i++){
            scanf("%d %d",&a, &b);
            if ( a > b){
                k++;
            }
            else if ( b > a){
                k--;
            }
        }
        switch (k) {
            case 3:
            case 2:
            case 1: printf("Win\n");
                    win++;
                    break;
            case 0: printf("Tie\n");
                    break;
            case -1:
            case -2:
            case -3: printf("Lose\n");
        }
        n--;
    }
    rate = (float)win / (float)total * 100;
    printf("%.2f%%", rate);
    return 0;
}
