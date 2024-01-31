#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides of a triangle :");
    scanf("%d %d %d",&a,&b,&c);
    if((a<(b+c))&&(b<(a+c))&&(c<(a+b))){
        printf("The entered numbers can be the sides of a triangle");}
    else{
        printf("The given sides cannot be the sides of a triangle");

    }
    return 0;
    }
