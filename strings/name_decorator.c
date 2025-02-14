// Sariah Kamore, name decorator c
#include <stdio.h>
#include <string.h>
char name[100];
char decor1[50] = "^^^";
char decor2[50] = "^^^";

int main(void)
{

    printf("What is your name?\n");
    scanf("%s", name);
    strcat(decor1, name);
    printf("%s", decor1);
    strcat(decor1, decor2);
    printf("%s\n", decor2);


    return 0;
}