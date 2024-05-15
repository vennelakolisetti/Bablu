#include <stdio.h>

int main() {
  int* a;
  int b;

  b = 10;

  a = &b;

  printf("Address of a=%p\n", a);
  printf("value of a=%d\n", *a);
  printf("adress of b=%p\n", &b);
  printf("value of b=%d\n", b);
  
  b = 20;

  printf("adress of b=%p\n", &b);
  printf("value of b=%d\n", b);
  printf("a is= %p\n", a);

  *a = 30;

  printf("value of a=%d\n", *a);
  printf("address of a=%p\n", a);

  printf("address of b=%p\n", &b);
  printf("value of  b=%d\n", b);


  return 0;
}

