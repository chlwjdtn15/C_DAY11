// p로 a,b,c,d,e를 모두 출력해주세요.

#include <stdio.h>




// 여기서 change 함수를 구현해주세요.
void change(int* a) {


  int size = sizeof(a) / sizeof(a[0]);

  int b = *(a + 0);
  int c = *(a + 1);

  printf("%d\n", b);
  printf("%d\n", c);


  // for ( int i = 0; i < size; i++) {

  //   *(a + i) = *(a + i) * 2;


  // }


  for ( int i = 0; i < size; i++) {

    a[i] =  a[i] * 2;


  }

  
  // 2가지 이상 방식으로
}



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

  // int arr[10];
  // int a = 0;
  // int size = sizeof(arr) / sizeof(arr[0]);
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
  // for(int i = 0; i < size; i++) {
    
  //   scanf("%d", &a);

  //   *(arr + i) = a;

    
  // }

  // for (int i = 0; i < 10; i++) {
  //   printf("%d\n", *(arr + i));
  // }



  // 문제 : 배열을 훼손하는 change 함수를 만들어주세요.

  int x[2];
  x[0] = 100;
  x[1] = 200;
  //int x[2] = {100, 200}; // 위 3 줄 코드의 같은 의미이다.
  printf("%ld\n", (long)&x);
  printf("%ld\n", (long)&x[1]);
  printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);

  // 여기서 change 함수를 실행해주세요.
  change(x);

  printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);
  // 출력 => change 함수를 호출하기 전, x[0] : 200, x[1] : 400
  

  return 0;
}