#include<stdio.h>
int main(){
    int num,a,b,rem=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    b=num;
    while(b>0){
        a=b%10;
        rem=rem*10+a;
        b=b/10;
    }
    printf("The reverse Number %d is %d \n",num,rem);
    return 0;
}