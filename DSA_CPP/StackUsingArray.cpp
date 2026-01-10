#include<iostream>
using namespace std;
class Stack{
    private:
    int arr[10];
    int fill,in,out;
    int add(int i);
    int sub(int i);
    public:
    Stack();
    void push(int val);
    int pop();
    int peak();
    
};


int main(){

    Stack s;
    int l=10;
    try{
    for(int i=0;i<l;i++){s.push(i);}
    cout<<"\npush end"<<endl;
    for(int i=0;i<11;i++){
        cout<<s.pop()<<"\t";
        // s.pop();
        }
    }
    catch(const char *msg){cout<<endl<<msg<<endl;}
    return 0;
    
    }


Stack::Stack()
{
        fill=in=out=0;
        
        for(int i=0;i<10;i++){arr[i]=0;}
}

void Stack::push(int val)
{
    if(fill==10){cout<<"Warning!\nStack OverFlow : Trying to to push on full stack";return;}
    fill++;
    
    arr[in]=val;
    out=in;
    in=add(in);
}

int Stack::pop()
{
    if(fill==0){throw "Warning!\nStack UnderFlow : Trying to to pop from empty stack";}
    fill--;
    int x=arr[out];
    out=sub(out);
    // cout<<out<<endl;
    return x;
}


int Stack::peak()
{
    if(fill==0){throw "Warning!\nStack UnderFlow : Trying to to peal from empty stack";}
    
    return arr[out];
}

int Stack::add(int i)
{
    return i<9?++i:0;
}


int Stack::sub(int i){
    return i>0?i-1:9;
}