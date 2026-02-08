#include<iostream>
using namespace std;
bool issafe(int **arr,int x,int y,int n);




bool issafe(int **arr,int x,int y,int n)
{
    for(int rows=0; rows<x ;rows++)
    {
        if(arr[rows][y]=0)
        {
            return 0;
        }

    }
int rows=x,colum=y;
    for(;rows>=0&&colum>=0;rows--,colum--)
    {
        if(arr[rows][colum]==1)
        return false;
    }

}