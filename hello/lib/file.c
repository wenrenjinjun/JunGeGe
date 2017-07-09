/*
 * file.c
 *
 *  Created on: 2017年7月10日
 *      Author: JunGeGe
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void  create_file(char *filename)
{
    /*创建的文件具有可读可写的属性*/
    if(creat(filename,0666)<0)
	{
        printf("create file %s failure!\n",filename);
        exit(EXIT_FAILURE);
    }
	else
	{
        printf("create file %s success!\n",filename);
    }
}
