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
    printf("________________________\n");

    if ((head = insert_to_index(69, 400, head)) == NULL) {
        fprintf(stderr, "Cannot insert at index\n");
    } else {
        print_list(head);
    }
        
    return 0;
}