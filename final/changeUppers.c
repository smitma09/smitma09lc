#include <stdio.h>
#include "isUpper.h"

int main(int argc, char* argv[]) {
  char c;

  while ((c=getchar()) != EOF) {
    if (isUpper(c)) {
      c = c + 32;
    }
    printf("%c",c);

  } /* end while loop */

return 0;

}
