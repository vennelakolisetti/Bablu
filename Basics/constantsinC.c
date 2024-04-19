#include <stdio.h>
#include <string.h>
int main()
{
  // Decimal Const
  const int x = 3;
  printf("Const : %d\n", x);

  // Floating Const
  const float pi = 3.14;
  printf("Const Float: %f\n", pi);

  // Octal Const
  const int oct = 052;
  printf("Const Octal: %o\n", oct);

  // Hexa Const
  const int hex = 0x2A;
  printf("Const Hexa: %x\n", hex);

  // String Const
  const char *sr = "SOMA";
  printf("Const Str: %s\n", sr);
}
