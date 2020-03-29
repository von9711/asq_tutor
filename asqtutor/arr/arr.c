#include"arrfiles.h"    //userdefined header file
int Insert(int d[],int *k);
int Delete(int d[],int *k);
int *Create(int *m);
int Array()
{
  int *arr=NULL,ans,n=0,ch;

  do {
    system("clear");
    printf("\n\t\tARRAY TUTOR\v\v");
    printf("\n\t1.Create array\n\t2.Insertion\n\t3.Deletion\n\t4.Display\n\t5.Back\n");
    printf("\tChoose one: ");
    scanf("%d",&ch);
    switch(ch) {
      case 1:
        arr=Create(&n);   //creating an array
        break;

      case 2:
          Insert(arr,&n);   //insert new element in array
          break;

      case 3:
          Delete(arr,&n);   //delete array element
          break;

      case 4:
        system("clear");
        printf("\n\t\tARRAY TUTOR\v\v");
        if(n<=0)
          printf("\n\t**Empty array**\n");
        else
          Disp(arr,n);
        break;

      case 5:
        free(arr);
        return 0;
        break;

      default:
          printf("\n\t*Invalid option*\n");
    }
    printf("\n Press 1 for Menu \t Press 0 for Exit\n ");
    scanf("%d",&ans);
  }while(ans==1);
  free(arr);
  printf("\n");
  return 0;
}
