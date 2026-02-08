#include<iostream>
using namespace std;
int tillingWays(int n);
int friendspairing(int n);
int knapsack(int val[],int wt[],int n,int w);
bool isSafe(int** arr,int x,int y,int n);
bool ratinmaize(int** arr,int x ,int y,int n,int** solarr);
void print(int** arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
}

main()
{
    cout <<"Number of ways for tilling is : " <<tillingWays(4)<<endl;
    cout<<friendspairing(4)<<endl;
    int wt[]={10,20,30};
    int val[4]={100,50,150};
    cout<<knapsack(val,wt,3,50)<<endl;
    int n;
    cout<<"Enter size of 2d array"<<endl;
    cin>>n;
    int** arr=new int *[n];
    for(int i=0;i<n;i++){arr[i]=new int [n];}
    int x[5][5]={
        { 1,0,1,0,1 },
        { 1,1,1,1,1 },
        { 0,1,0,1,0  },
        { 1,0,0,1,1  },
        { 1,1,1,0,1  }   };

//cout<<"Enter elements of 2d array "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            arr[i][j]=x[i][j];
    }    


    int** solarr=new int *[n];
    for(int i=0;i<n;i++){solarr[i]=new int [n];}

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            solarr[i][j]=0;
    }    
    ratinmaize(arr,0,0,n,solarr);
    print(solarr,n);


}


int tillingWays(int n)
{
    if(n==0 || n==1){return n;}

    return tillingWays(n-1)+tillingWays(n-2);
}

int friendspairing(int n)
{
    if(n==0||n==1||n==2){return n;}
    return friendspairing(n-1)+friendspairing(n-2)*(n-1);
}

int knapsack(int val[],int wt[],int n,int w)
{
    if(n==0|| w==0){return 0;}
    if(wt[n-1]>w){return knapsack( val, wt, n-1, w);}
    int x=knapsack(val, wt, n-1,w-wt[n-1])+val[n-1];
    int y=knapsack( val, wt, n-1, w);    

    return max(x,y);
}

bool isSafe(int** arr,int x,int y,int n)
{
if(x<n && y<n && arr[x][y]==1){return true;}
return false;


}


bool ratinmaize(int** arr,int x ,int y,int n,int** solarr)
{
    if( (x==(n-1) && y==(n-1) ) )
    {
        solarr[x][y]=1;
    return true;
    }

    if(isSafe(arr,x,y,n))
    {
        solarr[x][y]=1;
        if(ratinmaize(arr,x+1,y,n,solarr)  || ratinmaize(arr,x,y+1,n,solarr)  ){return true;}
        
        
        solarr[x][y]=0;
        return false;    
    }
    return false;
}