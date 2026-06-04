#include <stdio.h>
#include <stdbool.h>

void swap(int a, int b){
    printf("a = %d  b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d  b = %d\n", a, b);
}

void swap_pointer(int *a, int *b){
    printf("a = %d  b = %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d  b = %d\n", *a, *b);
}

int main(){
    // int n = 10;
    // int *pt = &n;

    // printf("%d\n", n);
    // printf("%p\n", pt);   

    // *pt = 30;
    // printf("%d\n", n);

    int a=5, b=6;

    // printf("a = %d  b = %d\n", a, b);
    // swap(a, b);
    printf("a = %d  b = %d\n", a, b);
    swap_pointer(&a, &b);
    printf("a = %d  b = %d\n", a, b);

}