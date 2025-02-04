// Sariah kamore, Varoables notes c
#include <stdio.h>

char name[20] = "sariah";
int age = 15;
float pi = 3.14;
float e = 2.71;

int main(void){
    printf("welcome, what is your name; \n");
    scanf("%s", name);
    printf("how old are you?\n");
    scanf("%d", &age);
    printf("write out as much as pi as you know");
    scanf("%f", &pi);
    printf("Hello I am %s. I am %d years old. I like the number %f.\n", name, age, pi);
    //printf("%d\n", age);
    //printf("%f\n", pi);
    //printf("%f\n", e);
    return 0;
}
