#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    int max=sonlar[0];

    // max start
    for(int i=1; i<n; i++){
        if(sonlar[i] > max){
            max = sonlar[i];
        }
    }
    // max end

    printf("Eng kattasi: %d\n", max);
}