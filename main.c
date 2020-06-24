// p로 a,b,c,d,e를 모두 출력해주세요.

#include <stdio.h>

int main(void) {
  
  // int e = 50;
  // int d = 40;
  // int c = 30;
  // int b = 20;
  // int a = 10;

  // int* p = &a;

  // printf("a :%ld\n", (long)&a);
  // printf("b :%ld\n", (long)&b);
  // printf("c :%ld\n", (long)&c);
  // printf("d :%ld\n", (long)&d);
  // printf("e :%ld\n", (long)&e);


  // printf("a: %d\n", *p);
  // printf("b: %d\n", *(p + 1));
  // printf("c :%d\n", *(p + 2));
  // printf("d: %d\n", *(p + 3));
  // printf("e: %d\n", *(p + 4));


  // int arr[5];

  // printf("%ld\n", (long)&arr);
  // printf("%ld\n", (long)&arr[0]);


  // 문제 : 고객에게 숫자를 10개 입력받아서 배열에 넣기
  // 조건 : 변수를 2개만 사용해주세요.
  // 조건 : 선언을 제외한 배열 문법을 쓸 수 없습니다.

  int arr[10];
  int a = 0;
  int size = sizeof(arr) / sizeof(arr[0]);
  //v1 
  // 배열문법 사용해서 10개 받아 출력하기.
  // for(int i = 0; i < size; i++) {
    
  //   scanf("%d", &a);

  //   arr[i] = a;

    
  // }

  // for (int i = 0; i < 10; i++) {
  //   printf("%d\n", arr[i]);
  // }


  //v2 
  // 배열문법 사용X 10개 받아 출력하기.
  // 배열변수의 의미에 대해 알아야 함.
  for(int i = 0; i < size; i++) {
    
    scanf("%d", &a);

    *(arr + i) = a;

    
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", *(arr + i));
  }

  return 0;
}