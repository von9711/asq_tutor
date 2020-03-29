#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct  //typedef of struct as cirqueue
{
  int front;
  int rear;
  int item[MAX];
}cirqueue;
void Cir_enque(cirqueue *op,int new);
int Cir_denque(cirqueue *op);
void Cir_display(cirqueue *op);
