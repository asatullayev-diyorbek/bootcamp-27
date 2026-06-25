#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, A, B;

    scanf("%d %d %d", &n, &A, &B);

    int sonlar[n+1];
    sonlar[0]=A;
    sonlar[1]=B;

    for(int i=2;i<=n;i++){
        sonlar[i] = sonlar[i-1] + sonlar[i-2];
    }

    for(int i=0; i<=n; i++){
        printf("%d ", sonlar[i]);
    }

}