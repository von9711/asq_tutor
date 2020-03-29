#include"stkfiles.h"
int Stk_delete(stack *ps)
{
  int ch,ans,del;
  do {
    system("clear");
    printf("\n\t\tSTACK(LIFO) TUTOR\v\v");
    if(ps->top==-1) {       //checking for Underflow
      printf("\n\t***Underflow: stack is empty***\n");
      return 0;
    }
    printf("\n\tBefore deletion:\n");
    Stk_display(ps);
    printf("\n\tDeleting item\n");
    del=Pop(ps);
    printf("\n\tDelted item: %d\n",del);
    printf("\n\tAfter deletion:\n");
    if(ps->top<0)     //checking if stack is empty or not
      printf("\n\t**Empty stack**\n");
    else
      Stk_display(ps);
    printf("\n Want to delete another item:\n y for yes \tn for no\n ");
    while((getchar())!='\n');
    ans=getchar();
  }while(ans=='y' || ans=='Y');
  return 0;
}
