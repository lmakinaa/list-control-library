#ifndef UTILS_H
# define UTILS_H

#include <stdlib.h>
#include <stdio.h>

struct s_node t_node;
typedef struct s_node{
	int value;
	t_node *next;
}t_node;

typedef struct s_list{
	t_node *head;
	t_node *tail;
}t_list;


t_list *c_list(void);
t_node *c_node(int value);
void l_display(t_list *list);
void l_addfront(t_list *list, t_node *node);
void l_addback(t_list *list, t_node *node);
void l_addafter(t_list *list, t_node *node1 , t_node *node2);
void l_addbefore(t_list *list, t_node *node1, t_node *node2);
void l_free(t_list *list);




#endif