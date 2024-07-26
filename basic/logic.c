#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    printf("x가 y보다 크고 y는 40미만? %d\n", (x > y) && (y < 40));
    return 0;
}