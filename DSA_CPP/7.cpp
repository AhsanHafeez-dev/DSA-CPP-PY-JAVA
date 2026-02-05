#include<climits>
#include<stdio.h>
void check_element_array(int arr[],int x,int n);
int  binarySearch(int arr[],int x,int n);
int main(){
    int x[10]={1,2,3,4,5,6,7,8,9,10};
   // check_element_array(x,99,10000);
    printf("%d\n",binarySearch(x,10,10));
    return 0;
int n;
printf("ENTER SIZE OF ARRAY\n");
scanf("%d",&n);
int q;
//printf("%d\n",n);
int a[n];
        for(int i=0;i<n;i++){
            printf("ENETER %d ELEMENT OF ARRAY\n",i);
            scanf("%d",&q);
            a[i]=q;
        }   
        int max=INT_MAX;
        int min=INT_MIN;
         for(int i=0;i<n;i++){
            if(a[i]>max){max=a[i];}
            if(a[i]<min){min=a[i];}
        }   
        printf("THE MINIMUM NUMBER IS : %d\n",min);
        printf("THE MAXIMUM NUMBER IS : %d\n",max);

    return 0;
}
void check_element_array(int arr[],int x,int n){
    int i;
    int count=0;
    for(i=0;i<n;i++){
        if(x==arr[i]){count++;}
    }
    if(count==0){printf("ELEMENT IS NOT PRESENT IN ARRAY \n");}
    else if(count>0){printf("ELEMENT OCCURS %d TIMES IN ARRAY",count);}
}
int binarySearch(int arr[],int x,int n){
  int s=0;
  int e=n;
  for(;s<=e;){
    int mid=(s+e)/2;
    if(arr[mid]==x){return mid;}
    else if(arr[mid]>x){e=mid-1;}
    else{s=mid+1;}
  }
  return -1;
}