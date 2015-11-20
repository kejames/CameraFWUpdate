/*
 * Realtek Semiconductor Corp.
 *
 * dlfw.h
 *
 * Copyright (C) 2014      Ming Qian<ming_qian@realsil.com.cn>
 */
#ifndef _DLFW_H
#define _DLFW_H

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

int rts_set_vid_pid(uint16_t vid, uint16_t pid);
int rts_download_fw(char *fw_name, uint32_t skip_addr, uint32_t skip_length);

#ifdef __cplusplus
}
#endif

#endif
