#include <stdio.h>
int main() {
  int i, n;
  int f = 0, s = 1;
  int nextTerm = f + s;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", f, s);
  for (i = 0; i<10; i++) {
    printf("%d, ", nextTerm);
    f = s;
    s = nextTerm;
    nextTerm = f + s;
  }

  return 0;
}
