#include <stdio.h>
int treasure(n){
    if (n == 1){
        return 1;
    }
    else if ( n % 2 == 0){
        return treasure(n/2);
    }
    else if ( n % 2 == 1){
        return treasure(n+1) + treasure(n - 1);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", treasure(n));
    return 0;
}

