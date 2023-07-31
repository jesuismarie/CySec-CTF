#include <stdio.h>
#include <stdlib.h>

void gadget() {
  asm("pop %rbp");
  asm("push %rdi");
  asm("pop %rdi");
  asm("ret");
}

int main(int argc, char **argv[]) {
  gadget();
  char buf[32];
  printf("Hello!\n");
  gets(buf);
}
