#include <stdio.h>
#include <stdlib.h>

struct node {
    int id;
    struct node *next;
};

struct node *read_data(int *size){
    *size = 0;
    int input_id;
    for (int i = 0; i < 3; i++){
        scanf("d", input_id);
        struct node *new_adj = malloc(sizeof(struct node));
        struct node *next_adj = malloc(sizeof(struct node));
        new_adj->id = input_id;
        new_adj->next = NULL;
        scanf("%d", input_id);
        while(input_id != 0){
            next_adj->id = input_id;
            next_adj->next = NULL;
            new_adj->next = new_adj;
            new_adj = next_adj;
        }
    }

}

void print_data(struct node *adj, int size) {
    if (!adj)
        return;
    for (int i = 0; i < size; ++i) {
        printf("%d -> ", adj[i].id);
        for (struct node *ptr = adj[i].next; ptr != NULL; ptr = ptr->next)
            printf("%d ", ptr->id);
        putchar('\n');
    }
}

void free_data(struct node *adj, int size) {
    if (!adj)
        return;
    for (int i = 0; i < size; ++i) {
        struct node *ptr = adj[i].next;
        while (ptr) {
            adj[i].next = ptr->next;
            free(ptr);
            ptr = adj[i].next;
        }
    }
    free(adj);
}

int main() {
    int size;
    struct node *adj = read_data(&size);
    if (!adj) {
        fprintf(stderr, "Error allocating memory.");
        exit(1);
    }
    print_data(adj, size);
    free_data(adj, size);
    return 0;
}