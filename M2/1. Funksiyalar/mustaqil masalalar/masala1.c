#include<stdio.h>
int yigindi(int son1, int son2){
    return son1+son2;
}


int main(){
 
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n\n", yigindi(a,b));
    
}