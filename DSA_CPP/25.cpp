#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
void  permutation(vector<int> &a,int idx);
void permute(vector<int> &a,int idx);
void uniquepermutation(vector<int> &a,int idx);
vector<vector<int>> ans;
main()
{
    int n;
    cout<<"Enter size of list"<<endl;
    cin >>n;
vector<int> a{1,2,3};
cout<<"Enter elements of list"<<endl;
for(auto &i:a)
cin>>i;
//permutation(a,0);
//permute(a,0);
uniquepermutation(a,0);
for(auto x: ans)
{
    for(auto j:x){cout<<j<<"\t";}
    cout<<endl;
}
}

void permutation(vector <int> &a,int idx)
{
if(idx==a.size())
{
    ans.push_back(a);
    return;
}

for(int i=idx;i<a.size();i++)
{
    swap(a[i],a[idx]);
    permutation(a,idx+1);
    swap(a[i],a[idx]);
}
    
}



void permute(vector<int> &a,int idx)
{
    sort(a.begin(),a.end());
    do
    {
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()  )    );
}

void uniquepermutation(vector<int> &a,int idx)
{
sort(a.begin(),a.end());
if(idx==a.size())
{
    ans.push_back(a);
    return;
}

for(int i=idx;i<a.size();i++)
{
 if(i!=idx && a[i]==a[idx]){continue;}
    swap(a[i],a[idx]);
    permutation(a,idx+1);
    swap(a[i],a[idx]);
}



}