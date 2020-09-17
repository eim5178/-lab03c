// Author: Evelyn Moore eim5178@psu.edu
// Collaborator: 
// Collaborator:
// Collaborator:
// Section: 
// Breakout: 

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n<=1){
    return n;
  }
  else {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n){
  if (n<1){
  }
  else {
    printf("%s\n", s);
    print_n(s,n);
  }
}
int main(void) {
  int n = atof(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(n));
  const char *s = readline("Enter a string: ");
  return 0;
}