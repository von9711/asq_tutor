#include"cirfiles.h"
int Cir_insert(cirqueue *q)
{
  int ans,i,j,value;
  do {
    system("clear");
    printf("\n\t\tQUEUE(FIFO) TUTOR (Circular)\v\v");
    if((q->front==0 && q->rear==MAX-1) || q->front==q->rear+1) {  //checking for Overflow
        printf("\n\t***Overflow: queue is full***\n");
        return 0;
    }
    printf("\n\tBefore Insertion: \n");
    if(q->front==-1)
        printf("\n\t**Empty queue**\n");
    else
        Cir_display(q);
    printf("\n\tInsert new item\n");
    printf("\n\tEnter element:  ");
    scanf("%d",&value);
    Cir_enque(q,value);
    printf("\n\tAfter insertion: \n");
    Cir_display(q);
    printf("\n Want to insert another item:\n y for yes \tn for no\n ");
    while((getchar())!='\n');
    ans=getchar();
  }while(ans=='y' || ans=='Y');
  return 0;
}
