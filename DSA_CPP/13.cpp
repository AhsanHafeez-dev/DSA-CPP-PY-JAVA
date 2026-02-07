#include<iostream>
#include<limits.h>
using namespace std;
void first_repeating_element(int arr[],int n);
void sub_array_of_given_Sum(int arr[],int n,int sum);
int smallest_missing_positive_integer(int arr[],int n);
void print_subarray(int arr[],int n);
void maximum_subarray_sum(int arr[],int n);
main()
{
int q[]={0,-9,1,3,-4,5};
//sub_array_of_given_Sum(q,5,6);
//smallest_missing_positive_integer(q,6);
//print_subarray(q,6);
maximum_subarray_sum(q,6);
}
void first_repeating_element(int arr[],int n){
    // my algo
    /*int x=1000;
    bool check[1000];
    for(int i=0;i<x;i++)
    check[i]=false;

    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==temp)
            {
                check[i]=true;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(check[i]==true){
            cout<<"THE FIRST REPEATING ELEMENT WITH SMALLEST INDEX IS "<<arr[i]<<" AT INDEX "<<i+1<<endl;
            break;
        }
    }*/
    //optimized code
    int idx[10];
    for(int i=0;i<10;i++)
    idx[i]=-1;
    int minidx=INT_MAX;

    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1 && idx[arr[i]]<minidx){
            minidx=idx[arr[i]];
        }
        else{
        idx[arr[i]]=i;}

    }
    if(minidx==INT_MAX){
        cout<<"NO ELEMENT IS RPEATED IN ARRAY"<<endl;
    }
    else
    {
    cout<<"THE FIRST REPEATING ELEMENT IS :"<<arr[minidx]<<" AT INDEX "<<minidx+1<<endl;
    }
}
void sub_array_of_given_Sum(int arr[],int n,int sum){
    int s=0,i=0,j=0;
    
    int st=0,end=0;
    /*for(int i=0;i<n;i++){
        s=0;;
        for(int j=i;j<n;j++)
        {
            s+=arr[j];
            if(s==sum)
            {
                st=i;
                end=j;
                q++;
                break;
            }
        }
        if(q>0){break;}
    }*/
    for(;j<n && s+arr[j]<=sum;j++)
    {
        s+=arr[j];
    }
    if(s==sum){
        st=i;
        end=j;
    cout<<"[\t";
        for(int i=st;i<=end;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<"]";
        cout<<endl;
        cout<<"THE SUBARRAY STARTS AT INDEX : "<<st<<" AND ENDS AT INDEX : "<<end<<endl;
        return;}
        for(;j<n;j++){
            s+=arr[j];
            for(;s>sum;i++){
                s-=arr[i];
            }
    if(s==sum)
            {
        st=i;
        end=j-1;
        break;
            }
        }
    cout<<"[\t";
        for(int i=st;i<end;i++){
            cout<<arr[i]<<"\t";
        }
        cout<<"]";
        cout<<endl;
        cout<<"THE SUBARRAY STARTS AT INDEX : "<<st<<" AND ENDS AT INDEX : "<<end<<endl;
        return;
}
int smallest_missing_positive_integer(int arr[],int n){
    bool check[20];
    for(int i=0;i<20;i++)
    check[i]=0;

    for(int i=0;i<n;i++){
        if(arr[i]>=0)
        check[arr[i]]=1;
    }

    for(int i=0;i<20;i++){
        if(check[i]==0){
        cout<<"THE SMALLEST MISSING POSITIVE INTEGER IS : " <<i<<endl;
        return i;
        }
    }
}
void print_subarray(int arr[],int n){
    int x=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int st=i,end=j+1;
            for(int i=st;i<end;i++){
            cout<<arr[i]<<"\t ";}
            cout<<endl;
        }
    }
}

void maximum_subarray_sum(int arr[],int n){
    int sum=0;
    int st,end;
    int ans=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        sum=0;
        for(int k=i;k<=j;k++){
            sum+=arr[k];
        }
        if(sum>ans){ans=sum;st=i;end=j;}
    }
}
cout<<"THE MAXIMUM SUBARRAY RANGES FROM "<<st<<" TO " <<end<<" AND SUM IS  "<<ans<<endl;
}