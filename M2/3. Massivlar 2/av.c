#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    int max_dublicate = 0;
    for(int i=0; i<n; i++){
        int count = 0;

        
        for(int k=0; k<n; k++){
            if (sonlar[i]==sonlar[k]){
                count ++;
            }
        }
        if (count > max_dublicate) max_dublicate=count;
    }

    printf("%d", max_dublicate);
}