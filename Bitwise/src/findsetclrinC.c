#include <stdio.h>
#include "hdr.h"
int setclr(unsigned int num, int pos);
int main()
{
  unsigned int num;
  int pos;
  printf("Enter the number : ");
  scanf("%d", &num);
  printf("Enter the pos to find bit is clr/set :");
  scanf("%d", &pos);
  if(setclr(num, pos) == 0){
    printf("The Bit is cleared.\n");
  }else{
    printf("The Bit is Set.\n");
  }
  return 0;
}
int setclr(unsigned int num, int pos){
  if((num & (1 << pos)) == 0){
    return 0;
  } else {
    return 1;
  }
}
