#include<stdio.h>
#include<math.h>
float f(float x){
    return (1/(1+x*x));

}
int main(){
    float a,b,n,h,sum1,sum2=0,sum3=0,i,j,A;
    printf("enter a,b,n:\n");
    scanf("%f %f %f",&a,&b,&n);
    h=(b-a)/n;
    sum1=f(a)+f(b);
    for(i=a+h;i<b;i+=2*h){
        sum2+=f(i);
    }
    for(j=a+(2*h);j<b;j+=2*h){
        sum3+=f(j);
    }    
   A=(h/3)*(sum1+(4*sum2)+(2*sum3));
   printf("total: %.2f",A);
}