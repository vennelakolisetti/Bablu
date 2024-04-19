#include <stdio.h>
int main()
{
  int a;
  int b;
  printf("Enter the A & B values : ");
  scanf("%d %d", &a, &b);
  if(a > b) {
    printf(" A is Less than B\n");
  } else {
    printf(" B is Greater than A\n");
  }
  return 0;
}

