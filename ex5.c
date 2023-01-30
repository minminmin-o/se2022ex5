#include <stdio.h>
#include <string.h>

int main(void) {
  printf("hello\n");
  char str[] = "hello";
  printf("%s :%d", str, strlen(str));
}