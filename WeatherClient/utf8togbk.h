#ifndef __UTF8TOGBK_H
#define __UTF8TOGBK_H
#ifdef __cplusplus
extern "C"
{
#endif
#include "string.h"

int SwitchToGbk(const unsigned char* pszBufIn, int nBufInLen, unsigned char* pszBufOut, int* pnBufOutLen);
#ifdef __cplusplus
}
#endif
#endif