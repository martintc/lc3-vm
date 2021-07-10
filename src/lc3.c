#include <stdio.h>
#include <stdlib.h>

#define UNIT16_MAX 65536

// total memory availiable to the virtual system
uint16_t memory[UNIT16_MAX];

// registers in the virtual system
enum {
  R_R0 = 0,
  R_R1,
  R_R2,
  R_R3,
  R_R4,
  R_R5,
  R_R6,
  R_R7,
  R_PC, // program counter
  R_COND, // condition register
  R_COUNT
};

int main(int argc, char* argv[]) {
  
}
