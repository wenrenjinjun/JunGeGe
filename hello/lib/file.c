/*
 * file.c
 *
 *  Created on: 2017��7��10��
 *      Author: JunGeGe
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void  create_file(char *filename)
{
    /*�������ļ����пɶ���д������*/
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
