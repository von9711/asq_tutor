#include"cirfiles.h"
void Cir_enque(cirqueue *op,int new)  //Enque new element
{
  if(op->front==-1) {
    op->front=0;
    op->rear=0;
  }
  else if(op->rear==MAX-1)
    op->rear=0;
  else
    ++(op->rear);
  op->item[op->rear]=new;
}

int Cir_denque(cirqueue *op)  //remove element
{
  int temp;
  temp=op->item[op->front];
  op->item[op->front]=0;
  if(op->front==op->rear) {
    op->front=-1;
    op->rear=-1;
  }
  else if(op->front==MAX-1)
    op->front=0;
  else
    ++(op->front);
  return temp;
}

void Cir_display(cirqueue *op)  //display circular queue
{
  int i;
  printf("\n\tQueue: \n");
  printf("\n\tFront: %d\t Rear: %d\n\n",op->front+1,op->rear+1);
  printf("\n\tPos: ");
  for(i=0; i<MAX; i++)
    printf("  %d ",i+1);
  printf("\n\tQue: |");
    for(i=0; i<MAX; i++) {
      if(op->front<=op->rear) {
        if(i>=op->front && i<=op->rear)
          printf("%2d |",op->item[i]);
        else
          printf("   |");
      }
      else if(op->front>op->rear) {
        if(i>=op->front || i<=op->rear)
          printf("%2d |",op->item[i]);
        else
          printf("   |");
      }
      else
        printf("   |");
    }
  printf("\n");
}
