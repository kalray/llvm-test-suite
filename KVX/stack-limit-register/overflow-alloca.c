#include <stdio.h>
#include <stdlib.h>

int sum(int *v, int n) {
  int result = 0;
  for (int i = 0; i < n; i++)
    result += v[i];
  return result;
}

int testalloca(int n) {
  int *v = (int *)alloca(n * sizeof(int));
  int v2[n * 2];
  for (int i = 0; i < n; i++) {
    v[i] = i;
    v2[i] = i;
    v2[n + i] = i * 2;
  }
  return sum(v, n) + sum(v2, n * 2);
}

int main(int argc, char **argv) {
  if (argc != 2)
    return -1;
  int n = atoi(argv[1]);
  printf("n=%i\n", n);
  int sum = testalloca(n);
  printf("sum=%i\n", sum);
  return 0;
}
