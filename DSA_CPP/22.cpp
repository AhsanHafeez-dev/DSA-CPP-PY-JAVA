#include<iostream>
#include<string>
using namespace std;
void print(string  x,int=0);
void pireplace(string s);
void tower(int n,char src,char dest,char aux);
void printmove(int x,char src,char dest,char aux);
string duplicate(string s);
string moving_x(string s);
void subString(string s,string ans);
void subStringAscii(string s,string ans);
void possibleword(int a,int b,int=0,int=0);

main()
{
string r="pippxxppiixipi";
//pireplace(r);
int n=3;
//tower(n,'a','c','b');
//cout<<duplicate("aaabbbcccd")<<endl;
//cout<<move_x("axxbdxcefxhix")<<endl;
//subString("ABC","");
//subStringAscii("AB","");
possibleword(2,3);
//string x[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//cout<<x[2][0];
//cout<<x[3][0];


}

void print(string  x,int i)
{
    if(x[i]=='\0'){return;}
    print(x,i+1);
    cout<<x[i];
}

void pireplace(string s)
{

 if(s.length()==0){return;}
 if( s[0]=='p' && s[1]=='i'){cout<<"3.14";pireplace(s.substr(2));}
 else{cout<<s[0];pireplace(s.substr(1));}

}

void tower(int n,char src,char dest,char aux)
{
    
    if(n==1)
    {
        printmove(1,src,dest,aux);
        return;
    }
    tower(n-1,src,aux,dest);
    printmove(n,src,dest,aux );
    tower(n-1,aux,dest,src);
    

}

void printmove(int x,char src,char dest,char aux)
{
   cout<<"moving disk "<<x<<" from "<<src<<" to "<<dest <<endl;
}

string duplicate(string s)
{
    if(s.length()==0){return "";}
    char ch=s[0];
    string ans=duplicate(s.substr(1));
    if(ch==ans[0]){return ans;}
    return ch+ans;

}

string move_x(string s)
{
     if(s.length()==0)
    {
        return "";
    }
  if(s[0]=='x')
  {
    return  move_x(s.substr(1)) + s[0];
  }  
  else{
    return s[0] + move_x(  s.substr(1) );
    }

}

void subString(string s,string ans)
{
    if(s.length()==0){cout<<ans<<endl;return;}
    string ros=s.substr(1);
    char ch=s[0];

    subString(ros,ans);
    subString(ros,ans+ch);
}

void subStringAscii(string s,string ans)
{
    if(s.length()==0){cout<<ans<<endl;return;}
    char ch=s[0];
    int code =ch;
    string ros=s.substr(1);
    subStringAscii(ros,ans);
    subStringAscii(ros,ans+ch);
    subStringAscii(ros,ans+to_string(code));

}

void possibleword(int a,int b,int i,int j)
{
    
    if(a>9 || b>9){throw "The keypad contain number uptil 9 your argument is greater than 9\n";}
    string x[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};   //characters corresponding to number in keypad mobile
    if(i>=x[a].length() || j>=x[b].length()){return;}

    cout<<x[a][i];
    cout<<x[b][j]<<endl;
    
    if(j==x[b].length()-1 && i<=x[a].length()-1){possibleword(a,b,i+1,0);}
    else if(i==x[a].length()-1 && j<=x[b].length()-1){possibleword(a,b,i,j+1);}
    else if(i<x[a].length()-1 && j<x->length()-1){possibleword(a,b,i,j+1);}


}