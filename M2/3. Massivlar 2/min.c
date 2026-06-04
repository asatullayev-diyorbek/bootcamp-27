#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    int min=sonlar[0];
    // min start
    for(int i=1; i<n; i++){
        if(sonlar[i] < min){
            min = sonlar[i];
        }
    }
    // min end

    printf("Eng kichik son: %d\n", min);
}