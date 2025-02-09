#include<stdio.h>
#include<math.h>
 float f(float x){
    return (-9*x*x)+(4*x)+3;
     }
     int main(){
        float a,b,n,sum1,sum2=0,i,h,A;
        printf("enter a,b,n:\n");
        scanf("%f %f %f",&a,&b,&n);
        h=(b-a)/n;
        sum1=f(a)+f(b);
        for(i=a+h;i<b;i++){
            sum2+=f(i);
        }
        A=(h/2)*(sum1+2*sum2);
        printf("area bound: %.2f",A);
     }
