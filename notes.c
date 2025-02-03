#include <stdio.h>

char name[] = "sariah";
int age = 15;
float pi = 3.14;
float e = 2.71;

int main(void){
    printf("Hello I am %s. I am %d years old. I like the number %f.\n", name, age, pi);
    printf("%d\n", age);
    printf("%f\n", pi);
    printf("%f\n", e);
    return 0;
}
