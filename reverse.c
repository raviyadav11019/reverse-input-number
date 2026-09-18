#include<stdio.h>
int main(){
    int num,a,b,x;
    printf("Enter your number: ");
    scanf("%d",&x);
    long long reverse=0;
    while(x!=0){
        a=x%10;
        reverse=reverse*10+a;
        x=x/10;   
    }
    if (reverse > 2147483647 || reverse < -2147483648)
        return 0;
    else 
    printf("%lld\n",reverse);

    return 0;
}
// code will run for 
/*
121
-345
48643878

the value for running code is limited
by making if statement although 
that range is too much 

*/