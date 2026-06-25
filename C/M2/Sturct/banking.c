#include <stdio.h>
#include <string.h>

struct Person{
    char first_name[50];
    char last_name[50];
    int age;
};

struct Bank{
    char name[50];
    char address[100];
    char call_center[14];
};

struct Transaction{
    double amount;
    char type[5];
};

struct Wallet{
    int id;
    double balance;
    struct Person owner;
    struct Bank bank;

    struct Transaction transactions[50];
    int t_count;
};

void deposit(struct Wallet *wallet){
    double summa;
    printf("Summani kiriting: ");
    scanf("%lf", &summa);

    wallet->balance += summa;
    wallet->transactions[wallet->t_count].amount = summa;
    strcpy(wallet->transactions[wallet->t_count].type, "🟢 add");
}

void display_balance(struct Wallet wallet){
    printf("** Balance -> %lf\n\n", wallet.balance);
}

int main(){
    struct Wallet wallet;
    printf("Ismingizni kiriting: ");
    scanf("%s", wallet.owner.first_name);
    printf("Familiyangizni kiriting: ");
    scanf("%s", wallet.owner.last_name);
    printf("Yoshingizni kiriting: ");
    scanf("%d", &wallet.owner.age);

    wallet.id = 1001;
    wallet.balance = 0.0;
    wallet.t_count = 0;
    stpcpy(wallet.bank.name, "NT bank");
    stpcpy(wallet.bank.address, "Farg'ona shahar");
    stpcpy(wallet.bank.call_center, "+998788889888");

    while(1){
        printf("*** Menu ***\n");
        printf("1. Pul kiritish\n");
        printf("2. Pul yechish\n");
        printf("3. Balans\n");
        printf("4. Tranzaksiyalar tarixi\n")
        printf("5. Chiqish\n");
        printf("Menuni tanlang: ");
        int menu;
        scanf("%d", &menu);

        switch(menu){
            case 1:
                deposit(&wallet);
                break;
            case 3:
                display_balance(wallet);
                break;
        }
    }
}