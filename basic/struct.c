#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(void) {
    struct student s;
    s.number = 20140001;
    strcpy(s.name, "Steven");
    s.grade = 4.3;
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1f\n", s.grade);
    return 0;
}