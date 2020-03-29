#include"arrfiles.h"
int Insert(int d[],int *k)
{
  int m,i,ans,ch,flag;
  do {
    system("clear");
    printf("\n\t\tARRAY TUTOR\v\v");
    if(*k<=0) {
      printf("\n\t**Empty array: Insertion operation not possible**");
      return 0;
    }
    printf("\n\t1.At beginning\n\t2.At end\n\t3.At particular position\n");
    printf("\tChoose one: ");
    scanf("%d",&ch);
    flag=0;
    switch(ch) {
      case 1:
        printf("\n\tBefore insertion: \n");
        Disp(d,*k);
        d=realloc(d,sizeof(int)*(*k+1));    //reallocating the size of array for new element
        for(i=*k;i>=1;i--)
          d[i]=d[i-1];
        printf("\n\tEnter the element: ");
        scanf("%d",&d[0]);
        break;

        case 2:
          printf("\n\tBefore insertion: \n");
          Disp(d,*k);
          d=realloc(d,sizeof(int)*(*k+1));
          printf("\n\tEnter the element: ");
          scanf("%d",&d[*k]);
          break;

        case 3:
          printf("\n\tBefore insertion: \n");
          Disp(d,*k);
          printf("\n\tEnter the position for insertion: ");
          scanf("%d",&m);
          if(m>*k+1) {
            printf("\n\t**Positon does not exist**\n");
            flag++;
          }
          else {
            d=realloc(d,sizeof(int)*(*k+1));
            if(m>*k)
             *k=m-1;
            for(i=*k;i>=m-1;i--)
              d[i]=d[i-1];
            printf("\n\tEnter the element: ");
            scanf("%d",&d[m-1]);
          }
          break;

        default:
              printf("\n*Invalid option*\n");
              flag++;
     }
     if(flag==0) {
       ++(*k);
       printf("\n\tAfter insertion:\n");
       Disp(d,*k);
     }
     printf("\n Want to insert another element:\n y for yes \tn for no\n ");
     while((getchar())!='\n');
     ans=getchar();
  }while(ans=='y' || ans=='Y');
}
