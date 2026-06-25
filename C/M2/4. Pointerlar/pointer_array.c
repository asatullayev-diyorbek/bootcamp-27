#include <stdio.h>

int main(){
    int x=10;
    int *pt_x = &x;

    printf("%p\n", pt_x);

    int sonlar[5] = {1, 2, 3, 4, 5};

    printf("%d\n", *sonlar); 
    printf("%d\n", *(sonlar + 1));  
    
    // sonlar[1] => *(sonlar + 1) => '
    // sonlar[i] => *(sonlar + i);  offset
    // sonlar[0] => *(sonlar + 0);
}