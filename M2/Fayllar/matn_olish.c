#include <stdio.h>

int main() {
    FILE *poem = fopen("sher.txt", "r");

    if (poem == NULL) {
        printf("Fayl ochilmadi\n");
        return 1;
    }

    char matn[100];
    int son;

    fscanf(poem, "%[^,],%d", matn, &son);

    printf("Matn: %s\n", matn);
    printf("Son: %d\n", son);

    fclose(poem);

    return 0;
}