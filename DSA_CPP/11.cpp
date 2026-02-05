#include<stdio.h>
#include<cmath>
#include<math.h>
#include<climits>
int min(int a,int b);
int first_repeating_element(int arr[],int n);
void sub_array_sum(int arr[],int n,int s);
int smallest_missing_number(int arr[],int n);
void sub_array(int arr[],int n);
void maximum_sub_array_Sum(int arr[],int n);
int kadanes_algorithim(int arr[],int n);
int  circular_warp_array(int arr[],int n);
int main(){
    int b[]={4,-4,-6,6,10,-11,12};
   // first_repeating_element(b,7);
   //sub_array_sum(b,5,17);
   //smallest_missing_number(b,6);
   //sub_array(b,6);
   //maximum_sub_array_Sum(b,4);
   //kadanes_algorithim(b,5);
   circular_warp_array(b,7);
    return 0;}
    int first_repeating_element(int arr[],int n){
        int minidx=INT_MAX;
        const int h=100000;
        int i;
        int idx[h];
        for(int i=0;i<h;i++){
            idx[i]=-1;
        }
        for(i=0;i<n;i++){
            if(idx[arr[i]]!=-1){
                minidx=min(minidx,idx[arr[i]] );
            }
            else{idx[arr[i]]=i;}
        }
        if(minidx==INT_MAX){minidx=-1;}
        printf("MINIMUM INDEX OF REPEATING ELEMENT IS %d",minidx);
        return minidx;
    }
    int min(int a,int b){
        if(a<b){return a;}
        else{return b;}
    }
    void sub_array_sum(int arr[],int n,int s){
        int sum;
        int i,k=0,j;
        for(i=0;i<n;i++){
            sum=arr[i];
            if(sum==s){
                printf("%d",arr[i]);
                break;}
            for(j=i+1;j<n;j++){
                sum+=arr[j];
                if(sum==s){break;}
            }
            if(j!=n){
                for(k=i;k<j+1;k++ ){
                    printf("%d\t",arr[k]);}}
                
            if(k!=0){break;}
        }
    }
    void sub_array_sum_1(int arr[],int n,int s){
int sum=0,cur=0,end=0;
for(int i=0;i<n;i++){
    cur=i;
    end=n;
    sum +=arr[i];
    if(sum==s){end=i;break;}
    cur++;
}
    }
    int smallest_missing_number(int arr[],int n){
        char bol[n];
        int i;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                bol[arr[i]]='t';}
            if(arr[i]<0||arr[i]!=i){bol[i]='f';}
        }
        for(i=0;i<n;i++){
            if(bol[i]=='f'){printf("%d",i);break;}
        }
        return i;
    }
    void sub_array(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++){
                printf("%d\t",arr[k]);}
                printf("\n");
            }
        }
    }
      void maximum_sub_array_Sum(int arr[],int n){
        int sum=0,s=INT_MIN,i,j;
        for(i=0;i<n;i++){
          sum=0;
            for(j=i;j<n;j++){
                sum+=arr[j];
            }
            if(sum>s){s=sum;}
        }
    printf("%d",s);
    }
    int kadanes_algorithim(int arr[],int n){
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>max){max=sum;}
            if(sum<0){sum=0;continue;}
        }
        printf("%d",max);
        return max;
    } 
    int circular_warp_array(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    int nonwrapsum=kadanes_algorithim(arr,n);
    int wrapsum=sum-nonwrapsum ;
    printf("%d",wrapsum);
    return wrapsum;

    }