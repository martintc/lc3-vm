#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/termios.h>
#include <sys/mman.h>

#define UNIT16_MAX 65536

#define boolean int
#define TRUE 1
#define FALSE 0

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

// condition flags
enum {
  FL_POS = 1 << 0, // positive
  FL_ZRO = 1 << 0, // zero
  FL_NEG = 1 << 2, // negative
};

int main(int argc, char* argv[]) {

  // command line
  if (argc < 2) {
    printf("lc3 [image-file1] .....\n");
  }

  for (int j = 1; j < argc; ++j) {
    if(!read_image(argv[j])) {
      printf("Failed to load the image %s\n", argv[j]);
    }
  }

  // set the starting position
  // 0x3000 is the default
  enum {
    PC_START = 0x3000
  };
  reg[R_PC] = PC_START; // set program counter to starting position

  boolean run = TRUE;
  while (run) {
    uint16_t instr = mem_read(reg[R_PC]++);
    uint16_t op = instr >> 12;

    switch (op) {
    case OP_ADD:
      break;
    case OP_AND:
      break;
    case OP_NOT:
      break;
    case OP_BR:
      break;
    case OP_JMP:
      break;
    case OP_JSR:
      break;
    case OP_LD:
      break;
    case OP_LDI:
      break;
    case OP_LDR:
      break;
    case OP_LEA:
      break;
    case OP_ST:
      break;
    case OP_STI:
      break;
    case OP_STR:
      break;
    case OP_TRAP:
      break;
    case OP_RES:
    case OP_RTI:
    default:
      break;
    }
  }


}
