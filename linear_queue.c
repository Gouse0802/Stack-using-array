//linear Queue
#include<stdio.h>
#define Max 7
int Q[Max];
int rear=-1;
int front=-1;

void Enqueue()
{
    int x;
    if(rear==Max-1)
    {
        printf("\nSorry Queue is full..!");
    }
    else
    {
        printf("\nEnter the element::");
        scanf("%d",&x);
        if(rear==-1 && front==-1)
        {
            rear++;
            front++;
            Q[rear]=x;
        }
        else
        {
            rear++;
            Q[rear]=x;
        }
    }
}
void dequeue()
{
    int x;
    if(front == -1 && rear == -1)
        printf("\nQueue is empty..! ");
    else
    {
        x=Q[front];
        printf("\n%d is deleted from queue",x);
        front++;
    }
}
void display()
{
    if(front == -1 && rear == -1)
        printf("\nQueue is empty..! ");
    else
    {
        for(int i=front; i<=rear; i++)
        {
            printf("\nOutput...!");
            printf("%d ",Q[i]);
        }
        printf("\n");
    }
}
void peek()
{
    if(front == -1 && rear == -1)
        printf("\nQueue is empty..! ");
    else
    {
        printf("\n%d ",rear);
    }
}
int main()
{
    int key;
    while(key!=5)
    {
        printf("\n 1.Enqueue \n 2.dequeue \n 3.display \n 4.peek \n5.Exit\n::");
        scanf("%d",&key);
        switch(key)
        {
            case 1:
                Enqueue();  
                break;
            case 2: 
                dequeue();   
                break;
            case 3: 
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("\nTHANK YOU...");
                continue;
            default: 
            printf("\nInvalid option");
        }
    }

}