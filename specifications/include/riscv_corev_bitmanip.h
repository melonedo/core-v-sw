#include <stdint.h>
int32_t __builtin_riscv_cv_bitmanip_extract (int32_t  i, uint16_t range);
uint32_t __builtin_riscv_cv_bitmanip_extractu (uint32_t i, uint16_t range);
uint32_t __builtin_riscv_cv_bitmanip_insert (uint32_t i, uint16_t range, uint32_t  k);
uint32_t __builtin_riscv_cv_bitmanip_bclr (uint32_t i, uint16_t range);
uint32_t __builtin_riscv_cv_bitmanip_bset (uint32_t i, uint16_t range);
uint8_t __builtin_riscv_cv_bitmanip_ff1 (uint32_t i);
uint8_t __builtin_riscv_cv_bitmanip_fl1 (uint32_t i);
uint8_t __builtin_riscv_cv_bitmanip_clb (uint32_t i);
uint8_t __builtin_riscv_cv_bitmanip_cnt (uint32_t i);
uint32_t __builtin_riscv_cv_bitmanip_ror (uint32_t i, uint32_t j);
uint32_t __builtin_riscv_cv_bitmanip_bitrev (uint32_t i, uint8_t pts, uint8_t radix);
