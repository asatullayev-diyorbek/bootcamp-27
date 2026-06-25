#include <stdio.h>
#include <string.h>

struct Product{
    char name[50];
    float quantity;
    float price;
};

float total_cost(struct Product *products, int size){
    float cost=0;
    for(int i=0; i<size; i++){
        cost += products[i].price * products[i].quantity;
    }
    return cost;
}

int main(){
    struct Product products[5];

    strcpy(products[0].name, "Piyoz");
    products[0].quantity = 8.5;
    products[0].price = 5000;

    strcpy(products[1].name, "Pomidor");
    products[1].quantity = 2;
    products[1].price = 9000;

    strcpy(products[2].name, "Kartoshka");
    products[2].quantity = 3;
    products[2].price = 8000;

    strcpy(products[3].name, "Guruch");
    products[3].quantity = 2.0;
    products[3].price = 23000.0;

    strcpy(products[4].name, "Yog'");
    products[4].quantity = 1.0;
    products[4].price = 24000.0;

    printf("Umumiy narx: %.2f\n", total_cost(products, 5));
    printf("%d\n", sizeof(products));
}