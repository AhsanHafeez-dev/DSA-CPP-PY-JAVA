#include<iostream>
using namespace std;
class Shape{
    private:
    int x;
    protected:
    int no_of_side;
    public:
    int getArea(){return 0;};
    Shape()
    {
        cout<<"Shape is created"<<endl;    
        
    }

    ~Shape()
    {
        cout<<"Shape is destroyed"<<endl;    
    }
    
};

class Rectangle:private Shape{
    public:
    int getArea(){return 2;}
    Rectangle(){cout<<"Rectangle is created"<<endl;}
    ~Rectangle(){cout<<"Rectangle is destroyed"<<endl;}
};
int main()
{
    Rectangle r;
    cout<<r.getArea();
    return 0;
}