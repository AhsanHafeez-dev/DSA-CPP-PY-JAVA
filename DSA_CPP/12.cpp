#include<stdio.h>
#include<iostream>
using namespace std;
#include<climits>
#include<math.h>
int min(int a,int b);
int first_repeating_element(int arr[],int n);
void sub_array_sum(int arr[],int n,int s);
int smallest_missing_number(int arr[],int n);
void sub_array(int arr[],int n);
void maximum_sub_array_Sum(int arr[],int n);
int kadanes_algorithim(int arr[],int n);
int  circular_warp_array(int arr[],int n);

int main(){
    int b[]={1,2,3,7,5};
    //first_repeating_element(b,7);
    //sub_array_sum(b,5,12);
    smallest_missing_number(b,5);
    return 0;
}
int min(int a,int b){
    if(a<b){return a;}
    else{return b;}}
void sub_array_sum(int arr[],int n,int s){
      int i=0,st=-1,en=-1,sum=0;
      int j=0;

      while(j<n && sum+arr[j]<=s){
        sum+=arr[j];
        j++;
      }
if(sum==s){printf("%d  %d",i,j);return;}
while(j<n)
{
  sum+=arr[j];
  while(sum>s)
  {
    sum-=arr[i];
    i++;
  }
  if(sum==s)
  {
    st=i;
    en=j;
    break;
  }
  j++;
}
printf("%d %d",st,en);
    }
int smallest_missing_number(int arr[],int n){
  int q=10000;
  bool check[10000];
  int i,j;
  for(i=0;i<q;i++)
  {
    check[i]=0;
  }
  for(j=0;j<n;j++)
  {
if(arr[j]>=0)
{
  check[arr[j]]=1;
}
  }
for(i=0;i<q;i++){
  if(check[i]==1){printf("%d\n",i);return i;}
}
}
void maximum_sub_array_Sum(int arr[],int n)
{
  int i,j,sum,l=INT_MIN,st,end;
for(i=0;i<n;i++)
{
  sum=arr[i];
  for(j=0;j<n;j++)
  {
    sum+=arr[j];
  }
if(sum>l){l=sum;}
}
}