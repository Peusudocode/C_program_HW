#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void MoveToTail(){
    struct node* max = malloc(sizeof(struct node));
    max->val = 0;
    max->next = NULL;
    struct node* cur = malloc(sizeof(struct node));
    for (cur = head; cur != NULL; cur = cur->next){
        if (max->val <= cur->val){
            max = cur;
        }
    }
    struct node* pre = malloc(sizeof(struct node));
    for (cur = head, pre = NULL; cur != NULL && cur->val != max->val; pre = cur, cur = cur->next);
    if (pre == NULL){
        head = head->next;
        tail->next = max;
        max->next = NULL;
    }
    else{
        pre->next = max->next;
        tail->next = max;
        max->next = NULL;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        struct node* tmp = malloc(sizeof(struct node));
        scanf("%d", &tmp->val);
        tmp->next = NULL;
        if(i == 1)
            head = tmp;
        else
            tail->next = tmp;
        tail = tmp;
    }
    MoveToTail();
    for(struct node* cur = head; cur != NULL; cur = cur->next)
        printf("%d ", cur->val);
    return 0;
}