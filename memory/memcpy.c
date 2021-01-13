//
// Created by Individual on 2021/1/12.
//

#include <stdio.h>
#include <assert.h>

void *my_memcpy(void *dest, const void *src, int i);
struct Stu {
    char name[30];
    int age ;
};

//#include <string.h>
int main() {

    int array[10] = {0};
    int source[] = {10 , 11, 12, 13, 14, 15, 16, 17, 18, 19};
    struct Stu s1[] = {};
    struct Stu s2[] = {{"lisi",10},{"wangwu",20},{"zhangsan",30}};
    //没复制之前的数据
    int sz = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < sz; ++i) {
        printf("%d   ", array[i]);
    }
    printf("\n");

    char *ret = (char *) my_memcpy(array, source, sizeof(source));
    my_memcpy(array, source, sizeof(source));
    //复制之后的数据
    int *ret1 = (int *) ret;
    for (int i = 0; i < sz; ++i) {
        printf("%d  ", *ret1++);
    }


}

void *my_memcpy(void *dest, const void *src, int i) {
    assert(dest && src);
    char *ret = (char *) dest;
    while (i--) {
        *(char *) dest = *(char *) src;
//        dest = (char *) dest + 1;
//        src = (char *) src + 1;

        (char *) dest++, (char *) src++;
    }
    return ret;
}
