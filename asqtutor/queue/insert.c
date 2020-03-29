#include"quefiles.h"
int Que_insert(queue *q)
{
  int ans,i,j,flag,value;
  do {
    system("clear");
    printf("\n\t\tQUEUE(FIFO) TUTOR (Simple)\v\v");
    flag=0;
    if(q->rear==MAX-1) {  //checking for Overflow
      if(q->front==0) {
        printf("\n\t***Overflow: queue is full***\n");
        return 0;
      }
      else {
        printf("\n\t**Adjustment needed: Rear is at end and Front is not a starting**\n");
        Adjust(q);    //adjustin queue by shifting toward left
        flag++;
      }
    }
    if(flag==0) {
      printf("\n\tBefore Insertion: \n");
      if(q->front==-1 && q->rear==-1)
        printf("\n\t**Empty queue**\n");
      else
        Que_display(q);
    }
    printf("\n\tInsert new item\n");
    printf("\n\tEnter element:  ");
    scanf("%d",&value);
    Enque(q,value);
    printf("\n\tAfter insertion: \n");
    Que_display(q);
    printf("\n Want to insert another item:\n y for yes \tn for no\n ");
    while((getchar())!='\n');
    ans=getchar();
  }while(ans=='y' || ans=='Y');
  return 0;
}
