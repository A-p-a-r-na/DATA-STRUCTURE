/*
Implement a Circular Queue using arrays with the operations:
Insert elements to the Queue.
Delete elements from the Queue.
Display the contents of the Queue after each operation.
*/


#include<stdio.h>

int queue[100],choice,i,max,value;
int rear = -1;
int front = -1;
void enqueue();
void dequeue();
void display();

int main()
{
    printf("\n Enter the size of queue[MAX=100]:");
    scanf("%d",&max);
    do
    {
        printf("\n\t CIRCULAR QUEUE OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------");
        printf("\n\t 1.ENQUEUE(INSERTION)\n\t 2.DEQUEUE(DELETION)\n\t 3.DISPLAY\n\t 4.EXIT");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }

        }
    }
    while(choice!=4);
    return 0;
}



//Function  for enqueue operation
void enqueue()
{

    if((front ==0 && rear == max-1) || front == rear+1)
    {
        printf("\nCircular Queue Is Full !\n");
        return;
    }
    printf("\n Enter a value to be inserted:");
    scanf("%d",&value);
    if(front==-1)
        front=front+1;
    if(rear==max-1)
        rear=0;
    else rear=rear+1;
         queue[rear]=value;
}


//Function for dequeue operation
void dequeue()
{
    int e;
    if(front==-1)
    {
        printf("\nThe Circular Queue is Empty !!\n");

    }
    e=queue[front];
    if(front==max-1)
        front=0;
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else front=front+1;
    printf("\n%d was deleted !\n",e);
    return e;
}

void display()
{
    if (front == - 1)
        printf("\nThe Circular Queue is Empty ! Nothing To Display !!\n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);
        printf("\n");
    }
}
