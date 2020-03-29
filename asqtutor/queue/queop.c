#include"quefiles.h"
void Enque(queue *op,int new)
{
  if(op->front==-1) {
    op->front=0;
    op->rear=0;
  }
  else
    ++(op->rear);
  op->item[op->rear]=new;
}

int Denque(queue *op)
{
  int temp;
  temp=op->item[op->front];
  op->item[op->front]=0;
  if(op->front==op->rear) { //if item was last element then
    op->front=-1;
    op->rear=-1;
  }
  else
    ++(op->front);
  return temp;
}

void Que_display(queue *op)
{
  int i;
  printf("\n\tQueue: \n");
  printf("\n\tFront: %d\t Rear: %d\n\n",op->front+1,op->rear+1);
  printf("\n\tPos: ");
  for(i=0; i<MAX; i++)
    printf("  %d ",i+1);
  printf("\n\tQue: |");
    for(i=0; i<MAX; i++) {
      if(i>=op->front && i<=op->rear)
        printf("%2d |",op->item[i]);
      else
        printf("   |");
    }
  printf("\n");
}


void Adjust(queue *op)
{
  int i,j;
  if(op->front==0 || op->front==-1)   //if first element is already at startings
    printf("\n\t**No adjustment required**\n");
  else {
    printf("\n\tBefore adjustment\n");
    Que_display(op);
    printf("\n\t**Adjusting Queue: Shifting items to starting position and adjusting Front and Rear accordingly**\n");
    for(i=0,j=op->front; i<MAX,j<MAX; i++,j++)
      op->item[i]=op->item[j];
    op->rear-=op->front;
    op->front=0;
  }
  printf("\n\tAfter adjustment: \n");
  Que_display(op);
}
