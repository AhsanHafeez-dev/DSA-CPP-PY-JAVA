#include<iostream>
using namespace std;
class trial
{
    private:
    int data;
    public:
    trial(int =0);
    ~trial();
};

trial t(0);

void try2(){
    static trial t(5);
    trial t2(6);
    static trial t3(7);
}
int main()
{
    cout<<"global variable is constructed before main function"<<endl;
    trial t(1);

     trial t2(2);
    static trial t3(3);
    static trial t4(4);
    try2();

    cout<<"Main ended"<<endl;
    return 0;
}

trial::trial(int a)
{
    data=a;
    cout<<"Constructing "<< a<<endl;
}


trial::~trial()
{
    
    cout<<"Destroying "<< data<<endl;
}