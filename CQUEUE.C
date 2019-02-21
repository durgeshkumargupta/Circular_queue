#include<stdio.h>
#include<conio.h>
#define max 5
int front=-1,rear=-1;int queue[max];
void enqueue(int data,int queue[])
{
	if((front==(rear+1)%max))
      {
	printf("queue is full");
	sleep(2);
	}
	else
	{ if(front==-1)
	front=rear=0;
	else
	rear++;
	queue[rear]=data;
	}

}
void dequeue(int queue[])
{
   int d;
   if(front==-1)
   printf("Queue is Empty");
   else
   {
     d=queue[front];
     if(front==rear)
       front=rear=-1;
     else
     front++;
     printf("dequeue data=%d",d);
   }
   sleep(2);
}
void display(int queue[])
{
    int i=0;
    if(front==-1)
    printf("Queue is empty");
    if(rear>=front)
    {
      for(i=front;i<=rear;i++)
      printf("%3d",queue[i]);
    }
    else
    {
      for(i=front;i<max;i++)
	printf("%3d",queue[i]);
      for(i=0;i<=rear;i++)
	printf("%3d",queue[i]);
    }
    sleep(2);
}
void main()
{
	int data,ch;
	while(1)
	{
	  clrscr();
	  printf("Menu circular Queue\n");
	  printf("1.Enqueue\n");
	  printf("2.Dequeue\n");
	  printf("3.Display\n");
	  printf("0.Exit\n");
	  printf("Enter your choice=");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	    case 1:
	       printf("Enter data=");
	       scanf("%d",&data);
	      enqueue(data,queue);break;
	    case 3:
	       display(queue);break;
	    case 2:
		dequeue(queue);break;

	    case 0:
	       exit(0);
	  }
   }
}