#include <stdio.h>
#include <stdlib.h>

int main(void) {
  if (puts("Hello, world!\n") == EOF) {
    EXIT_FAILURE;
  };
  return EXIT_SUCCESS;
}
