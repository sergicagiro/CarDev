#include <stdio.h>

int main() {
  int num;
  
  printf("Enter a number: ");
  scanf("%d", &num);
  
  int next = num + 1;
  
  printf("The next number is %d\n", next);
  
  return 0;
}