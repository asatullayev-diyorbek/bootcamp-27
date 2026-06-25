#include <stdio.h>

int* find_min(int *arr, int size);

int main(){
    int arr[] = {5, 3, 8, 10, 6};
    int *pt_min = find_min(arr, 5);

    printf("Min address: %p - %d\n", pt_min, *pt_min);
}

int* find_min(int *arr, int size){
    int min=0;
    for(int i=0; i<size; i++){
        if(*(arr+i) < *(arr + min)){
            min = i;
        }
    }
    return (arr + min);
}