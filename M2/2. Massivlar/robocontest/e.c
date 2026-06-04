#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int fibonaccies[n];  // 1, 1, 2, 3, 5, 8, 13, 21
    fibonaccies[0]=1;
    fibonaccies[1]=1;

    for(int i=2; i<n;i++){
        fibonaccies[i] = fibonaccies[i-1]+fibonaccies[i-2];
    }

    for(int i=0; i<n; i++){
        printf("%d ", fibonaccies[i]);
    } 
}
