#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct  //typedef of struct as queue
{
  int front;
  int rear;
  int item[MAX];
}queue;
void Enque(queue *op,int new);
int Denque(queue *op);
void Que_display(queue *op);
void Adjust(queue *op);
