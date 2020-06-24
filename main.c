// p로 a,b,c,d,e를 모두 출력해주세요.

#include <stdio.h>




// 여기서 change 함수를 구현해주세요.
// void change(int* a) {


//   int size = sizeof(a) / sizeof(a[0]);

//   int b = *(a + 0);
//   int c = *(a + 1);

//   printf("%d\n", b);
//   printf("%d\n", c);


//   // for ( int i = 0; i < size; i++) {

//   //   *(a + i) = *(a + i) * 2;


//   // }


//   for ( int i = 0; i < size; i++) {

//     a[i] =  a[i] * 2;


//   }

  
//   // 2가지 이상 방식으로
// }



void change(int** a) {

  // v1. 포인터 연산

  // v2. 배열문법으로 풀기

  // v3. 포인터 연산 + 배열문법 같이

  // 나머지 더 생각 나시는 분은 다른 방법 풀이

  int size = sizeof (a) / sizeof (a[0]);
  
  printf("a: %ld\n", (long)*(*(&(a))));
  printf("b: %ld\n", (long)*(*(&a + 1));






  for ( int i = 0; i < size; i++) {

    *(*(a + i)) = *(*(a + i)) * 2;


  }


  // for ( int i = 0; i < size; i++) {

  //   a[i] =  a[i] * 2;


  // }
  

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

  // int x[2];
  // x[0] = 100;
  // x[1] = 200;
  // //int x[2] = {100, 200}; // 위 3 줄 코드의 같은 의미이다.
  // printf("%ld\n", (long)&x);
  // printf("%ld\n", (long)&x[1]);
  // printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);

  // // 여기서 change 함수를 실행해주세요.
  // change(x);

  // printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);
  // // 출력 => change 함수를 호출하기 전, x[0] : 200, x[1] : 400
  


  // 문제 : 배열을 훼손하는 change 함수를 만들어주세요.(배열의 포인터)

  int x[2] = {100, 200};
  // x : 배열변수
  // x의 값은 자동으로 x[0]의 주소값을 가진다.
  // x == &x[0]
  // x의 타입은 int* 이다.

  
  printf("x: %ld\n", (long)&x);
  printf("x1: %ld\n", (long)&x[1]);


  printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);

  int* p = x;

    
  printf("p: %ld\n", (long)&p[0]);
  printf("p1: %ld\n", (long)&p[1]);


  change(&p); //p는 x의 x배열의 주소값을 가지고 있다. x배열의 수열에 접근하려면 더블 포인터 필요.

  printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);
  // 출력 => change 함수를 호출하기 전, x[0] : 200, x[1] : 400


  return 0;
}