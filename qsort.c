#include <stdio.h>
#include <stdlib.h>

//int comp(const void *e1, const void *e2){
//
//        //int i = 0;
//
//        return ((*(int *)e1) - (*(int *)e2));
//
//}
int comp(void *elem1, void *elem2) {
    //printf("compare two digital %d  %d\n", *(int *) elem1, *(int *) elem2);

    return ((*(int *) elem1) - (*(int *) elem2));
}


        int main() {

    int array[] = {9, 1, 2, 3, 40, 5, 6, 7, 8,0 };
    int sz = sizeof(array) / sizeof(array[0]);

    qsort(array, sz, sizeof(array[0]), comp);

    for (int i = 0; i < sz; ++i) {
        printf("%d ", array[i]);
    }

}

