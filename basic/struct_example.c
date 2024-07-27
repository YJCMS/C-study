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
    
    printf("학번 입력 : ");
    scanf("%d", &s.number);
    printf("이름 입력 : ");
    scanf("%s", s.name);
    printf("학점 입력 : ");
    scanf("%lf", &s.grade);
    
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1f\n", s.grade);
    return 0;
}