#include<stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <assert.h>
#include "u8tou16.h"

int main() {
  assert(bytes2short(0x01, 0x10) == 0x0110); //should pass
  return 0;
}