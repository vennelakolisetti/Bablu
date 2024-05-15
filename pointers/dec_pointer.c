#include <stdio.h>

int main() {
  int a = 10;
  int *b = &a;
  printf(" b stores the address of a = %p\n", b);
  printf("value of a = %d\n", a);
  printf("address of a = %p\n", &a);
  printf("value of a = %d\n", *b);
  printf("value of a = %i\n", *b);
  printf(" adress of a = %p\n", &b);  
  return 0;
}
