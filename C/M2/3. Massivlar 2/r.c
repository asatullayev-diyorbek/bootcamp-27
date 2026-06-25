#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    bool is_exist = false;

    for(int i=0; i<n-1; i++){
        if(sonlar[i] < sonlar[n-1]){
            printf("%d", sonlar[i]);
            is_exist = true;
            break;
        }
    }

    if (!is_exist) printf("0");
}