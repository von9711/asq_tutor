#include"quefiles.h"
int Que_insert(queue *q);
int Que_delete(queue *q);
int Que()
{
  int ch,ans;
  queue qe;
  qe.front=qe.rear=-1;
  do {
    system("clear");
    printf("\n\t\tQUEUE(FIFO) TUTOR (Simple)\v\v");
    printf("\n\t1.Insertion(Enque)\n\t2.Deletion(Denque)\n\t3.Display\n\t4.Back\n");
    printf("\tChoose one: ");
    scanf("%d",&ch);
    switch(ch) {
      case 1:
        Que_insert(&qe);
        break;

      case 2:
        Que_delete(&qe);
        break;

      case 3:
        system("clear");
        printf("\n\t\tQUEUE(FIFO) TUTOR (Simple)\v\v");
        if(qe.front==-1 && qe.rear==-1)
          printf("\n\t**Empty queue**\n");
        else
          Que_display(&qe);
        break;

      case 4:
        return 0;

      default:
        printf("\n\t*Invalid option*\n");
    }
    printf("\n Press 1 for Menu \t Press 0 for Exit\n ");
    scanf("%d",&ans);
  }while(ans==1);
  return 0;
}
