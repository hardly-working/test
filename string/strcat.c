//
// Created by Individual on 2021/1/11.
//
#include <stdio.h>

char *my_strcat(char array[30], const char source[6]);

int main(){

    char array[30] = "abcdef";
    char source[] = "hello";

    printf(array);
    printf("\n");
    my_strcat(array,source);

    printf(array);

}

char *my_strcat(char *array, const char *s1) {
    char *ret = array;

    while (*array++){
        ;
    }
    array--;
    while (*array++ = *s1++) {
        ;
    }

    return ret;
}
