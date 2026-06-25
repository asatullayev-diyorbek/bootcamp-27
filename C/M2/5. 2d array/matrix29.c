#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    double urta_arifmetiks[n];
    int kichkilari[n];
    
    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            scanf("%d", &arr[i][k]);
        }
    }
    
    for(int i=0; i<n; i++){
        int sum=0;
        for(int k=0; k<m; k++){
            sum += arr[i][k];
        }
        urta_arifmetiks[i] = 1.0 * sum / m;
    }

    for(int i=0; i<n; i++){
        kichkilari[i] = 0;
        for(int k=0; k<m; k++){
            if(arr[i][k] * 1.0 < urta_arifmetiks[i]){
                kichkilari[i]++;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d\n", kichkilari[i]);
    }
}