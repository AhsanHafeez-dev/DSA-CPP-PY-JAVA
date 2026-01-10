#include<stdio.h>
#include<math.h>
#include<cmath>
int factorial(int x);
void prime(int x,int y);
void fib(int x);
int ncr(int n,int r);
void pascal_trainagle(int n);
int main(){
    int x;
    printf("ENTER NUMBER \n");
    scanf("%d",&x);
    // fib(x);
    // factorial(x);
    // ncr(5,2);
    // prime(1,100);
    // pascal_trainagle(5);
    
    return 0;
}
int factorial(int x){
    int fac=1;
    for(int i=2;i<=x;i++){
        fac=fac*i;
    }
    //printf("FACTORIAL IS : %d\n",fac);
    return fac;
}
void prime(int x,int y){
    for(int i=x;i<=y;i++){
        int c=0;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){c++;break;}
        }
    if(c==0){printf("%d\n",i);}
    }
}
void fib(int x){
    int fib=0;
    int a=0;
    int b=1;
    printf("FIBONACCI SEQUENCE FOR %d TERMS\n",x);
   for(int i=1;i<=x;i++){
   printf("%d\t",a);
   fib=a+b;
   a=b;
   b=fib;
   
   }
   printf("\n");
   return;
}
int ncr(int n,int r){
    int x=factorial(n);
    int y=factorial(n-r);
    int z=factorial(r);
    int ncr=x/(y*z);
    printf("%d ",ncr);
    return ncr;
}
void pascal_trainagle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            //printf("%d",factorial(i)/(factorial(j)*factorial(i-j)));
            ncr(i,j);
        }
        printf("\n");
    }
}