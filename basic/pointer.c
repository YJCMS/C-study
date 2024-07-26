#include <stdio.h>

int main() {
    int i;          // 변수 'i' 선언
    int *p = &i;    // 포인터 'p'를 'i'의 주소로 초기화
    i = 3;          // 'i'에 값 3을 할당
    
    printf("Value of i: %d\n", i);           // 'i'의 값을 출력
    printf("Address of i: %p\n", (void*)&i); // 'i'의 주소를 출력 형식으로 출력하기 위해서
    printf("Address stored in p: %p\n", (void*)p); // 포인터 'p'가 저장한 주소를 출력

    return 0;
}