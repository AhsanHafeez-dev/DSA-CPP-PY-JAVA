#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<cmath>
int sum(int x);
int max(int a,int b,int c);
int check_pythagoras(int a,int b,int c);
int convert_binary_to_decimal(int binary);
int convert_octal_to_decimal(int octal);
int convert_decimal_to_binary(int decimal);
int add_binary(int a,int b);
int main(){
    sum(4);
    printf("%d\n",check_pythagoras(3,4,6));
    printf("%d\n",convert_binary_to_decimal(101));
    printf("%d\n",convert_octal_to_decimal(64));
    convert_decimal_to_binary(60);
    printf("\n");
    add_binary(11,1);
    return 0;
}
int sum(int x){
    int sum=0;
    for(int i=0;i<x;i++){
        sum+=i;
    }
    printf("%d\n",sum);
    return sum;
}
int max(int a,int b,int c){
    int max=a;
   if(b>max){max=b;}
   if(c>max){max=c;}
    //printf("%d",max);
    return max;
}
int check_pythagoras(int a,int b,int c){
    /*THIS FUNCTION CHECKS WETHER GIVEN SIDE OF TRIANGLE FOLLOW PYTHAGORAS\
    THEOREM OR NOT*/
    int base,hyp,perp;
    perp=max(a,b,c);
    if(a==perp){hyp=b;base=c;}
    else if(b==perp){hyp=a;base=c;}
    else if(c==perp){hyp=a;base=b;}

    if(pow(perp,2)==pow(hyp,2)+pow(base,2)){return 1; }
    else{return 0;}
}                                        
int convert_binary_to_decimal(int binary){
    int k=0;
    int q;
    int p=0;
    int answer=0;
    for(int i=1;binary>0;i++){
        q=binary%10;
        k = q* pow(2,p);
        binary=binary/10;
        p++;
        answer+=k;
}
    return answer;
}
int convert_octal_to_decimal(int octal){
    int k=0;
    int q;
    int p=0;
    int answer=0;
    for(int i=1;octal>0;i++){
        q=octal%10;
        k = q* pow(8,p);
        octal=octal/10;
        p++;
        answer+=k;
}
    return answer;
}
int convert_decimal_to_binary(int decimal){
    int i;
    int answer;
    int arr[200];
    for(i=0;decimal>0;i++){
        arr[i]=decimal%2;
        decimal=decimal/2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}
int add_binary(int a,int b){
   int x =convert_binary_to_decimal(a);
   int y=convert_binary_to_decimal(b);
   int sum=x+y;
   convert_decimal_to_binary(sum);
}