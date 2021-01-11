//
// Created by Individual on 2021/1/8.
//


#include <stdio.h>
#include <stdlib.h>

int compare(const void *elem1, const void *elem2) {

    return ((*(float *) elem1) - (*(float *) elem2));
}

int main() {

    float array[] = {9.0, 8.0, 7.8, 6.6, 5.5, 4.4, 3.76, 2.87, 1.34, 0};

    int sz = sizeof(array) / sizeof(array[0]);

    printf("%d", sz);
    qsort(array, sz, sizeof(array[0]), compare);

    for (int i = 0; i < sz; ++i) {
        printf("%f", array[i]);
        printf("\n");
    }
}
