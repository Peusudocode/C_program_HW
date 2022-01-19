#include <stdio.h>
#define swap(x, y) {int tmp = x; x = y; y = tmp;}
int N;
int size;
int partition(int a[], int low, int high){
    int pivot = a[high];
    int index = low;
    int small = low;
    while(1){
        if (index == high){
            swap(a[small], a[index]);
            break;
        }

        else if (a[index] > pivot){
            index++;
        }
        else if (a[index] <= pivot){
            swap(a[index], a[small]);
            index++;
            small++;
        }
    }
    return small;
}
void quicksort(int a[], int low, int high){
    int middle;
    if (low >= high) {return;}
    middle = partition(a, low, high);
    quicksort(a,low, middle-1);
    quicksort(a,middle+1,high);
}
void the_lone_number(int array[], int a, int b, int c, int length){
    if (length == 1){
        printf("%d", array[0]);
        exit(0);
    }
    else if((array[a] + array[b]) == array[c]){
        length -= 3;
        int new_array[length];
        int array_index=0, new_array_index=0;
        while(new_array_index < length){
            if (array_index != a && array_index !=b && array_index != c){
                new_array[new_array_index] = array[array_index];
                new_array_index++;
                array_index++;
            }
            else{
                array_index++;
            }
        }
        the_lone_number(new_array, 0, 1, 2, length);
    }
    else {
        if (c < length - 1 && array[a] + array[b] > array[c]){
            the_lone_number(array, a, b, c+1, length);
        }
        else if (b < c - 1 && array[a] + array[b] < array[c]){
            the_lone_number(array, a, b+1, c, length);
        }
        else if (a < b - 1 && array[a] + array[b] < array[c]){
            the_lone_number(array, a + 1, b, c, length);
        }
    }
}
int main() {

    scanf("%d", &N);
    int a[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    size = N - 1;
    quicksort(a,0,size);
    for (int i = 0; i < size; i++){
        for(int j = 1; j < size; j++){
            for(int k = 2; k < size; k++){
                the_lone_number(a, i, j, k, N);
            }
        }
    }
    return 0;
}
