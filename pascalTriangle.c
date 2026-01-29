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

int main(){
    int n;
    printf("Enter a value of n: ");
    scanf("%d",&n);
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= i ; j++){
            int icj = combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}