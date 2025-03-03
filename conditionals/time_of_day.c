//sariah kamore time of day c
#include <stdio.h>
#include <time.h>
int main(void){
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    int hour = tm_struct->tm.hour;
    if(hour >= 12 && hour <= 16){
        printf("good afternoon");
    }else if(hour > 16 && hour <= 19){
        printf("good evening");
    }else if(hour > 19){
        printf("good night");
    }else{.
        printf("good sunny morning");
    }
    return 0;
}