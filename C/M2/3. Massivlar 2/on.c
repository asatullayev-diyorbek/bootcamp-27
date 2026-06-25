#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    for (int i=0; i<n; i++){
        printf("%d ", sonlar[i] * sonlar[i]);
    }
}