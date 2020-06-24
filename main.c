// p로 a,b,c,d,e를 모두 출력해주세요.

#include <stdio.h>

int main(void) {
  
  int e = 50;
  int d = 40;
  int c = 30;
  int b = 20;
  int a = 10;

  int* p = &a;

  printf("a :%ld\n", (long)&a);
  printf("b :%ld\n", (long)&b);
  printf("c :%ld\n", (long)&c);
  printf("d :%ld\n", (long)&d);
  printf("e :%ld\n", (long)&e);


  printf("a: %d\n", *p);
  printf("b: %d\n", *(p + 1));
  printf("c :%d\n", *(p + 2));
  printf("d: %d\n", *(p + 3));
  printf("e: %d\n", *(p + 4));





  return 0;
}