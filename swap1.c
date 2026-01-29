#include<stdio.h>
int main(){
    int a = 10, b = 5;
    printf("%d %d\n",a,b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);
    return 0;
}