#include <stdio.h>
int main()
{
  int a = 10;
  float b = 20;
  char c = 'v';

  int *p1;
  float *p2;
  char *p3;

  p1 = &a;
  p2 = & b;
  p3 = &c;

  printf("Value of a=%d\n", a);
  printf("Value of b=%f\n", b);
  printf("Value of c=%c\n", c);

  printf("Value of p1=%d\n", *p1); 
  printf("Value of p2=%f\n", *p2);
  printf("Value of p3=%c\n", *p3);

  printf("adress of p1=%p\n", p1);
  printf("adress of p2=%p\n", p2);
  printf("adress of p3=%p\n", p3);


  printf("Value of a=%d\n", *(&a));
  printf("Value of b=%f\n", *(&b)); 
  printf("Value of c=%c\n", *(&c));

  printf("adress of a=%p\n", &a);
  printf("adress of b=%p\n", &b);
  printf("adress of c=%p\n", &c);

  return 0;

}
