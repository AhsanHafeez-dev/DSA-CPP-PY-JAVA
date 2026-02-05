#include<stdio.h>
int main(){
    int rows5;
    printf("ENTER NUMBER OF ROWS\n");

    scanf("%d",&rows5);
    for(int i=1;i<=rows5;i++){
        for(int j=1;j<=rows5*2;j++){
          int f=(rows5*2)-i;
            if(j<=i){printf("* ");}
            else if(j>f){printf("* ");}
            else{printf("  ");}
        }
        printf("\n");
    }
    for(int i=rows5;i>=1;i--){
      for(int j=rows5*2;j>=1;j--){
              int f=(rows5*2)-i;
            if(j<=i){printf("* ");}
            else if(j>f){printf("* ");}
            else{printf("  ");}
}
printf("\n");      }
    return 0;
    int rows3;
    printf("ENTER NUMBER OF ROWS \n");
    scanf("%d",&rows3);
    for(int i=1;i<=rows3;i++){
        for(int j=1;j<=rows3;j++){
            if(j<=i){printf("%d ",i);}
            else{printf("  ");}
        }
        printf("\n");
    }
    return 0;
    int rows2;
    printf("ENTER NUMBER OF ROWS \n");
    scanf("%d",&rows2);
    for(int i=rows2;i>=1;i--){
        for(int j=0;j<=rows2;j++){
            if(j>=i){printf("* ");}
            else{printf("  ");}
        
        printf("\n");
    }
    return 0;
    int rows1;
    printf("ENTER NUMBER OF ROWS \n");
    scanf("%d",&rows1);
    for(int i=rows1;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
      return 0;
    int rows;
    printf("ENTER NUMBER OF ROWS\n");
    scanf("%d",&rows);
    int colum;
    printf("ENTER NUMBER OF COLUM\n");
    scanf("%d",&colum);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=colum;j++){
            if(j==1){printf("*");}
            if(j==colum){printf("*");}
            else{if(i==1){printf("*");}
            else if(i==rows){printf("*");}
            else{printf(" ");}
            }
        }
        printf("\n");
    }
    return 0;
    //creating program to print rectangular pattern of desired no of rows and colums
    int n;
     printf("ENTER NUMBER OF ROWS\n");
    scanf("%d",&n);
    int m;
    printf("ENTER NUMBER OF COLUMS\n");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
        printf("* ");}
        printf("\n");
    }
    return 0;
}