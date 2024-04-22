#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    printf("Enter two 3 digit numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping, a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, a=%d and b=%d",a,b);
    return 0;
}