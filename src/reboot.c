#include <stdint.h>

void main(int32_t argc, uint8_t* argv[]) {

  // 'X68' + 4 ... soft reset
  register uint32_t reg_d0 asm ("d0") = 0x58363804;  
  
  asm volatile (
    "trap #10\n"        // trap #10
    :                   // output (&input) operand
    : "r"   (reg_d0)    // input operand
    :                   // clobbered register
  );

}