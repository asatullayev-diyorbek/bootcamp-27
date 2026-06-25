#include <stdio.h>

void swap_pointer(int *a, int *b){
    printf("a = %d  b = %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d  b = %d\n", *a, *b);
}

int main(){
    int a=5, b=6;

    printf("a = %d  b = %d\n", a, b);
    swap_pointer(&a, &b);
    printf("a = %d  b = %d\n", a, b);

}