#include<iostream>
#include<cmath>
using namespace std;
void print(int arr[5][6]);
void matrixin(int arr[5][6]);
void spiral(int arr[5][6]);
main()

{
    int arr[5][6];
    matrixin(arr);
    cout<<"YOUR MATRIX"<<endl;
    print(arr);
    cout<<"SPIRAL"<<endl;
    spiral(arr);
    
    
}
void spiral(int arr[5][6])
{
    int RowStart=0,RowEnd=4,Columstart=0,ColumEnd=5;
    while(RowStart<=RowEnd && Columstart<=ColumEnd)
    {
        for(int i=Columstart;i<=ColumEnd;i++)
        {
            cout<<arr[RowStart][i]<<"\t";
        }
        RowStart++;
        cout<<endl;
        for(int i=RowStart;i<=RowEnd;i++)
        {
            cout<<arr[i][ColumEnd]<<"\t";
        }
        ColumEnd--;
        cout<<endl;
    for(int i=ColumEnd;i>=Columstart;i--)
    {
        cout<<arr[RowEnd][i]<<"\t";

    }
    cout<<endl;
    RowEnd--;
    for(int i=RowEnd;i>=RowStart;i--)
    {
        cout<<arr[i][Columstart]<<"\t";
    }
    cout<<endl;
Columstart++;
    }

}
void matrixin(int arr[5][6])
{int n=5;
int x=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            arr[i][j]=x;
            x++;
        }
    }
}
void print(int arr[5][6])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        if(i+1<5){
        cout<<endl;}
    }
    cout<<endl;
}