#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *fp;
  char line[256];
  fp = fopen(argv[1],"r");
  while (fgets(line, 256, fp) != NULL){
    printf("%s", line);
  }
  return 0;
}
