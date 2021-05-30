#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <assert.h>

typedef uint8_t   u8;
typedef uint16_t  u16;

u16 bytes2short(u8 a, u8 b) {
   return ((a<<8) + b);
}

