#include <stdio.h>
#define MODULUS 10007
int gcd(int a, int b){
    if (a == 0 || b == 0){
        return 0;
    }
    else if(a % b == 0)
    {
        return b;
    }
    else
        return gcd(b, a % b);
}
int getSecret(int n){
    int N = n;
    int array [10] = {0};
    int k = 0;
    int tmp;
    int upper = 0, lower = 0;
    int a, b;
    if (n / 10 == 0){
        return n;
    }
    while (n > 0){
        array[k] = n % 10;
        n /= 10;
        k++;
    }
    if (k % 2 == 0){
        a = k / 2;
        for (int i = 0; i < a; i++){
            tmp = array[i];
            b = i;
            while(b > 0){
                tmp *= 10;
                b--;
            }
            lower += tmp;
        }
        for (int i = a; i < k; i++){
            tmp = array[i];
            b = i - a;
            while(b > 0){
                tmp *= 10;
                b--;
            }
            upper += tmp;
        }
    }
    else if (k % 2 == 1){
        a = (k + 1) / 2;
        for (int i = 0; i < a; i++){
            tmp = array[i];
            b = i;
            while(b > 0){
                tmp *= 10;
                b--;
            }
            lower += tmp;
        }
        for (int i = a ; i < k; i++){
            tmp = array[i];
            b = i - a ;
            while(b > 0){
                tmp *= 10;
                b--;
            }
            upper += tmp;
        }
    }
    return N % MODULUS + getSecret(gcd(upper, lower)) % MODULUS;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", getSecret(n));
    return 0;
}
