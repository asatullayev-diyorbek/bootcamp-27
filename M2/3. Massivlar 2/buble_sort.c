#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    // buble sort start
    bool is_swap = false;
    do {
        is_swap=false;
        for(int i=0; i<n-1; i++){
            if (sonlar[i] > sonlar[i+1]){
                int temp=sonlar[i];
                sonlar[i]=sonlar[i+1];
                sonlar[i+1]=temp;
                is_swap=true;
            }
        }
    }while(is_swap);
    // buble sort end

    for (int i=0; i<n; i++){
        printf("%d ", sonlar[i]);
    }
}