#include <stdio.h>
#include <stdlib.h>
#include "lib/testpe.h"

void err(char *msg) {
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

int main(int argc, char *argv[]) {
  PEFILE pe;

  if (argc != 2)
    err("Error! Pass an .exe file to be read.");
  
  pe.filepath = argv[1];
  testpe_init(&pe);

  if (!testpe_ispe)
    err("Error! Pass an .exe file.");
  
  printf("File: %s\n", pe.filepath);
  printf("MZ: %x\n", pe.hdr_dos->e_magic);
  printf("COFF header offset: %x\n", pe.hdr_dos->e_lfanew);

  return 0;

}
