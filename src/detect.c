/* getenv example: getting path */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* getenv */

int main () {
  char* pPath;
  pPath = getenv ("XDG_CURRENT_DESKTOP");

  if (pPath!=NULL) {
    printf ("%s", pPath);
  }

  return 0;
}
