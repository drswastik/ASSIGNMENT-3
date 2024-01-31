#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of days the member is late to return the book :\n");
    scanf("%d",&a);
    if(a<6){
        printf("The fine is %d",a);}
    else if(a>=6&&a<=10){
        printf("The fine is: %d",((a-5)*2)+5);}
    else if(a>11&&a<=30){      printf("The fine is %d",((a-10)*5)+15);}
    else{
        printf("Sorry! Your membership is cancelled");}
return 0;
}