#include <stdio.h>
#include "linkedlist.h"

int main(){

    struct node_t n1, n2, n3;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    struct node_t *head = &n1;

    printf("before\n");
    print_list(head);

    printf("after\n");
    head = insert_to_index(69, 0, head);
    print_list(head);

    return 0;
}