// #include <stdio.h>

// int main(){
//     float price = 15.99;
//     float *ptr_price = &price;  // & - xotira manzilini olib beradi

//     printf("Qiymat: %f\n", *ptr_price);  // * - pointerdan qiymatni olib beradi
//     printf("Manzil: %p\n", ptr_price); 
// }


// 6-masala
#include <stdio.h>

int main(){
    int arr[] = {2, 43, 6, 8, 10};
    int count=0;

    for(int i=0; i<5; i++){
        if (*(arr+i) % 2 == 0) count++;
    }

    printf("Soni: %d\n", count);
}