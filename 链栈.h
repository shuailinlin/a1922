#include <stdio.h>
#include <malloc.h>	

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
} LinkStack,node;
LinkStack* InitStack();
int Empty(LinkStack *s);
void Push(LinkStack *s,dataType x);
void Pop(LinkStack *s);
dataType GetTop(LinkStack *s);
