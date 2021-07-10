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

// registers treated as indexes in array
uint16_t reg[R_COUNT];

// opcodes
enum {
  OP_BR=0, // branch
  OP_ADD, // add
  OP_LD, // load
  OP_ST, // store
  OP_JSR, // jump register
  OP_AND, // bitwise and
  OP_LDR, // load register
  OP_STR, // store register
  OP_RTI, // unused
  OP_NOT, // bitwise not
  OP_LDI, // load indirect
  OP_STI, // store indirect
  OP_JMP, // jump
  OP_RES, // reserved (unused)
  OP_LEA, // load effective address
  OP_TRAP // execute trap
};

int main(int argc, char* argv[]) {
  
}
