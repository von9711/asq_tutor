#include"cirfiles.h"
int Cir_delete(cirqueue *q)
{
  int ans,i,j,del;
  do {
    system("clear");
    printf("\n\t\tQUEUE(FIFO) TUTOR (Circular)\v\v");
    if(q->front==-1 && q->rear==-1) {   //checking for Underflow
      printf("\n\t***Underflow: queue is empty***\n");
      return 0;
    }
    printf("\n\tBefore deletion: \n");
    Cir_display(q);
    printf("\n\tDeleting item\n");
    del=Cir_denque(q);
    printf("\n\tDelted item: %d\n",del);
    printf("\n\tAfter deletion: \n");
    if(q->front==-1 && q->rear==-1)   //check if queue is empty or not
      printf("\n\t**Empty queue**\n");
    else
      Cir_display(q);
    printf("\n Want to delete another item:\n y for yes \tn for no\n ");
    while((getchar())!='\n');
    ans=getchar();
  }while(ans=='y' || ans=='Y');
  return 0;
}
