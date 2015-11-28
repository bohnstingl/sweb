#include "stdlib.h"

void __attribute__((naked)) __syscall()
{
  asm("ldr r4, [sp, #0]\n"
      "ldr r5, [sp, #4]\n"
      "push {r6,r7}\n"
      "ldr r6, [fp, #-12]\n"
      "ldr r7, [fp, #-8]\n"
      "svc 0\n"
      "pop {r6,r7}\n"
      "bx lr");
}

void abort()
{
  exit(-127);
}

void raise()
{
  exit(-127);
}

void __write()
{
  exit(-127);
}

void stderr()
{
  exit(-127);
}

void fflush()
{
  exit(-127);
}

void __fprintf_chk()
{
  exit(-127);
}

void __aeabi_unwind_cpp_pr0()
{
  exit(-127);
}
