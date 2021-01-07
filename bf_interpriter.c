#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char* filename = argv[1];
  printf(filename);
  printf("\n");
  FILE *fp;
  int pointer[50];
  int point = 0;

  for (int i = 0; i < 20; i++) {
    pointer[i] = 0;
  }
  char ch;

  fp = fopen(filename,"r");

  while ((ch = fgetc(fp)) != EOF) {
    switch (ch) {
      case '>':
        point++;
        break;
      case '<':
        point--;
        break;
      case '+':
        pointer[point] = pointer[point] + 1;
        break;
      case '-':
        pointer[point] = pointer[point] - 1;
        break;
      case '.':
        putchar(pointer[point]);
        break;
      case ',':
        pointer[point] = getchar();
        break;
    }


  }
  fclose(fp);
  return 0;
}
