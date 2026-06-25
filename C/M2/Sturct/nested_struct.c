#include <stdio.h>
#include <string.h>

struct Address{
    char country[50];
    char region[50];
    char city[50];
    char street[50];
    int number;
};

struct Person{
    char first_name[50];
    char last_name[50];
    int age;
    float weight;
    float height;

    struct Address address;
};

void display_address(struct Person person){
    printf("*** %s %s ning manzili ***\n", person.first_name, person.last_name);
    printf("Davlat: %s\n", person.address.country);
    printf("Viloyat: %s\n", person.address.region);
    printf("Shahar/tuman: %s\n", person.address.city);
    printf("Uy manzili: %s %d-uy\n", person.address.street, person.address.number);
    printf("*********************\n\n");
}

void display_body(struct Person person){
    printf("*** %s %s ning bo'yi/vazni ***\n", person.first_name, person.last_name);
    printf("Bo'y uzunligi: %.2f sm\n", person.height);
    printf("Vazni: %.2f kg\n", person.weight);
    printf("*********************\n\n");
}

void change_name(struct Person *person, char *first_name, char last_name[50]){
    strcpy(person->first_name, first_name);
    strcpy(person->last_name, last_name);
    printf("First_name and last_name changed\n\n");
}

int main(){
    struct Person p1;

    strcpy(p1.first_name, "Eshmat");
    strcpy(p1.last_name, "Toshmatov");
    p1.age = 30;
    p1.weight = 90;
    p1.height = 190;
    
    strcpy(p1.address.country, "O'zbekiston");
    strcpy(p1.address.region, "Farg'ona");
    strcpy(p1.address.city, "Rishton");
    strcpy(p1.address.street, "Yangi hayot");
    p1.address.number = 23;

    char first_name[] = "Toshmat";
    display_address(p1);
    display_body(p1);
    change_name(&p1, first_name, "Eshmatov");
    display_body(p1);
}