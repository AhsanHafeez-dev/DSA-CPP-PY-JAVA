#include<stdio.h>
#include<cmath>
#include<math.h>
int main(){
   int n;
    int cube=0;
    printf("ENTER NUMBER \n");
    scanf("%d",&n);
    int test=n;
    for(;test>0;){
        int last=test%10;
        cube=cube+(last*last*last);
        test=test/10;
        }
        printf("%d\n",n);
        printf("%d\n",cube);
        if(cube==n){printf(" ARMNSTRONG NUMBER \n");}
        else{printf("NOT A ARMSTRONG NUMBER\n");}

    return 0;
   int reverse=0;
   for(;n>0;){
    int lastdigit=n%10;
    n=n/10;
    reverse=reverse*10+lastdigit;
}
       printf("%d",reverse);
    return 0;
    int ch=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){printf("NUMBER IS NOT PRIME\n");ch=1;break;}     
    }
    if(ch==0){printf("NUMBER IS PRIME");}
    return 0;
}