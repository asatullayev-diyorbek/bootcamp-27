#include <stdio.h>

int main(){
    int n, m;
    printf("n va m:");
    scanf("%d %d", &n);

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            scanf("%d", &arr[i][k]);
        }
    }

    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            if(i==k) d1 += arr[i][k];
            if(i+k == n-1) d2 += arr[i][k];
        }
    }

    printf("%d %d", d1, d2);
}