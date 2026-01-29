#include<stdio.h>
void starTriangle(int x){
    for(int i = 1 ; i <= x ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
    return ;
}
int main(){
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);
    return 0;
}