// #include <stdio.h>

// void multiply(int *result, int a, int b){
//     *result = a * b;
// }

// int main(){
//     int m=5, n=6, natija;
//     int *result = &natija;

//     multiply(result, m, n);
//     printf("Najita: %d\n", *result);
// }
//----------------------------------

// #include <stdio.h>

// void make_positive(int *n){
//     if (*n < 0){
//         *n *= -1; // *n = *n * (-1)
//     }
// }

// int main(){
//     int temp = -5;
//     int *pt = &temp;

//     make_positive(pt);
//     printf("Natija: %d", *pt);
// }

// ----------------------

// #include <stdio.h>

// void even_sum_odd_product(int *arr, int size, int *esum, int *oprod){
//     for(int i=0; i<size; i++){
//         if(*(arr + i) % 2 == 0) *esum += *(arr + i);
//         else *oprod *= *(arr + i);
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int sum=0, prod=1, *p_sum=&sum, *p_prod=&prod;

//     even_sum_odd_product(arr, 6, p_sum, p_prod);

//     printf("Natija: %d. %d\n", *p_sum, *p_prod);
// } 


// ----------------------------------

#include <stdio.h>

void shift_right(int *arr, int n){
    int temp = *arr;

    for (int i=0; i<n-1; i++){
        int t= *(arr + i + 1);
        *(arr + i + 1) = temp;
        temp = t;
    }
    *arr = temp;
}


int main(){
    // int arr[] = {5, 10, 15, 20, 25};

    // shift_right(arr, 5);

    // for(int i=0; i<5; i++){
    //     printf("%d ", *(arr + i));
    // }

    // A — while
    int i = 1;
    while (i <= 0) { printf("%d ", i); i++; }

    printf("\n\n");

    // B — do-while
    i = 1;
    do { printf("%d ", i); i++; } while (i <= 0);
} 
