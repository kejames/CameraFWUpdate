/*
 * Realtek Semiconductor Corp.
 *
 * dlfw.c
 *
 * Copyright (C) 2014      Ming Qian<ming_qian@realsil.com.cn>
 */
#include <stdio.h>
#include <stdlib.h>
#include "dlfw.h"

int main(int argc, char *argv[])
{
	uint16_t vid;
	uint16_t pid;
	char *fw;

	if (argc < 4) {
		fprintf(stderr, "need argument: <vid> <pid> <fw>\n");
		return -1;
	}

	vid = (uint16_t)strtol(argv[1], NULL, 0);
	pid = (uint16_t)strtol(argv[2], NULL, 0);
	fw = argv[3];

	if (vid && pid)
		rts_set_vid_pid(vid, pid);

	return rts_download_fw(fw, 0, 0);
}
