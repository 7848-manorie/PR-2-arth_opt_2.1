#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("addition of a and b is:%d",a+b);
    printf("\nsubtraction of a and b is:%d",a-b);
    printf("\nmultiplication of a and b is:%d",a*b);
    printf("\ndivision of a and b is:%d",a/b);
    printf("\nmodulo of a and b is:%d",a%b);
    getch();
}