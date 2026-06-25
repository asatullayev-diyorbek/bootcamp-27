#include <stdio.h>

int main(){
    // int a=5, b=10, sum=0;
    // for(int i=a; i<=b; i++){
    //     sum += i;
    // }

    // printf("Yig'indi: %d\n", sum);

    int f1=1, f2=1;

    printf("1 1 ");
    for(int i=2; i<10; i++){
        printf("%d ", f1+f2);
        int temp = f2;
        f2 = f1+f2;
        f1 = temp;
    }
}