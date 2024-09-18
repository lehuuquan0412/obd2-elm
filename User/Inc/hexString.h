#ifndef __HEX_STRING_H__
#define __HEX_STRING_H__

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

uint8_t hexStringToBytes(char *inhex);

void bytesToHexString(char *bytesin,uint8_t hex);

#endif