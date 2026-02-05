#include<stdio.h>
int main(){

    printf("%d\n",1&0);//bitwise AND operator return 1 if both num are 1 otherwise 0
    printf("%d\n",1|0);//bitwise OR operator return 1 if any of 2 number or both are 1, otherwise 0
    printf("%d\n",0^0);//XOR operator if two values are same it gives 0 otherwise 1
    printf("%d\n",~0);//ones complement operator it changes 1 into 0
    printf("%d",(4<3)?45:67);//ternary operator
    
    int a=(1,2,3);
    printf("%d\n",a);
    return 0;
    int button;
    printf("ENTER BUTTON NUMBER\n");
    scanf("%d",&button);
    switch (button)
    {
        case 1:
            printf("CASE 1\n");
            break;
        case 2:
            printf("CASE 2\n");
            break;
        case 3:
            printf("CASE 3\n");
            break;
        case 4:
            printf("CASE 4\n");
            break;
        case 5:
            printf("CASE 5\n");
            break;
        default:
            printf("OUT OF RANGE BUTTON NUMBER");
            break;
    }
    
    return 0;
    int j;
    int i;
    int c=0;
    int str;
    int end;
    scanf("%d",&str);
    for( j=str;j==str;j++){
        for( i=2;i<j/2;i++){
            if(j%i==0){c++;break;}}
        }
        if(c==0){printf("PRIME NUMBER");}
        else{printf(" IS NOT PRIME\n");}
    
    return 0;
    for(int i=1;i<=100;i++){
        if(i%3==0){continue;}
        printf("%d\t",i);
    }
    return 0;
    for(int date=0;date<=30;date++){
        if(date%2==0){printf("ON %d DAY OF MONTH YOU CAN GO OUTSIDE\n",date);}
        else{continue;}
    }
    return 0;
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("SUM IS : %d\n",sum);
    int in;
    while(in>=0){
        scanf("%d",&in);
    }
    return 0;
}