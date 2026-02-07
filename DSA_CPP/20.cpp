#include<iostream>
using namespace std;
int divisible(int n,int s,int e)
{
    int c5=0,c7=0,c57=0;

for(int i=1;i<=n;i++)
{
    if(i%s==0 && i%e==0){c57+=1;c5+=1;c7+=1;}
    else if(i%s==0){c5+=1;}
    else if(i%e==0){c7+=1;}
}
return c5+c7-c57;
}
int gcd(int a,int b);

main()
{
    cout<<gcd(42,24);
}
int gcd(int a,int b)
{
    int n=a-b;//18
    int x=b;//24
    //n-b
    int q=0;
    while(n>0)
    {
        n=a%b;
        a=b;
        b=n;
        //alternative

      // if(x>n){q=x-n;}
        // else {q=n-x;}
         
        //x=n;
        //n=q;
        //if(q==0){break;}

    }
    return a;
}
