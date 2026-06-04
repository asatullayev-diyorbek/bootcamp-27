#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    for (int i=0; i<n; i++){
        for (int k=0; k<n; k++){
            printf("%d ", sonlar[i]);
        }
        printf("\n");
    }
}