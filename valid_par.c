#include<stdio.h>
#include<string.h>
#define max 10
int stk[max];
int top=-1;
void push(char);
char pop();
void main()
{
    char exp[max],temp;
    int i,flag=1;
    printf("\nenter an expression");
    fgets(exp,max,stdin);
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            push(exp[i]);
        if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
            if(top==-1)
             flag=0;
            else
            {
                temp=pop();
                if(exp[i]==')' && (temp=='{' || temp=='['))
                flag=0;
                if(exp[i]=='}' && (temp=='(' || temp=='['))
                flag=0;
                if(exp[i]==']' && (temp=='(' || temp=='{'))
                flag=0;
            }
    }
    if(top>=0)
    {
        flag=0;

    }
    if(flag==1)
    {
        printf("\nvalid expression");
    }
    else
    {
        printf("\ninvalid expression");
    }
}
void push(char c)
{
    if(top==max-1)
    {
        printf("\nstack overflow");
    }
    else
    {
        top++;
        stk[top]=c;
    }


}
char pop()
{
    if(top==-1)
    {
        printf("\nstack is underflow");
    }
    else
    {
        return (stk[--top]);
    }
}