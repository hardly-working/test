//
// Created by Individual on 2021/1/8.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu {
    char name[20];
    int age;
};

int compare_Byage(const void *elem1, const void *elem2) {

    struct Stu *e1 = (struct Stu *) elem1;
    struct Stu *e2 = (struct Stu *) elem2;
    return ((*e1).age - (*e2).age);
}

int compare_ByName(const void *elem1, const void *elem2) {
    struct Stu *e1 = (struct Stu *) elem1;
    struct Stu *e2 = (struct Stu *) elem2;
    return strcmp(e1->name, e2->name);
}

int main() {

    struct Stu s[] = {{"lisi",     20},
                      {"zhangsan", 10},
                      {"wangwu",   30}};
    int sz = sizeof(s) / sizeof(s[0]);

//    qsort(s,sz,sizeof (s[0]),compare_Byage);
    qsort(s,sz,sizeof (s[0]),compare_ByName);

    printf("数组的个数 %d\n", sz);
    for (int i = 0; i < sz; ++i) {
        printf("%s   ", s[i].name);
        printf("%d   ", s[i].age);
        printf("\n");
    }
}