#include<stdio.h>
//#if QUES == 2
int main() {
  unsigned char num;
  int i;
  num = 0xAB;
  for (i = 0; i < 8; i++) {
    if (num & 128) {
    printf("1");
  } else {
    printf("0");
  }
   num = num << 1;
}
printf("\n");
num = ((num << 4) & (num >> 4));
for (i = 0; i < 8; i++) {
    if (num & 128) {
    printf("1");
  } else {
    printf("0");
  }
  num <<= 1;
}
  printf("\n");
  return 0;
}

