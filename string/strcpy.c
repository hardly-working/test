//
// Created by Individual on 2021/1/11.
//

#include <stdio.h>


char *my_strcpy(char array1[], const char array2[]);

int main() {

    char array1[] = "abcdef";
    char array2[] = "hello";
    printf(array1);
    printf("\n");
    my_strcpy(array1, array2);

    printf(array1);

}

char *my_strcpy(char *a1, const char *a2) {
    char * ret = a1;
    while(*a1++ = *a2++){
        ;
    }
    return a1;
}
