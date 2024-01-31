#include<stdio.h>
void main(){
    int a;
    printf("Enter an integer :");
    scanf("%d",&a);
    if(a>0){
        printf("Entered number is positive");
    }
    else if(a<0){
        printf("Entered number is negative");
    }
    else{
        printf("Entered number is zero");
    }
    
}