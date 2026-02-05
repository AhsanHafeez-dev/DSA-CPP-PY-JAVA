#include<stdio.h>
int main(){
    int n;
    printf("ENTER N FOR ZIGZAG PATTERN\n");
    scanf("%d",&n);
    for(int i=1;i<=3;i++){
            for(int j=1;j<=n;j++){
                if((j+i)%4==0){printf("*");}
                else if(i==2&&j%4==0){printf("*"); }
                else{printf(" ");}            
        }
    printf("\n");
    }
    return 0;
    printf("\n");
    int rows;
    printf("ENTER NUMBER OF ROWS \n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            printf("  ");
        }
        for(int k=1;k<=(i*2)-1;k++){
            printf("* ");
        }
        printf("\n");}
    for(int l=rows;l>=1;l--){
        for(int j=1;j<=rows-l;j++){
            printf("  ");
        
        for(int k=1;k<=(l*2)-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    printf("\n");
    for(int i=1;i<=rows;i++){
        int j;
        int k=i;
        for(j=1;j<=rows-i;j++){
            printf(" ");  
        }
        for(;j<=rows;j++){
            printf("%d ",k--);
        }
        k=2;
        for(;j<=rows+i-1;j++){
            printf("%d ",k++);
        }
        printf("\n");
    } 
    return 0;
    for(int i=1;i<=rows;i++){
        int count=0;
       
     for(int k=1;k<=rows-i;k++){printf(" ");}

     for(int j=1;j<=i;j++){
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=rows;j++){
            if(j<=i-1){printf("  ");}
        }
        for(int k=1;k<=rows;k++){
            printf("* ");}
        printf("\n");
    }
    return 0;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==1){printf("%d ",0);}
                else if(j%2==0){printf("%d ",1);}
            }

            else if(i%2==1){
                if(j%2==1){printf("%d ",1);}
                else if(j%2==0){printf("%d ",0);}
            }

        }
        printf("\n");
    }
    return 0;
    for(int i=rows;i>=1;i--){
        for(int colum=1;colum<=rows;colum++){
            if(colum<=i){printf("%d ",colum);}
        }
        printf("\n");
    }
    return 0;
}}