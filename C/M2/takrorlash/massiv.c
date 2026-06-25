// massiv - bir xil turdagi ma'lumotlar to'plami; massiv, array, arr, matrix, list, ro'yxat
#include <stdio.h>

int main(){
    int ages[5];
    int years[] = {2022, 2023, 2024, 2025, 2026, 2027, 2028};

    int size;
    printf("Massiv o'lchami: ");
    scanf("%d", &size);

    int grades[size];   

    for(int i=0; i<size; i++){
        printf("%d - index qiymati: ", i);
        scanf("%d", &grades[i]);
    }

    for(int i=0; i<size; i++){
        printf("%d - index qiymati: %d\n", i, grades[i]);
    }
}