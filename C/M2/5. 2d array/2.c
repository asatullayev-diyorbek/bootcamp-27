#include <stdio.h>

int main(){

    // int array2D[3][2] = {{3, 4}, {6, 7}, {9, 10}};

    // for(int i=0; i<3; i++){
    //     for(int k=0; k<2; k++){
    //         printf("%d ", array2D[i][k]);
    //     }
    //     printf("\n");
    // }

    int n, m;
    printf("n va m:");
    scanf("%d %d", &n, &m);

    int arr[n][m], sum[m] = {};

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            scanf("%d", &arr[i][k]);
        }
    }

    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            sum[k] += arr[i][k];
        }
    }

    for(int i=0; i<m; i++){
        printf("%d yigi'indi: %d\n", i+1, sum[i]);
    }
}