#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct //typedef of struct as stack
{
  int top;
  int item[MAX];
}stack;
void Push(stack *op,int new);
int Pop(stack *op);
void Stk_display(stack *op);
