#include <stdlib.h>
#include <stdio.h>

void increment(int val, int amount){
  printf("\nIncrementing each byte by %d:\n", amount);

  char *pval = &val;
  int i;
  for(i = 0; i < 4; i++){
    *pval += amount;
    printf("Byte #%u: %hhx\n", (i + 1), *pval);
    pval++;
  }

  printf("Resulting value (hex): %x\n", val);
  printf("Resulting value (decimal): %u\n", val);

}

int main(){
  //initialize integer
  unsigned int x = 2131415271;

  char *px = &x;

  printf("Integer in hex: %x \n \n", x);

  int i;
  printf("Individual Bytes: \n");
  for(i = 0; i < 4; i++){
    printf("Byte #%u: %hhx\n", (i + 1), *(px + i));
  }

  increment(x, 1);
  increment(x, 16);

  return 0;
}
