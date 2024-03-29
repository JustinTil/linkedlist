#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

struct node_t {
    int val;
    struct node_t *next;
};

void print_list(struct node_t *head);
int find_list_len(struct node_t *head);
struct node_t *add_to_front(int val, struct node_t *head);
void add_to_back(int val, struct node_t *head);
struct node_t *insert_to_index(int val, int index, struct node_t *head);
struct node_t *find_next_val(int val, struct node_t *first_node);
struct node_t *node_at_index(int index, struct node_t *head);

#endif