#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    // selection sort start
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int k=i; k<n; k++){
            if (sonlar[k] < sonlar[min]){
                min = k;
            }
        }
        int temp = sonlar[i];
        sonlar[i]=sonlar[min];
        sonlar[min]=temp;
    }
    // selection sort end

    for (int i=0; i<n; i++){
        printf("%d ", sonlar[i]);
    }
}