#include <stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

void display_time(struct Time t){
    printf("⌚️ %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

void add_seconds(struct Time *t, int seconds){
    t->hours += seconds / 3600;
    seconds %= 3600;  // seconds = seconds % 3600;

    t->minutes += seconds / 60;
    t->seconds += seconds % 60;
    display_time(*t);
}


int main(){
    struct Time t = {2, 34, 12};
    display_time(t);
    add_seconds(&t, 3850);
}