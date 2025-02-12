// Sariah Kamore, variables practice c
#include <stdio.h>
char name [50];
int age;

int main(void)
{
    printf("what is your name?\n");
    scanf("%s", name);
    printf("what is your age?\n");
    scanf ("%d", age);
    printf("hello %s, you are %d years old \n", name, age);
    return 0;
}

