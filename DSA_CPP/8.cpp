#include<stdio.h>
#include<iostream>
using namespace std;

#include<math.h>#include<climits>
void sorted_array(int arr[],int n);
void sorted_array_1(int arr[],int n);
void bubble_sort(int arr[],int n);
void insertion_sort(int arr[],int n);
int max_choclate(int rupees,int choclate,int wrapper);
int main(){
 int x[5]={5,4,3,2,1};
 sorted_array_1(x,5);
 printf("\n");
 bubble_sort(x,5);
 printf("\n");
 insertion_sort(x,5);
 //printf("%d",max_choclate(15,1,3));
    return 0;
}
void sorted_array(int arr[],int n){
    int min,count;
    int j;
    int k;
    for(int i=0;i<n;i++){
      min=arr[i];
        for(int j=i;j<n;j++){
          count=0;
        if(arr[j]<min){min=arr[j];k=j;count++;}
        }
        if(count>1){
        arr[k]=arr[i];
        arr[i]=min;}
        else{continue;}
    }
}
void sorted_array_1(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){int t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;}
        }
    }  
    for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
 }  
}
int max_choclate(int rupees,int choclate,int wrapper){
    int count=0;
    for(int i=0;i<rupees;i+=3){
        count+=4;
    }
    count+=2 ;
    return count;
}
void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            }
}
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
}
void insertion_sort(int arr[],int n){
    int j;
    for(int i=0;i<n;i++){
        int temp=arr[i];
        for(j=i-1;arr[j]>arr[i];j--){
            arr[j]=arr[j+1];
        }
        arr[j+1]=arr[i];
    }
    


    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}