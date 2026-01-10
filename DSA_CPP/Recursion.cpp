#include<iostream>
using namespace std;
int iterativeFact(int n)
{
       if(n<=1){return 1;}
    int r=2;
    for(int i=3;i<=n;i++){r*=i;}
    return r;

}

int recursiveFact(int n)
{
    if(n<=1){return 1;}
    return n*recursiveFact(n-1);
}
int main()
{
    cout<<iterativeFact(1)<<"\t"<<recursiveFact(5)<<endl;
    return 0;
}