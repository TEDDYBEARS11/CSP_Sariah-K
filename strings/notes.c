// Sariah Kamore, string notes c
#include <stdio.h>
#include <string.h>

//char subject[50];
//char name [] = "victoria";
//char sentence [] = "the quick brown fox jumps over the lazy dog.";

int main(void){
    //printf("what class are you in?");
    //scanf("%s", subject);
    //fgets(subject, 50, stdin);
    //printf("you are in %s", subject);
    //name[0] = 'T';
    //name[1] = 'o';
    //name[2] = 'r';
    //name[3] = 'i';
    //printf("%s", name);
    //int size = ("%lu\n" ,sizeof(sentence));
    //print("%lu\n" ,sizeof(sentence));
    //printf("%lu\n" ,strlen(sentence));
    char one =  "hello ";
    char two = "world!";
    char three[] = "welcome to my program!";
    printf("%s\n", one);
    strcat(one, two);
    printf("%s\n", one);
    strcat(three, one);
    printf("%s\n", three);
    return 0;
}