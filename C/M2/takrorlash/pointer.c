#include <stdio.h>

void ekranga_chiqarish(int son){
    printf("Qiymat: %d\n", son);
    printf("Manzil: %p\n", &son);
    son = 50;
}

void ekranga_chiqarish_pointer(int *son){
    printf("Qiymat: %d\n", *son);
    printf("Manzil: %p\n", son);
    *son = 50;
}
int main(){
    int x=10;
    int *pointer_x = &x;

    printf("X ning xotira manzili: %p\n\n", &x);
    ekranga_chiqarish_pointer(&x);

    printf("Qiymat: %d\n", x);
    printf("Manzil: %p\n", &x);
}