#include<iostream>
#include<math.h>
using namespace std;
void prime(int n)
{
    //int *x=new int [n];
    int prime[100]={0};
    for(int i=2;i<=sqrt(n);i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(prime[i]==0){cout<<i<<"\t";}
    }
    cout<<endl;
}
void spf(int n);
main()
{
int n;
cout<<"ENTER NUMBER : "<<endl;
cin>>n;
spf(n);
}
void spf(int n)
{
    int spf[100]={0};
    for(int i=0;i<=n;i++)
        spf[i]=i;

    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
     
    }
    
    while (n!=1)
    {
        cout<<spf[n]<<"\t";
        n=n/spf[n];

    }
}