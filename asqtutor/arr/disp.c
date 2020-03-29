#include<stdio.h>
void Disp(int d[],int n)
{
  int i;
  printf("\n\tArray: \n");
  printf("\n\tFirst element --> |");
  for(i=0;i<n;i++) {
    printf("%2d |",d[i]);
  }
  printf(" -->Last element\n");
}
