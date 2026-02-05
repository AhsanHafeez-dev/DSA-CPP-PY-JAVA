#include<stdio.h>
int min(int a,int b);
int max(int a,int b);
void insertion_sort(int arr[],int n);
int main()
{
    int b[]={9,8,7,6,5,4,3,2,1};
    insertion_sort(b,9);
      
    return 0;
}
void insertion_sort(int arr[],int n){
for(int i=1;i<n;i++){
    for(int j=i;j<n;j++){
        arr[j]=arr[j+1];
    }
    for(int j=i;j<n;j++){
        if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);}
}
int min(int a,int b) 
{ 
    if(a<b){return a;}
    else{return b;}
}
int max(int a,int b){
    if(a>b){return a;}
    else{return b;}
}