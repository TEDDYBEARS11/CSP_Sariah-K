//Sariah Kamore, silly sentences c
#include <stdio.h>
#include <string.h>
char verb[100];
char noun[100];
char advective[100];
char adverb[100];


int main(void)
{
    printf("noun\n");
    scanf("%s", noun);
    printf("name a verb\n");
    scanf("%s", verb);
    printf("advective\n");
    scanf("%s", advective);
    printf("adverb\n");
    scanf("%s", adverb);
    printf("The %s %s %s %s\n", noun, verb, advective, adverb);

    return 0;
}