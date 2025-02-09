#include<stdio.h>
int main(){
    int n,i,pos;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter postion:\n");
    scanf("%d",&pos);
    if(pos<1 || pos>n){
        printf("invid input");
        return 1;
    }
    for(i=pos-1;i<n-1;i++){
       
            a[i]=a[i+1];
        
    }
    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
    }