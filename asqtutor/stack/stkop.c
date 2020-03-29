#include"stkfiles.h"
void Push(stack *op,int new)
{
  ++(op->top);
  op->item[op->top]=new;
}

int Pop(stack *op)
{
  int temp;
  temp=op->item[op->top];
  --(op->top);
  return temp;
}

void Stk_display(stack *op)
{
  int i;
  printf("\n\tStack:\n");
  printf("\n\t   | %3d | ---> Top\n",op->item[op->top]);
  for(i=op->top-1;i>=0;i--)
    printf("\t   | %3d |\n",op->item[i]);
  printf("\t   -------\n");
}
