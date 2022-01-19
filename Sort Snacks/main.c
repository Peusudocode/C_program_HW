#include<stdio.h>
#include<stdlib.h>

struct snack
{
    int id;
    int price;
    int weight;
    double value;
};

int cmp(const void *a, const void *b);
void sort_snacks(struct snack snacks[], int n);

int main() {
    int n;
    struct snack snacks[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        snacks[i].id = i+1;
        scanf("%d %d", &snacks[i].price, &snacks[i].weight);
    }
    sort_snacks(snacks, n);
    for(int i=0; i<n; i++) {
        printf("%d %.2f\n", snacks[i].id, snacks[i].value);
    }
    return 0;
}
int cmp(const void *a, const void *b){
    struct snack *snack_a =  (struct snack*) a;
    struct snack *snack_b =  (struct snack*) b;
    if (snack_a->value < snack_b->value){
        return 1;
    }
    else if (snack_a->value == snack_b->value && snack_a->price > snack_b->price){
        return 1;
    }
    else if (snack_a->value == snack_b->value && snack_a->price == snack_b->price && snack_a->id > snack_b->id){
        return 1;
    }
    else{
        return 0;
    }
}
void sort_snacks(struct snack snacks[], int n){
    for (int i = 0; i < n; i++){
        snacks[i].value = (double)snacks[i].weight / (double)snacks[i].price;
    }
    qsort(snacks, n, sizeof(struct snack), cmp);
}