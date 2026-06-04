#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    int index=0;

    for(int i=1; i<n-1; i++){
        if(sonlar[0] < sonlar[i] && sonlar[i] < sonlar[n-1]){
            index = i;
        }
    }

    printf("%d", index); 
}