#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
main()
{
    string s(5,'n') ;
    string x; 
    //getline(cin,x);
    string s1="hgedcba",s2="xyz";
   // //s1.append(s2);
    //cout<<s1+s2<<endl;
    
    //cout<<s2.compare(s1) <<endl;
   // s1.clear();
    //cout<<s1.empty();
 //   s1.erase(1,1);
    //s1.insert(0,"string");
    cout<<s1<<endl;
    cout<<s1.find("def")<<endl;
    cout<<s2.length()<<endl;
    string y=s1.substr(6,3);
cout<<y<<endl;
cout<<s1<<endl;
sort(s1.begin(),s1.end());
cout<<s1<<endl;
s1="786";
int i= stoi(s1);
i+=2;
cout<<i<<endl;
s1=to_string(i);
cout<<s1+"2";
    
}