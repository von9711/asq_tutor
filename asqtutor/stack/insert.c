#include"stkfiles.h"
int Stk_insert(stack *ps)
{
  int ch,ans,value;
  do {
    system("clear");
    printf("\n\t\tSTACK(LIFO) TUTOR\v\v");
    if(ps->top==MAX-1) {    //checking for overflow
      printf("\n\t***Overflow: stack is full***\n");
      return 0;
    }
    printf("\n\tBefore insertion:\n");
    if(ps->top<0)           //checking if stack is empty or not
      printf("\n\t**Empty stack**\n");
    else
      Stk_display(ps);
    printf("\n\tInsert new item\n");
    printf("\n\tEnter element: ");
    scanf("%d",&value);
    Push(ps,value);
    printf("\n\tAfter insertion:\n");
    Stk_display(ps);
    printf("\n Want to insert another item:\n y for yes \tn for no\n ");
    while((getchar())!='\n');
    ans=getchar();
  }while(ans=='y' || ans=='Y');
  return 0;
}
