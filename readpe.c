#include <stdio.h>
#include <stdlib.h>

void err(char *msg) {
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

int main(int argc, char *argv[]) {
  FILE *fh;

  if (argc != 2)
    err("Erro! Passe um arquivo .exe para ser lido.");

  return 0;

}
