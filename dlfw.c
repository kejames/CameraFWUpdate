/*
 * Realtek Semiconductor Corp.
 *
 * utils/rts_utils.c
 *
 * Copyright (C) 2014      Ming Qian<ming_qian@realsil.com.cn>
 */

#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>
#include "dlfw.h"

int main(int argc, char *argv[])
{
	int c;	
	char *file_name;
	int vid;
	int pid;
	int ret;

	if (argc < 4) {
		fprintf(stderr, "need argument: <file_name> \n");
		return -1;
	}

	file_name = argv[1];
	vid = (int)strtol(argv[2], NULL, 0);
	pid = (int)strtol(argv[3], NULL, 0);

	print_librtsuvc_version();

	ret = rts_dlfw_by_vidpid(file_name, vid, pid, 0, 0);
	if (ret < 0)
		fprintf(stderr, "download fail \n");
	return ret;
}


