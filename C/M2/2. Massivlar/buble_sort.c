#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);

    int numbers[n];
    for(int i=0; i<n;i++){
        scanf("%d", &numbers[i]);
    }

    bool is_swap;

    do{
        is_swap=false;
        for(int i=1; i<n; i++){
            if(numbers[i-1] > numbers[i]){
                int temp = numbers[i-1];

                numbers[i-1] = numbers[i];
                numbers[i]=temp;
                is_swap=true;
            }
        }
    } while (is_swap);
    
    

    for (int i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    
}