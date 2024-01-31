#include<stdio.h>
int main(){
    int m,n,k;
    printf("Enter the marks obtained by the student(<=100):\n");
    scanf("%d",&m);
    printf("Enter the number of classes attended by the student (<Total number of classes) :\n");
    scanf("%d",&n);
    printf("Enter the total number of classes conducted:\n");
    scanf("%d",&k);
    float w = (float) n/k;
    float t=m*w;
    
    if(m<101 && m>0 && n<=k){printf("Final Score = %f\n",t);
    if(t >= 90){ printf("Grade = EX");}
    else if(t >= 80 &&t < 89){printf("Grade = A");}
    else if(t >= 70 && t< 79){printf("Grade = B");}
    else if(t >= 60 && t < 69){printf("Grade = C");}
    else if(t >= 50 &&t < 59){printf("Grade = D");}
    else if(t >= 40&& t < 49){printf("Grade = P");}
else{printf("Grade = F");}}
else{printf("Please enter correct values!");}
return 0 ; }
