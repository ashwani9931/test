#include<stdio.h>
#define max 5
int st[max];
int top=-1;
void push(int num)
{
    top++;
    st[top]=num;
}
int pop()
{

    return st[top--];
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        push(a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",pop());
    }
}