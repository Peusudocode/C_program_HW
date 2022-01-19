#include <stdio.h>
void produce_c_array(int a[], int b[], int c[]){
    int length_c = sizeof(c)/ sizeof(c[0]);
    int index_a = 0;
    int index_b = 0;
    int index_c = 0;
    while(index_c < length_c){
        if (a[index_a] < b[index_b]){
            c[index_c] = a[index_a];
            index_c++;
            index_a++;
        }
        else if (a[index_a] > b[index_b]){
            c[index_c] = b[index_b];
            index_c++;
            index_b++;
        }
        else if (a[index_a] == b[index_b]){
            c[index_c] = b[index_b];
            c[index_c + 1] = a[index_a];
            index_c++;
            index_b++;
            index_c++;
            index_a++;
        }
    }

}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int a_array [a];
    int b_array [b];
    for (int i = 0; i < a; i++){
        scanf("%d", &a_array[i]);
    }
    for (int i = 0; i < b; i++){
        scanf("%d", &b_array[i]);
    }
    int c_array [a*b] ;
    produce_c_array(a_array, b_array, c_array);

    for (int i = 0; i < a*b ; i++){
        printf("%d", c_array[i]);
    }
    return 0;
}
