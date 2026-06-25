#include <stdio.h>

int main(){
    int arr[3][3] = {
        {3, 4, 5},
        {2, 3, 4},
        {1, 2, 3}
    };
    int kichiklar[3];

    for(int i=0; i<3; i++){
        int kichik=arr[0][i];
        for(int k=0; k<3; k++){
            if(arr[k][i] < kichik) kichik=arr[k][i];
        }
        kichiklar[i] = kichik;
    }

    int kattasi=kichiklar[0];
    for(int i=0; i<3; i++){
        printf("%d\n",kichiklar[i]);
    }
      

    printf("Natija: %d\n", kattasi);
}