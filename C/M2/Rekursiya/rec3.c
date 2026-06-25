#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int count_positive(int *sonlar, int n){
    if(n==1){
        return *(sonlar + n-1) > 0;
    }
    return (*(sonlar + n-1) > 0) + count_positive(sonlar, n-1);
}

bool is_palindrome(char *matn, int left, int right){
    if (left + 1 >= right){
        return *(matn+left) == *(matn+right);
    }
    return *(matn+left) == *(matn+right) && is_palindrome(matn, left+1, right-1);
}

void show_star(int n){
    if (n==0) return;
    printf("* ");
    show_star(n-1);
}

void show_pattern(int k, int row){
    show_star(row);
    printf("\n");
    if (k == row) return;
    show_pattern(k, row+1);
}


int main(){
    int sonlar[] = {1, -4, 5, -3, -2, 8, 9, 6, -7, 10};
    char matn[] = "ikki";
    int count = count_positive(sonlar, 10);
    
    // printf("Musbat sonlar soni: %d\n", count);

    // printf("%s => %d\n", matn, is_palindrome(matn, 0, strlen(matn)-1));

    show_pattern(5, 1);

}