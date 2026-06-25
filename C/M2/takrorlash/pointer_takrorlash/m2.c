#include <stdio.h>

int main (){
    int x=48;
    int *pointer_x = &x;

    *pointer_x/=2;

    printf ("%d",*pointer_x);
    
}