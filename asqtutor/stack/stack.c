#include"stkfiles.h"
int Stk_insert(stack *ps);
int Stk_delete(stack *ps);
int Stk()
{
  int ch,ans;
  stack s;
  s.top=-1;   //For empty stack
  do {
    system("clear");
    printf("\n\t\tSTACK(LIFO) TUTOR\v\v");
    printf("\n\t1.Insertion(PUSH)\n\t2.Deletion(POP)\n\t3.Display\n\t4.Back\n");
    printf("\tChoose one: ");
    scanf("%d",&ch);
    switch(ch) {
      case 1:
        Stk_insert(&s);
        break;

      case 2:
        Stk_delete(&s);
        break;

      case 3:
        system("clear");
        printf("\n\t\tSTACK(LIFO) TUTOR\v\v");
        if(s.top<0)     //checking if stack is empty or not
          printf("\n\t**Empty stack**\n");
        else
          Stk_display(&s);
        break;

      case 4:
        return 0;

      default:
        printf("\n\t*Invalid option*\n");
    }
    printf("\n Press 1 for Menu \t Press 0 for Exit\n ");
    scanf("%d",&ans);
  }while(ans==1);
  return 0;
}
