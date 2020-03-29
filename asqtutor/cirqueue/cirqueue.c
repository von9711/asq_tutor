#include"cirfiles.h"
int Cir_insert(cirqueue *q);
int Cir_delete(cirqueue *q);
int Cir_queue()
{
  int ch,ans;
  cirqueue cq;
  cq.front=cq.rear=-1;
  do {
    system("clear");
    printf("\n\t\tQUEUE(FIFO) TUTOR (Circular)\v\v");
    printf("\n\t1.Insertion(Enque)\n\t2.Deletion(Denque)\n\t3.Display\n\t4.Back\n");
    printf("\tChoose one: ");
    scanf("%d",&ch);
    switch(ch) {
      case 1:
        Cir_insert(&cq);
        break;

      case 2:
        Cir_delete(&cq);
        break;

      case 3:
        system("clear");
        printf("\n\t\tQUEUE(FIFO) TUTOR (Circular)\v\v");
        if(cq.front==-1 && cq.rear==-1)
          printf("\n\t**Empty queue**\n");
        else
          Cir_display(&cq);
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
