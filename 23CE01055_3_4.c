#include<stdio.h>
int main(){
int a,b,c,d,e,f;
printf("Enter the coordinates of the first point as X1 and Y1 :\n");
scanf("%d %d",&a,&b);
printf("Enter the coordinates of the second point as X2 and Y2 :\n");
scanf("%d %d",&c,&d);
printf("Enter the coordinates of the third point as X3 and Y3 :\n");
scanf("%d %d",&e,&f);
int g,h;
//slope check
g=(d-b)/(c-a);
h=(f-d)/(e-c);
if(g==h){
    printf("The entered points lie on a line");
}
else{
    printf("The given points donot lie on a line");
}
return 0;


}