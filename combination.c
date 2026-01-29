#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i = 2 ; i <= x ; i++){
        fact *= i;
    }
    return fact;
}
int combination(int p, int q){
    return factorial(p) / (factorial(q)*factorial(p-q));
}
int permutation(int a, int b){
    return factorial(a) / factorial(a-b);
}
int main(){
    int n;
    printf("Enter a value of n: ");
    scanf("%d",&n);
    int r;
    printf("Enter a value of r: ");
    scanf("%d",&r);
    printf("%d\n",combination(n,r));
    printf("%d",permutation(n,r));
    return 0;
}