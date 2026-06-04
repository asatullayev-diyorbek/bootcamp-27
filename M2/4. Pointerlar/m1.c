#include <stdio.h>

void double_it(int *pt){
    *pt += 2;
}

int main(){
    int x = 7;
    int *pt_x = &x;

    // 1-masala
    printf("%d\n", *pt_x);

    // 2-masala
    double_it(pt_x);
    printf("%d\n", *pt_x);

}