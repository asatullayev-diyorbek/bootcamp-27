#include <stdio.h>
#include <string.h>

struct Student{
    char ism[50];
    char familiya[50];
    int age;
    float score;
};

struct Book{
    char name[50];
    char author[50];
    int price;
    float discount;
    int year;
};

float calculate_price(struct Book *book){ 
    return book->price * (1 - book->discount / 100);  // 90 * 0.95;
}

void fi_display(struct Student student){
    printf("Ism: %s\nFamiliya: %s\n", student.ism, student.familiya);
}


// int birth_year(struct Student *student){
//     return 2026 - student->age;
// }

int main(){
    struct Student s1;
    strcpy(s1.ism, "Toshmat");
    strcpy(s1.familiya, "Boltaboyev");
    s1.age = 20;
    s1.score = 4.6;
    // printf("%s %s ning tug'ilgan yili: %d\n", s1.ism, s1.familiya, birth_year(&s1));
    fi_display(s1);

    struct Book b1 = {"Nabaviy tarbiya", "Adham Sharqoviy", 100000, 5};
    printf("Kitob narxi: %.2f\n", calculate_price(&b1)); //b1.calculate_price()

    // printf("Talaba ismi: ");
    // scanf("%s", s1.ism);

    // printf("Talaba familiyasi: ");
    // scanf("%s", s1.familiya);

    // printf("Talaba yoshi: ");
    // scanf("%d", &s1.age);

    // printf("Talaba bali: ");
    // scanf("%f", &s1.score);

    // printf("F.I: %s %s\n", s1.ism, s1.familiya);
    // printf("Yoshi: %d\n", s1.age);
    // printf("📈Ball: %.2f\n", s1.score);

    // printf("S1 address: %p\n", &s1);
    // printf("S1.ism address: %p\n", s1.ism);


}