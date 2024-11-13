//linear Queue
#include<stdio.h>
#define Max 5
int Q[Max];  
int rear=-1;
int front=-1;

void Enqueue()
{
    int x;
    if(front == (rear+1)%Max)
    {
        printf("\nSorry Queue is full..!");
        return;
    }
    printf("\nEnter the element::");
    scanf("%d",&x);
    if(rear==-1 && front==-1)
    {
        rear=(rear+1)%Max;
        front=(front+1)%Max;
        Q[rear]=x;
        printf("\n%d is inserted...",x);
        return;
    }
    rear=(rear+1)%Max;
    Q[rear]=x;
    printf("\n%d is inserted...",x);
}
void dequeue()
{
    int x;
    if(front == -1)
    {
        printf("\nQueue is empty..! ");
        return;
    }
    x=Q[front];
    Q[front]=0;
    printf("\n%d is deleted from queue",x);
    front=(front+1)%Max;
}
void display()
{
    if(rear == -1)
    {
        printf("\nQueue is empty..! ");
        return;
    }
    else
    {
        for(int i=front; i!=rear; i=(i+1)%Max)
        {
            printf("\nOutput...!");
            printf("%d ",Q[i]);
        }
        printf("\n%d",Q[rear]);
    }
}
void peek()
{
    if(rear == -1)
    {
        printf("\nQueue is empty..! ");
        return;
    }
    printf("\n%d ",rear);
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