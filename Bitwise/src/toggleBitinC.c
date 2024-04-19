#include <stdio.h>
#include "hdr.h"

int toggle(unsigned int num, int pos);

int main()
{
  unsigned int num;
  int pos;
  printf("Enter the number : ");
  scanf("%d", &num);
  printf("Enter the pos to toggle :");
  scanf("%d", &pos);
  int temp = toggle(num, pos);
  dis(temp);
  return 0;
}
int toggle(unsigned int num, int pos){
  return (num ^ (1<<pos));
}
