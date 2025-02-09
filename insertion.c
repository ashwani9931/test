#include<stdio.h>
int main(){
    int n,i,num,pos;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n+1];
    printf("enter element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter number to insert:\n");
    scanf("%d",&num);
    printf("enter postion:\n");
    scanf("%d",&pos);
    if(pos<1 || pos>n){
        printf("invid input");
        return 1;
    }
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=num;
    printf("array afrer insertion:\n");
    for(i=0;i<=n;i++){
        printf("%d",a[i]);
    }
    return 0;
}