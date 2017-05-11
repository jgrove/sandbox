#include <stdio.h>

int main()
{
  char name[10];
  printf("enter your name: ");
  fgets(name,10,stdin);
  printf("hey %s\n",name);
  
  for (int x = 0; x < 10; x++) {
	  printf("%c", name[x]);
  }
  printf("\n");
  return(0);
}
