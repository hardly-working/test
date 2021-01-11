//
// Created by Individual on 2021/1/8.
//
#include <stdio.h>


struct Stu {
    char name[20];
    int age;
};

void bubble_sort(void *base, int number, int size, int (*compare)(void *elem1, void *elem2));

void swap(char *elem1, char *elem2, int size);

int compare(void *elem1, void *elem2);

int main() {

    int array[] = {5, 8, 7, 6, 9, 4, 3, 2, 1, 0};
//    int array = {9.5, 8.6, 7.9, 6.0, 5.3, 4, 3, 2, 1, 0};
//    struct Stu array = {{"zhangsan", 23},
//                          {"lisi",     27},
//                          {"wangwu",   16}};
    int sz = sizeof(array) / sizeof(array[1]);
   // printf("sizeof(array[0])%d  %d" ,sizeof(array[0]),sizeof (array));
    bubble_sort(array, sz, sizeof(array[0]), compare);
    for (int i = 0; i < sz; ++i) {
        printf("%d  ", array[i]);
    }

}

void bubble_sort(void *base, int number, int size, int (*compare)(void *elem1, void *elem2)) {
    for (int i = 0; i < number - 1; ++i) {
        //趟数
        for (int j = 0; j < number - 1 - i; ++j) {
            //两个元素的比较
            if (compare((char *) base + j * size, (char *) base + (j + 1) * size) > 0) {
                //交换
                swap((char *) base + j * size, (char *) base + (j + 1) * size, size);
            }
        }
    }
}

void swap(char *elem1, char *elem2, int size) {
    int i;
    for (i = 0; i < size; ++i) {
        char temp = *elem1;
        *elem1 = *elem2;
        *elem2 = temp;
        elem1++;
        elem2++;
    }
}

int compare(void *e1, void *e2) {
    //printf("compare two digital %d  %d\n", *((int *) elem1), *((int *) elem2));

    return ((*(int *) e1) - (*(int *) e2));
}

