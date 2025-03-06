//sariah kamore family loop c
#include <stdio.h>

int main(void){
    char family[][20] = {"Sariah", "archie", "Isabella", "Hilary", "Libery", "Mysiah"};
    int flength = sizeof(family)/sizeof(family[0]);
    int f;
    for(int f=0; f<flength; f++){
        printf("Hello, %s, Welcome to CSP class", family[f]);
    }

    return 0;
}