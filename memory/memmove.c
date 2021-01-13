//
// Created by Individual on 2021/1/12.
//
#include <stdio.h>
#include <assert.h>

void *my_memmove(void *dest, const void *src, size_t num);

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(array) / sizeof(array[0]);
    //移动之前的数据
    for (int i = 0; i < sz; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
    my_memmove(array+ 2, array , 20);

    //移动之后的数据
    for (int i = 0; i < sz; ++i) {
        printf("%d  ", array[i]);
    }

}

void *my_memmove(void *dest, const void *src, size_t num) {
    assert(dest && src);
    char *ret = dest;
    if (src < dest ){
        //后 -- 》 前
        while (num--){
            *((char *)dest + num) = *((char *)src + num);
        }
    }else{
        //前  --> 后
        while (num--){
            *(char*)dest = *(char*)src;
            (char*)dest++,*(char*)src++;
        }
    }


    return ret;


}
