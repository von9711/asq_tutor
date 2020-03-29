#include<stdio.h>
#include<stdlib.h>
int Array();
int Stk();
int Que();
int Cir_queue();

int main()
{
  int ch,ans,qt;
  do {
    system("clear");
    printf("\n\t\t ********   **    **   ********   *******   ********");
    printf("\n\t\t    **      **    **      **      **   **   **   **");
    printf("\n\t\t    **      **    **      **      **   **   **  **  ");
    printf("\n\t\t    **      **    **      **      **   **   ** **   ");
    printf("\n\t\t    **      **    **      **      **   **   **  **");
    printf("\n\t\t    **      ********      **      *******   **    **\v\v");
    printf("\n\t\t\t1.Array\n\t\t\t2.Stack\n\t\t\t3.Queue\n\t\t\t4.Exit\n");
    printf("\t\t\tChoose one: ");
    scanf("%d",&ch);
    switch(ch) {
      case 1:
        Array();      //for array tutor
        break;

      case 2:
        Stk();        //for stack tutor
        break;

      case 3:
        system("clear");
        printf("\n\t\tQUEUE(FIFO) TUTOR\v\v");
        printf("\n\t1.Simple queue\n\t2.Circular queue\n\t3.Back\n");
        printf("\tChoose one: ");
        scanf("%d",&qt);
        switch(qt) {
          case 1:
            Que();      //for simple queue
            break;

          case 2:
            Cir_queue();    //for circular queue
            break;

          case 3:
            break;

          default:
            printf("\n\t*Invalid option*\n");
        }
        break;

      case 4:
        printf("\n");
        exit(0);

      default:
        printf("\n\t\t\t*Invalid option*\n");
    }
    printf("\n\tPress 1 for Main menu \t Press 0 for Exit\n\t");
    scanf("%d",&ans);
  }while(ans==1);
  printf("\n");
  return 0;
}
