#include <stdio.h>
#include <stdlib.h>

void err(char *msg) {
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

int main(int argc, char *argv[]) {
  FILE *fh;
  unsigned char buffer[32];

  if (argc != 2)
    err("Error! Pass an .exe file to be read.");

  fh = fopen(argv[1], "rb");

  if (fh == NULL)
    err("Error! File not found or cannot be read.");

  if (fread(buffer, 32, 1, fh) != 1)
    err("Error! I was unable to read the 32 bytes of the file.");

  return 0;

}
