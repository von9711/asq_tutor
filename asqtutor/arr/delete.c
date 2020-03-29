#include"arrfiles.h"
int Delete(int d[],int *k)
{
  int m,ans,ch,i,flag=0;
  do {
    system("clear");
    printf("\n\t\tARRAY TUTOR\v\v");
    if(*k<=0) {   //checking if array is empty
      printf("\n\t**Empty array: Deletion operation not possible**\n");
      return 0;
    }
    printf("\n\t1.First element\n\t2.Last element\n\t3.Particular element\n");
    printf("\tChoose one: ");
    scanf("%d",&ch);
    switch(ch) {
      case 1:
        m=1;
        printf("\n\tBefore deletion: \n");
        Disp(d,*k);
        break;

      case 2:
        m=*k;
        printf("\n\tBefore deletion: \n");
        Disp(d,*k);
        break;

      case 3:
        printf("\n\tBefore deletion: \n");
        Disp(d,*k);
        printf("\n\tEnter the position for deletion: ");
        scanf("%d",&m);
        if(m>*k || m==0) {   //checking if entered position is valid or not
          printf("\n\tPositon does not exist\n");
          flag++;
        }
        break;

      default:
       printf("\n\t*Invalid option*\n");
       flag++;
    }
    if(flag==0) {
      while((getchar())!='\n');
      printf("\n Want to insert an element at that position:\n y for yes \tn for no\n ");
      ans=getchar();
      if (ans=='y') {     //for modifying the element
         printf("\n\tEnter the new element: ");
         scanf("%d",&d[m-1]);
         printf("\n\t**changed**\n");
       }
      else {    //for deleting the element
        for(i=m-1;i<*k;i++)
          d[i]=d[i+1];
        printf("\n\t**Deleted**\n");
        --(*k);
        d=realloc(d,sizeof(int)*(*k));   //reallocating array, so element deleted is removed
      }
      printf("\n\tAfter deletion or change:\n");
      if(*k<=0)
        printf("\n\t**Empty array**\n");
      else
        Disp(d,*k);
    }
    printf("\n Want to delete another element:\n y for yes \tn for no\n ");
    while((getchar())!='\n');
    ans=getchar();
  }while(ans=='y' || ans=='Y');
  return 0;
}
