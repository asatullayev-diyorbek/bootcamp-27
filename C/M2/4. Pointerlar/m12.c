#include <stdio.h>

void reverse(int *arr, int size);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);

    for(int i=0; i<6; i++){
        printf("%d ", *(arr+i));
    }
}

void reverse(int *arr, int size){
    for(int i=0; i<=size/2; i++){
        int temp = *(arr+i);
        *(arr+i) = *(arr + size - i- 1);
        *(arr + size - i - 1) = temp;
    }
}