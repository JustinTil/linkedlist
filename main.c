#include <stdio.h>
#include "linkedlist.h"

int main(){

    struct node_t n1, n2, n3, n4, n5, n6;
    n1.val = 1;
    n1.next = &n2;
    n2.val = 2;
    n2.next = &n3;
    n3.val = 3;
    n3.next = &n4;
    n4.val = 4;
    n4.next = &n5;
    n5.val = 5;
    n5.next = &n6;
    n6.val = 6;
    n6.next = NULL;
    struct node_t *head = &n1;

    print_list(head);

    int index = 6;
    struct node_t *test = node_at_index(index, head);
    if (test == NULL)
        printf("Index not valid\n");
    else
        printf("Value at index %d = %d\n", index, test->val);

    return 0;
}