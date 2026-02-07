#include<iostream>
using namespace std;
void transpose(int arr[3][3]);
void print(int arr[3][3]);
void multiply(int arr[3][4],int arr2[4][3],int n1,int n2,int n3);
bool search(int arr[3][3],int n,int m,int target);
int main() 
{
int x1[3][4]={ {2,4,1,2} , {8,4,3,6}, {1,7,9,5} };
int x2[4][3]={ { 1,2,3 },{4,5,6},{7,8,9}  };  
int n;cin>>n;
cout<<search(x2,3,3,n);



  
      return 0;
}


void transpose(int arr[3][3])
{
      for(int i=0;i<3;i++)
      {
        for(int j=i;j<3;j++)
        {
            int t=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=t;
        }
      }

    }
  
void print(int arr[3][3]){
  int n=3;

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
       cout<<arr[i][j]<<"\t";
       cout<<endl;
    }
}
void multiply(int arr[3][4],int arr2[4][3],int n1,int n2,int n3)
{int n=3;
  int ans[3][3];
  for(int i=0;i<n1;i++)
    for(int j=0;j<n3;j++)
      ans[i][j]=0;
//print(ans);

  for(int i=0;i<n1;i++)
  {
    for(int j=0;j<n3;j++)
    {
      for(int k=0;k<n2;k++)
      {
        ans[i][j]+=arr[i][k]*arr2[k][j];
        
      }
    }
    cout<<i;
  }
cout<<"after"<<endl;
  print(ans);
}

bool search(int arr[3][3],int n,int m,int target)
{
  int c=m-1;
  int r=0;
  while(r<n && c>=0)
  {
if(arr[r][c]==target){return true;}
else if(target<arr[r][c]){c--;}
else{r++;}

  }
  return false;
}