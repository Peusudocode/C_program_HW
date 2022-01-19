#include <stdio.h>
void rotation_operation(int array[], int m, int n, int direction){
    int copy_array[m*n];
    for(int i = 0; i < m*n; i++){
        copy_array[i] = array[i];
    }
    if (direction == 0){
        int origin_index = (m-1) * n;
        int new_m = n;
        int new_n = m;
        int change_row = 1;
        for (int i = 0; i < new_m * new_n; i++){
            array[i] = copy_array[origin_index];
            if ((i+1) % new_n == 0){
                origin_index = (m-1) * n + change_row;
                change_row++;
            }
            else {
                origin_index -= n;
            }
        }
    }
    else if (direction == 1){
        int origin_index = n - 1;
        int new_m = n;
        int new_n = m;
        int change_row = 2;
        for (int i = 0; i < new_m * new_n; i++){
            array[i] = copy_array[origin_index];
            if ((i+1) % new_n == 0){
                origin_index = n - change_row;
                change_row++;
            }
            else {
                origin_index += n;
            }
        }
    }
}
void vertical_flip(int a[], int m, int n){
    int copy_array[m*n];
    for(int i = 0; i < m*n; i++){
        copy_array[i] = a[i];
    }
    int origin_index = (m-1) * n;
    int change_row = 2;
    for (int i = 0; i < m*n; i++){
        a[i] = copy_array[origin_index];
        if ((i+1) % n == 0){
            origin_index = (m - change_row) * n;
            change_row++;
        }
        else{
            origin_index++;
        }
    }
}
void horizon_flip(int a[], int m, int n){
    int copy_array[m*n];
    for(int i = 0; i < m*n; i++){
        copy_array[i] = a[i];
    }
    int origin_index = n - 1;
    int change_row = 2;
    for (int i = 0; i < m*n; i++){
        a[i] = copy_array[origin_index];
        if ((i+1) % n == 0){
            origin_index = change_row * n - 1;
            change_row++;
        }
        else{
            origin_index--;
        }
    }
}
void crop (int a[], int m, int n, int left, int right, int upper, int lower){
    int copy_array[m*n];
    for(int i = 0; i < m*n; i++){
        copy_array[i] = a[i];
    }
    int new_m = lower - upper + 1;
    int new_n = right - left + 1;
    int origin_index = (left - 1) + (upper - 1) * n;
    for (int i = 0; i < new_m * new_n; i++){
        a[i] = copy_array[origin_index];
        if (origin_index % n != (right - 1)){
            origin_index++;
        }
        else{
            origin_index = origin_index + n - (right - left);
        }
    }

}
void print_array(int a[], int m, int n){
    for (int i = 0; i < m*n; i ++){
        printf("%d ", a[i]);
        if ( (i+1) % n == 0){
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int array[m*n];
    for(int i = 0; i < m*n; i++){
        scanf("%d", &array[i]);
    }
    int x;
    scanf("%d", &x);
    char operation;
    while(x > 0){
        operation = getchar();
        if (operation == 'r'){
            char direction;
            operation = getchar();
            direction = getchar();
            int times;
            if (direction == 'r'){
                scanf("%d", &times);
                for (int i = 0; i < times; i++){
                    rotation_operation(array, m, n, 0);
                    int tmp = n;
                    n = m;
                    m = tmp;
                }
                x--;
            }
            else if (direction == 'l'){
                scanf("%d", &times);
                for (int i = 0; i < times; i++){
                    rotation_operation(array, m, n, 1);
                    int tmp = n;
                    n = m;
                    m = tmp;
                }
                x--;
            }
        }
        else if (operation == 'v'){
            vertical_flip(array, m, n);
            x--;
        }
        else if (operation == 'h'){
            horizon_flip(array, m, n);
            x--;
        }
        else if (operation == 'c'){
            int left, right, upper, lower;
            scanf(" %d %d %d %d", &left, &right, &upper, &lower);
            crop(array, m, n, left, right, upper, lower);
            m = lower - upper + 1;
            n = right - left + 1;
            x--;
        }
        else if (operation == 'p'){
            print_array(array, m, n);
            x--;
        }
    }
    return 0;
}
