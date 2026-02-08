 #include<iostream>
using namespace std;
void permutation(string s,string ="");
int ludoproblem(int src,int dest);
int maize(int n,int i ,int j);
main()
{
//permutation("ABC");
//cout<<ludoproblem(0,4);
cout<<maize(3,0,0);
}

void permutation(string s,string ans)
{
    if(s.length()==0){cout<<ans<<endl;return;}
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}

int ludoproblem(int src,int dest)
{
    if(src>dest){return 0;}
    if(src==dest){return 1;}
    int count =0;
    for(int i=1;i<=6;i++)
    {
        count+=ludoproblem(src+i,dest);
    }
    return count;
}

int maize(int n,int i,int j)
{


    if(i==n-1 && j==n-1){return 1;}
    if(i>=n || j>=n){return 0;}
    int count=0;
     return maize(n,i+1,j)+maize(n,i,j+1);
        
    }