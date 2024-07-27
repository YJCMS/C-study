#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *pc = NULL;
    int i = 0;
    pc = (char *)malloc(100*sizeof(char));
    if(pc == NULL) {
        printf("동적메모리할당 실패");
        exit(1);
    }

    for(i = 0; i < 26; i++) {
        *(pc + i) = 'a' + i;
    }
    *(pc + i) = 0; // NULL값은 문자열의 종료를 의미

    printf("%s\n", pc);
    free(pc);
    return 0;
}

