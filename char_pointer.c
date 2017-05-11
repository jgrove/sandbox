#include <stdio.h>
#define MAX 20

int main(void)
{
  char *pc, line[MAX];
  int len;
  fgets(line, sizeof(line), stdin); /* get a line */
  pc = line; /* pc points to line[0] */
  len = 0;
  while (*pc != '\0') { /* end of string? */
    len++; /* NO */
    pc++;
  } /* YES */
  printf("%d is length of %s\n", len, line);

}
