#include <stdio.h>
int kind;
int node;

void pre_order_traversal(int a[], int index){
    if (index <= node){
        if (index <= node){
            printf("%d ", a[index]);
        }
        pre_order_traversal(a, index*2);
        pre_order_traversal(a, index*2+1);
    }
}
void In_order_traversal(int a[], int index){
    if (index <= node){
        In_order_traversal(a, index*2);
        if (index <= node){
            printf("%d ", a[index]);
        }
        In_order_traversal(a, index*2+1);
    }
}
void Post_order_traversal(int a[], int index){
    if (index <= node){
        Post_order_traversal(a, index*2);
        Post_order_traversal(a, index*2+1);
        if (index <= node){
            printf("%d ", a[index]);
        }
    }
}
int main() {
    scanf("%d", &kind);
    scanf("%d", &node);
    int a[node+1];
    for (int i = 1; i < node + 1; i++){
        scanf("%d", &a[i]);
    }
    if (kind==0){
        pre_order_traversal(a, 1);
    }
    else if (kind == 1){
        In_order_traversal(a,1);
    }
    else if (kind == 2){
        Post_order_traversal(a, 1);
    }
    return 0;
}
