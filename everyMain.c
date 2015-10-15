#include <stdio.h>
#include "everyOther.h"

/* int main(int argc, char** argv) { ---- array of character pointers */
int main(int agrc, char* argv[]) {

 /* char c;
  scanf("%c",&c);
  printf("%c",c);

  c = getchar();
  printf("%c",c); */

  char s[200];
  scanf("%s",s);

  everyOther(s);  
  everyOther(s);
}
