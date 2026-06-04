#include <stdio.h>
#include <stdbool.h>

void kursHaqida(){
    printf("C dasturlash tili kursi\n");
}

void salomlash(int age){
    age=18;
    printf("Assalomu alaykum, Sizning yoshingiz %d da!\n", age);
}

void time_display(int secunds){
    printf("Minut: %d;\nSekund: %d\n\n", secunds/60, secunds%60);
}

int square_number(int num){
    return num*num;
}

bool is_even(int son){
    return son%2 == 0;
}

int main(){
    int age=16;

    kursHaqida();
    printf("%d\n", age);

    salomlash(age);
    printf("%d\n", age);

    time_display(128);

    printf("Natija: %d\n", square_number(23));
    

    printf("Natija: %d\n", is_even(22));

}