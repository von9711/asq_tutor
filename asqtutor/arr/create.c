#include"arrfiles.h"
int *Create(int *m)
{
  int i,*d;
  printf("\n\tEnter the number of elements: ");
  scanf("%d",m);
  d=calloc(*m,sizeof(int));
  printf("\n\tEnter the %d integer numbers: \n\t",*m);
  for(i=0;i<*m;i++)
    scanf("%d",&d[i]);
  return d;
}
