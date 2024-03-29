#include "linkedlist.h"
#include <stdio.h>

void print_list(struct node_t *head)
{
    struct node_t *tmp = head;

    while (tmp != NULL) {
       fprintf(stdout, "%d\n", tmp->val); 
       tmp = tmp->next;
    }
}

int find_list_len(struct node_t *head)
{
    struct node_t *tmp = head;
    int len = 0;

    while (tmp != NULL) {
       len++;
       tmp = tmp->next;
    }

    return len;
}

struct node_t *add_to_front(int val, struct node_t *head)
{
    struct node_t *new_head = malloc(sizeof(struct node_t));
    new_head->val = val;
    new_head->next = head;

    return new_head;
}

void add_to_back(int val, struct node_t *head)
{
    struct node_t *tmp = head;
    struct node_t *new_node = malloc(sizeof(struct node_t));

    while (tmp->next != NULL) {
       tmp = tmp->next;
    }

    new_node->val = val;
    new_node->next = NULL;

    tmp->next = new_node;
}

struct node_t *insert_to_index(int val, int index, struct node_t *head)
{
    struct node_t *tmp = head;
    struct node_t *new_node = malloc(sizeof(struct node_t));

    if (index == 0) {
        new_node = add_to_front(val, head);
        return new_node;
    }

    if ((find_list_len(head) < index) || (index < 0)) {
        fprintf(stderr, "Cannot insert node to specified index\n");
        abort();
    }

    for (int i = 0; i < (index - 1); i++) {
        tmp = tmp->next;
    }

    new_node->val = val;
    new_node->next = tmp->next;
    tmp->next = new_node;

    return head;
}
