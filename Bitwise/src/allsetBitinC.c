//Program to count how many bits are set in an integer//
//Program to count how many bits are not set in an integer//

#include <stdio.h>
#include "hdr.h"
int howmany(unsigned int num);
int main()
{
  unsigned int num;
   printf("Enter the number : ");
   scanf("%d", &num);
   howmany(num);
   return 0;
}

int howmany(unsigned int num) {
  int setbit = 0;
  int clrbit = 0;
  while(num != 0){
    if(num & 1){
      setbit++;
    } else {
      clrbit++;
    }
    num = num >> 1;
  }
  printf("Number of ones: %d\n", setbit);
  printf("Number of zeros: %d\n", clrbit);
}
