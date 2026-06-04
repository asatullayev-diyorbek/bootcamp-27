#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    int count = 0;
    for(int i=0; i<n-1; i++){
        if (sonlar[i] <= sonlar[i+1]){
            count ++;
        }
    }

    if (count == n-1){
        printf("O'suvchi");
    }
    else if (count == 0){
        printf("Kamayuvchi");
    }
    else{
        printf("Aralash");
    } 
}