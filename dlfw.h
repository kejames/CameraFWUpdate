/*
 * Realtek Semiconductor Corp.
 *
 * utils/rts_utils.c
 *
 * Copyright (C) 2014      Ming Qian<ming_qian@realsil.com.cn>
 */


#ifndef _DLFW_H
#define _DLFW_H

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

int print_librtsuvc_version(void);

int rts_dlfw_by_vidpid(char *filename, uint32_t vid, uint32_t pid, uint32_t skip_addr, uint32_t skip_length);

#ifdef __cplusplus
}
#endif

#endif
