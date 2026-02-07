#include<iostream>
#include<math.h>
using namespace std;
int sum(int n);
int raise(int n , int p);
int fact(int n);
int fib(int n);
bool sorted(int arr[],int n);
void print(int n);
void print2(int n);
int ocuurence(int arr[] ,int n , int x,int =0);
int last(int arr[],int n,int x,int=0);

main()
{
    
cout<<"Sum till 5 is : " <<sum(5)<<endl;
cout<<"5 raise to power 4 is : "<<raise(5,4) <<endl;
cout<<"Factorial of 5 is : "<<fact(5) <<endl;
//cout<<"Fibonacci of 40 is : " <<fib(40)<<endl;//0,1 1,2,3,5
int x[]={1,2,3,4,5,2};
//cout<<sorted( x , 5)<<endl;
//print(5);
//cout<<"2 is at index : " <<ocuurence(x,6,2);
//print2(5);
cout<<""<<last(x,6,2) <<endl;

}

int sum(int n)
{
    if(n==1){return n;}
    return n + sum(n-1);    
}

int raise(int n , int p)
{
    if(p==0){return 1;}
    return n * raise(n,p-1);

}

int fact(int n)
{
    if(n==0){return 1;}
    return n*fact(n-1);
}

int fib(int n)
{
    if(n==0 || n==1){return n;}
    return fib(n-1)+fib(n-2);
}

bool sorted(int arr[])
{

}

bool sorted(int arr[],int n)
{
    if(n==1){return 1;}
    return ( *(arr) < *(arr+1) )  && sorted(arr+1,n-1);
    

}


void print(int n)
{
    if(n==0){cout<<endl;return ;}
    cout<<n<<"\t";
    print(n-1);
}

void print2(int n)
{
    if(n==0){cout<<endl;return ;}
    print2(n-1);
    cout<<n<<"\t";
    

} 

int ocuurence(int arr[] ,int n , int x,int i)
{
    if(i==n-1){return -1;}
    if(arr[i]==x){return i ;}
    return ocuurence(arr,n,x,i+1);
}

int last(int arr[],int n,int x,int i)
{
    if(i==n){return -1;}
    int r = last(arr,n,x,i+1);
    if(r!=-1){return r;}
    if(arr[i]==x){return i;}
    return -1;
}