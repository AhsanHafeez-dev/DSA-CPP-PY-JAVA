#include<stdio.h>
#include<math.h>
#include<cmath>
int bill(int unit);
void sum_of_subarray(int arr[],int n);
int longest_sub_aray(int arr[],int n);
int record_breaking_day(int arr[],int n);
int max(int x,int y);
int main(){/*
    int b[]={1,2,0,7,2,0,20,30,-1};
    //sum_of_subarray(b,7);
    printf("\n");  
    //longest_sub_aray(b,7);
    record_breaking_day(b,8);
    return 0;
    int a[]={1,8,4,3,5};
    int n;
    printf("ENTER INDEX OF ARRAY ");
    scanf("%d",&n);
    int max=a[0];
    for(int j=0;j<=n;j++){
        if(a[j]>max){max=a[j];}
        printf("%d\n",max);
    }*/
    printf("bill is %d",bill(120));
    return 0;
}
void sum_of_subarray(int arr[],int n){
        for(int i=0;i<n;i++){
        int count =arr[i];
        printf("%d\t",arr[i]);
        for(int j=i+1;j<n;j++){
            count+=arr[j];
            printf("%d\t",count);
        
    }}

} 
int longest_sub_aray(int arr[],int n){
    int maximum;
        int pd=arr[1]-arr[0];
        int current=2;
         maximum=2;
        for(int j=2;j<n;j++){
            if(pd==arr[j]-arr[j-1]){
                current++;
            }
            else{pd=arr[j]-arr[j-1];
            current=2;}
        
        maximum=max(maximum,current);}
    
    printf("%d",maximum);
    return maximum;}

int max(int x,int y){
    if(x>y){return x;}
    else{return y;}
}
int record_breaking_day(int arr[],int n){
int mx=-1;
int ans=0;
for(int i=0;i<n;i++){
    if(arr[i]>mx&&arr[i]>arr[i+1]){
        ans++;
    }
    mx=max(arr[i],mx);
}
printf("%d",ans);
return ans;
}
int bill(int unit){
    int bill=0;
    int a=unit-100;
    if(a>=0){bill+=100*10;
    a=a-100;
    if(a>=0){bill+=100*20;
    a=a-100;
    if(a>=0){bill+=100*30;return bill;}
    else{bill+=(100+a)*30;return bill;}
}
    else{bill+=(100+a)*20;return bill;}
}
    else{bill+=(100+a)*10;return bill;}
}