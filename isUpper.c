#include "isUpper.h"

int isUpper(char c) {
  if (c >= 'A' && c<= 'Z')
    return 1;
  return 0; /* If an uppercase, return true (1). Otherwise, return false (0) */
}
