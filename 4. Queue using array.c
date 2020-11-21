/*
Implement a Queue using arrays with the operations:
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
    printf("\n\t QUEUE OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.ENQUEUE(INSERTION)\n\t 2.DEQUEUE(DELETION)\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
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
    if(rear == max-1)
    {
        printf("\n\tQUEUE over flow detected.");

    }
    else
    {
        printf(" Enter a value to be inserted:");
        scanf("%d",&value);
        rear = rear + 1;
        queue[rear]=value;
    }
}


//Function for dequeue operation
void dequeue()
{
     if (front < 0 || front > rear)
    {
        printf("\n\t QUEUE under flow detected.");
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
}


 void display()
{
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);
        printf("\n");
    }
}


