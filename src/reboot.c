#include <stdint.h>
#include <string.h>

void main(int32_t argc, uint8_t* argv[]) {

  register uint32_t reg_d0 asm ("d0") = 0x58363804;   // 'X68' + 4 ... soft reset
  
  asm volatile (
    "trap #10\n"         // trap #2
    :                   // output (&input) operand
    : "r"   (reg_d0)    // input operand
    :                   // clobbered register
  );

}