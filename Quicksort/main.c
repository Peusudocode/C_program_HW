#include <stdio.h>
#define N 500
#define swap(x, y) {int tmp = x; x = y; y = tmp;}

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
    for (int i = 0; i < size ; i++){
        if (i == low){
            printf("[ ");
        }
        if (i == middle){
            printf("*");
        }

        printf("%d ",a[i]);
        if (i == high){
            printf("] ");
        }
    }
    printf("\n");
    quicksort(a,low, middle-1);
    quicksort(a,middle+1,high);
}



int main(void)
{
    int array[N];
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}