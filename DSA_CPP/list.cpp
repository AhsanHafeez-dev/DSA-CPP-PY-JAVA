#include<iostream>
#include<conio.h>
using namespace std;
#define SIZE 10



class List{
    private:
    int fill;
    int *current;
    int arr[SIZE];
    public:
    
    List(){fill=0;current=NULL;}
    bool next(){
        
        if(current!=&arr[SIZE-1]){current++;return true;}
        
        return false;
}
void print(){
    
    int *t=arr;
    cout<<"{";
    for(int i=0;i<fill;i++,t++){
        cout<<*t<<"\t";
    }
    cout<<"}"<<endl;
}
    void add(int x){
        
        if(current==NULL){current=arr;*current=x;return;fill++;}
        if(current==&arr[SIZE-1]){cout<<"WARNING CANNOT ADD IN FULL ARRAY";return;}
        
        int* temp=current,*t=current;
        
        while(this->next()){
            *current=*t;
            t=current;
        }
        
        *temp=x;
        current=++temp;
        fill++;
        

    }
    void remove()
    {
        int *t=current;

    }


    bool isStart(){return current==arr;}
    bool isEnd(){return current==&arr[fill-1];}

};

int main(){
    List l;
    for(int i=0;i<10;i++){
        l.add(i);
    }
    l.print();
    return 0;}