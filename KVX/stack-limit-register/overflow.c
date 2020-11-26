#include <stdio.h>

int factorial(int a) {
  printf("%d\n", a);
  return a * factorial(a - 1);
}

int main(int argc, char **argv) { return factorial(atoi(argv[1])); }
