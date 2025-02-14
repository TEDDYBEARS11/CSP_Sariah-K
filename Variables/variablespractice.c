// Sariah Kamore, variables practice c
#include <stdio.h>
char name [50];
int age;
int color[50];
int breakfast[50];
int number1;
int number2;
int subject[50];
int eye_color[50];
int year;
int school[50];

int main(void)
{
    printf("what is your name?\n");
    scanf("%s", name);
    printf("what is your age? \n");
    scanf("%d", &age);
    printf("favorite color? \n");
    scanf("%s", &color);
    printf("favorite breakfast food? \n");
    scanf("%s", &breakfast);
    printf("favorite number between 1 and 10? \n");
    scanf("%d", &number1);
    printf("favorite number between 100 and 1000? \n");
    scanf("%d", &number2);
    printf("favorite subject in school? \n");
    scanf("%s", &subject);
    printf("what is your eye color? \n");
    scanf("%s", &eye_color);
    printf("what school do you go to? \n");
    scanf("%s", &school);
    printf("what year is it? \n");
    scanf("%d", &year);
    printf("Hello, %s, you are %d years old. Your favorite color is %s, your favorite breakfast food is %s, your favorite number between 1 and 10 is %d, your favorite number between 100 and 1000 is %d, your favorite subject in school is %s, your eye color is %s, you go to %s school, and it is %d.\n", name, age, color, breakfast, number1, number2, subject, eye_color, school, year);

    return 0;
}

