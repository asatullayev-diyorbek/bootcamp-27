#include <stdio.h>

// prototype - sum_and_diff(int a, int b, int *sum, int *diff)

void sum_and_diff(int a, int b, int *sum, int *diff);


int main(){
    /// 4-masala
    int arr[] = {5, 10, 15, 20, 25};

    printf("%d\n", *(arr+2));

    // 5-masala
    int i=0;
    while (i<5){
        printf("%d ", *(arr+i));
        i++;
    }

    // 6-masala
    int x = 100;
    int *pt_x = &x;

    *pt_x = 200;
    printf("\n%d\n", *pt_x);


    // 7-masala
    int a = 4, b = 9;
    int *pt_a = &a, *pt_b = &b;

    printf("7-masala: %d\n", *pt_a + *pt_b);

    //8-masala
    int arr8[] = {10, 20, 30, 40, 50};
    int sum=0;
    int *pt_sum = &sum;

    for(int i=0; i<5; i++){
        *pt_sum += *(arr8 + i); // arr8[i]
    }
    printf("Yigindi: %d", *pt_sum);
    

    // 10-masala
    int a1 = 15, b1 = 25;
    int sum1, diff;
    
    sum_and_diff(a1, b1, &sum1, &diff);
    printf("\nSum: %d\nDiff: %d\n", sum1,  diff);
}

void sum_and_diff(int a, int b, int *sum, int *diff){
    *sum = a + b;
    *diff = a - b;
}