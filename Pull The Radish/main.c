#include<stdio.h>
#include<stdlib.h>

int pull_radish(int *l, int *r, int *pos, int x){
    int number = 0;
    int *l_pos = pos, *r_pos = pos;
    while(r_pos <= r){
        r_pos += x;
        if (*r_pos == 1){
            number++;
            *r_pos = 0;
        }
    }
    while(l_pos >= l){
        l_pos -= x;
        if (*l_pos == 1){
            number++;
            *l_pos = 0;
        }
    }
    return number;
}

int main() {
    int N, y, x;
    scanf("%d %d %d", &N, &y, &x);
    int *farm = malloc(N*sizeof(int));

    // initialize farm[N]
    for(int i=0; i<N; i++) {
        farm[i]=1;
    }

    int total = pull_radish(&farm[0], &farm[N-1], &farm[y], x);
    printf("%d\n", total);
    for(int i=0; i<N; i++) {
        printf("%d ", farm[i]);
    }

    return 0;
}