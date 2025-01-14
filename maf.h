/**
 * @ Author: luoqi
 * @ Create Time: 2024-07-22 15:37
 * @ Modified by: luoqi
 * @ Modified time: 2024-11-15 17:22
 * @ Description:
 */

#ifndef _MAF_H
#define _MAF_H

#ifdef __cplusplus
 extern "C" {
#endif

#include <stdint.h>

typedef struct _lpf_sa
{
    int wsize;
    int head;
    uint8_t isfull;
    float sum;
    float *buf;
} LpfMaf;

void maf_init(LpfMaf *filter, float *buf, int wsize);

float maf_calc(LpfMaf *filter, float uk);

#ifdef __cplusplus
 }
#endif

#endif
