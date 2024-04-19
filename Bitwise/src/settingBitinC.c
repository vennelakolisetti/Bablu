//Program to set a bit at a particular position in an integer//

#include <stdio.h>
#include "hdr.h"

int set(unsigned int num, int pos);

int main()
{
  unsigned int num;
  int pos;
  printf("Enter the Number : ");
  scanf("%d", &num);
  printf("Enter the pos : ");
  scanf("%d", &pos);
  int temp = set(num, pos);
  dis(temp);
  return 0;
}
int set(unsigned int num, int pos) {
//  int num;
//  int pos;
  num = (num | ( 1<<pos));
  return num;
}
