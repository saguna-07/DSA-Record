#include <stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front=-1;
int rear=-1;
//fuction to check if the queue is empty
int isempty()
{
    return (front==-1||front>rear);
}
int isfull()
{
    return(rear==MAX_SIZE-1);
}
void enqueue(int data)
{
    if(isfull())
    {
        printf("queue is full cannot enqueue%d/n",data);
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=data;
            printf("%d enqueue to queue/n",data);
    }
}
int dequeue()
                {
                int data;
                if (isempty())
                {
                    printf("queue is empty cannot dequeue./n");
                    return -1;
                }
                else
                {
                    data=queue[front];
                    front++;
                    if (front>rear)
                    {
                        front=-1;
                        rear=-1;
                    }
                    return data;
                }
            }
            void display()
            {
                if (isempty())
               {
                printf("queue is empty.\n");
            }
            else
            {
                printf("queue elements\n");
                for(int i=front;i<=rear;i++)
                {
                    printf("%d",queue[i]);
                }
                printf("/n");
            }
            }
            int main()
            {
            enqueue(10);
            enqueue(20);
            enqueue(30);
            display();
            printf("dequeue element:%d/n",dequeue);
            display();
            enqueue(40);
            enqueue(50);
            enqueue(60);
            display();
            return 0;
            }

