#ifndef LC3_UTIL_H
#define LC3_UTIL_H

#include <stdint.h>

// sign extending for 5 bit immediates to 16 bit numbers
// preserving sign
uint16_t sign_extend(uint16_t x, int bit_count);



#endif
