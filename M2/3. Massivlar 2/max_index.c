#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    int max_index = 0;

    // max start
    for(int i=1; i<n; i++){
        if (sonlar[i] > sonlar[max_index]){
            max_index = i;
        }
    }
    // max end

    printf("Eng kattasi indeksi: %d\n", max_index);
}