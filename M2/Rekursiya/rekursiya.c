#include <stdio.h>

int sum_rekursiya(int a, int b){
    if (a==b){
        return a;
    }
    return a + sum_rekursiya(a+1, b);
}

int faktorial(int n){
    if(n==1) return 1;
    return n * faktorial(n-1);
}

int fibonacci(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void count_down(int n){
    if (n==1){
        printf("1");
        return;
    }
    printf("%d ", n);
    count_down(n-1);
}

int size_of_string(char *matn, int index){
    if(*(matn + index) == '\0'){
        return 0;
    }
    return 1 + size_of_string(matn, index+1);
}

void print_binary(int n){
    if(n==0) return;

    print_binary(n/2);
    printf("%d", n%2);
}

int sum_digits(int n){
    if (n==0) return 0;
    return n % 10 + sum_digits(n/10);
}

int maximum(int *sonlar, int size){
    if(size==1){
        return *sonlar;
    }

    int max = maximum(sonlar, size-1);
    return max>*(sonlar-size-2)?max:*(sonlar-size-2);
}

int main(){
    int a=5, b=10;
    printf("Natija: %d\n", sum_rekursiya(a, b));

    printf("Faktorial: %d\n", faktorial(5));

    printf("Fibonacci sum: %d\n", fibonacci(5));

    count_down(5);
    
    char suz[] = "salomalik";
    printf("\nSo'z uzunligi: %d\n", size_of_string(suz, 0));

    print_binary(2);

    printf("\nRaqamlar yig'indisi: %d\n", sum_digits(12345));

    int sonlar[] = {4, 5, 6, 7, 8};
    printf("Kattasi: %d\n", maximum(sonlar, 5));
}
