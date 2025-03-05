// sariah kamore old enough c
int age;
#include <stdio.h>


int main(void){
    printf("how old are you?\n");
    scanf("%d", &age);
    if(age<5){ 
        printf("you are not able to go to school");
    }else if (age == 5){
        printf("you can only go to school");
    }else if(age <= 14){
        printf("you can go to school");
    }else if (age == 15){
        printf("you can get a permit and go to school.");
    }else if (age == 16){
        printf("you can drive, get a permit, and go to school.");
    }else if (age == 17){
        printf("you are able to drive, have a permit, and go to school but you cannot vote");
    }else{
        printf("you can vote, drive, go to school, and have a permit");
    }
return 0;
}