#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Computer{
    char brand[50];
    char name[100];

    float price;
    int Memory;
    int Disk;
    float display_size;
};

int main(){
    int capacity = 3;
    struct Computer *computors = calloc(capacity, sizeof(struct Computer));

    if(computors == NULL){
        printf("Xotiradan joy ajratilmadi!\n");
        return 0;
    }

    strcpy(computors[0].brand, "HP");
    strcpy(computors[0].name, "ProBook");
    computors[0].Disk = 512;
    computors[0].Memory = 16;
    computors[0].display_size = 14.1;
    computors[0].price = 800;

    strcpy(computors[1].brand, "Lenovo");
    strcpy(computors[1].name, "ThinkPad");
    computors[1].Disk = 1024;
    computors[1].Memory = 32;
    computors[1].display_size = 15.6;
    computors[1].price = 1200;

    strcpy(computors[2].brand, "Dell");
    strcpy(computors[2].name, "XPS");
    computors[2].Disk = 256;
    computors[2].Memory = 8;
    computors[2].display_size = 13.3;
    computors[2].price = 950;

    // hotira hajmini o'zgartirish
    capacity += 2;
    struct Computer *temp = realloc(computors, capacity * sizeof(struct Computer));

    if(temp == NULL){
        free(computors);
        printf("Xotirada joy yetarli emas!\n");
        return 0;
    }
    computors = temp;

    strcpy(computors[5].brand, "Dell");
    strcpy(computors[5].name, "XPS");
    computors[5].Disk = 256;
    computors[5].Memory = 8;
    computors[5].display_size = 13.3;
    computors[5].price = 950;

    for(int i=0; i<capacity; i++){
        printf("Nomi: %s\n", computors[i].name);
    }

    free(computors);
}