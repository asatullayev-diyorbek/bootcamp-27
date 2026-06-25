#include <stdio.h>

int main(){
    // int son1, son2, son3, son4, son5;

    // printf("1-sonni kiriting: ");
    // scanf("%d", &son1);

    // printf("2-sonni kiriting: ");
    // scanf("%d", &son2);

    // printf("3-sonni kiriting: ");
    // scanf("%d", &son3);

    // printf("4-sonni kiriting: ");
    // scanf("%d", &son4);

    // printf("5-sonni kiriting: ");
    // scanf("%d", &son5);


    // printf("%d %d %d %d %d\n\n", son1, son2, son3, son4, son5);

    // Array (massiv, ro'yxat, list) - bir turga mansub bo'lgan qiymatlar to'plami
    // type name[size] - type: massiv turi, name: massiv nomi, size: massiv o'lchami
    // numbers[5]; 1,2,3,4,5;   

    // int numbers[5]; 
    // int numbers[5] = {1, 2, 3, 4, 5};
    // int numbers[5] = {123, 23};
    // int numbers[] = {12, 3, 43, 76, 8, 19};


    // for(int i=0; i<5; i++){
    //     printf("%d - element: %d\n", i, numbers[i]);
    // }

    int n;
    // printf("n = ");
    scanf("%d", &n);

    int numbers[n]; // index: 0, 1, 2, 3, 4: -> 0x2+1=1; 1x2+1=3

    for(int i=0; i<n; i++){
        numbers[i] = i * 2 + 1;
    }


    for(int i=0; i<n; i++){
        printf("%d ", numbers[i]);
    }

    
}
