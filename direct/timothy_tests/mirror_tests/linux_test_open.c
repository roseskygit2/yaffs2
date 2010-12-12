/*
 * YAFFS: Yet another FFS. A NAND-flash specific file system.
 *
 * Copyright (C) 2002-2010 Aleph One Ltd.
 *   for Toby Churchill Ltd and Brightstar Engineering
 *
 * Created by Timothy Manning <timothy@yaffs.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include "linux_test_open.h"

int linux_test_open(arg_temp *args_struct)
{
	char path[200];
	char message[100];
	join_paths(linux_struct.root_path,args_struct->string1, path );
	sprintf(message,"file path: %s\n",path);	
	print_message(3,message);

	return open(path,args_struct->char1,args_struct->char2);
}