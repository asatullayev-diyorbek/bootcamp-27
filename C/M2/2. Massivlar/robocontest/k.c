#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, k;
    bool is_exist=false;

    scanf("%d %d", &n, &k);

    int sonlar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &sonlar[i]);
    }

    for (int i=0; i<n; i++){
        if (sonlar[i]%k == 0){
            printf("%d ", sonlar[i]);
            is_exist=true;
        }
    }

    if(!is_exist) printf("-1");
}