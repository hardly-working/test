//
// Created by Individual on 2021/1/11.
//

#include <stdio.h>
#include <assert.h>
#include <string.h>

char *my_strstr(const char array[],  const char source[]);

int main(){

    char array[] = "abbbbcdef";
    char source[] = "bbbc";

    printf(array);
    printf("\n");
    char *ret =  my_strstr(array,source);

    if (ret) {
        printf(ret);
    } else {
        printf("没有匹配到");
    }


}

char *my_strstr(const char *array,const char *source) {

    assert(array && source);
    char *s1 = array;
    char *s2 = source;
    char *cur = array;
    while (*cur){
        s1 = cur;
        s2 = source;
        while (*s1 && *s2 && (*s1 == *s2)){
            s1++,s2++;
        }
        if (!*s2){
            return cur;
        }
        cur++;

    }
    return NULL;
}
