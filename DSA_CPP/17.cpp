#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
main()
{
    string str="return";
   // cout<<"orignal string : "<<str<<endl;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        

       // str[i]-=32;
    }
    //cout<<"AFTER MAKING CAPITAL : " <<str<<endl;

     //cout<<"orignal string : "<<str<<endl;
    
    for(int i=0;i<n;i++)
    {
        
        //str[i]+=32;
    }
    //cout<<"AFTER MAKING SMALL : " <<str<<endl;

 transform(str.begin(),str.end(),str.begin(),::toupper);   
 //cout<<str<<endl; 
 transform(str.begin(),str.end(),str.begin(),::tolower);   
 //cout<<str<<endl;
 str="096548";
 
 sort(str.begin(),str.end(),greater<int>());
 //cout<<str;
 str="apple";
 int freq[26];
 for(int i=0;i<26;i++)
 {
    freq[i]=0;
 }
 for(int i=0;i<str.size();i++)
 {
    freq[str[i]-'a']++;
 }
 char ans='a';int maxf=0;
 
 for(int i=0;i<26;i++)
 {
    if(freq[i]>maxf)
    {
        maxf=freq[i];
        ans=i+'a';
        
        
        
    }
    
 }
 cout<<"Character : " <<ans<<" occurs " <<maxf<<" times in string  : "<<str;

}