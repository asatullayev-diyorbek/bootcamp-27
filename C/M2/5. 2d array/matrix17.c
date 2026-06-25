#include <stdio.h>

int main(){
    int n, m, k;
    printf("n va m va k:");
    scanf("%d %d %d", &n, &m, &k);

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int t=0; t<m; t++){
            scanf("%d", &arr[i][t]);
        }
    }

    int sum=0, kup=1;
    for(int i=0; i<m; i++){
        sum += arr[k][i];
        kup *= arr[k][i];
    }

    printf("\nYig'indi: %d\n", sum);
    printf("Ko'paytma: %d\n", kup);
}