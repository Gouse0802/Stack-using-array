#include<stdio.h>
#define limit 7
int s[limit];
int top=-1;

void push()
{
    if(top>=4)
    {
        printf("\nStack is Full...!");
        return;
    }
    int x;
    printf("\nEnter the element to be inserted=");
    scanf("%d",&x);
    top++;
    s[top]=x;
}
void pop()
{
    int x;
    if(top == -1)
    {
        printf("\nStack is empty..!");
        return;
    }
    x=s[top];
    top--;
    printf("%d Element is deleted",x);
}
void display()
{
    for(int i=top; i>=0; i--)
    {
        printf("%d ",s[i]);
    }
    printf("\n");
}
int main()
{
    int key;
    while(key!=4)
    {
        printf("\n 1.push \n 2.Pop \n 3.display \n 4.Exit\n");
        scanf("%d",&key);
        switch(key)
        {
            case 1:
                push();  
                break;
            case 2: 
                pop();   
                break;
            case 3: 
                display();
                break;
            case 4:
                continue;
            default: 
            printf("\nInvalid option");
        }
    }

}