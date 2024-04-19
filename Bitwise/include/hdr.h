#include <stdio.h>

void dis(unsigned int num);
/*
int main()
{
  unsigned int num;
  printf("Enter the Number : ");
  scanf("%d", &num);
  dis(num);
  // printf("Binary number : ", dis(num));
  return 0;
}
*/
void dis(unsigned int num) {
  int i = 8;
  while(i){
    if(num & 128){
      printf("1 ");
    } else {
      printf("0 ");
    }
    num = num << 1;
    i--;
  }
  printf("\n");
}
