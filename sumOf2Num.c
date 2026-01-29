#include<stdio.h>
int sum(int x ,int y){
    return x + y;
}
int main(){
    int a = 5 , b = 10;
    int result = sum(a , b); // call
    printf("Sum of 2 number is: %d",result);
    return 0;
}