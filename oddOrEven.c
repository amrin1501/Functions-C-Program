#include<stdio.h>
void checkEvenOrOdd(int n){
    if(n % 2 == 0) printf("It is an even number.");
    else printf("It is an odd number.");
    return ;
}
int main(){
    int n;
    scanf("%d",&n);
    checkEvenOrOdd(n);
    return 0;
}