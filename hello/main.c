/*
 * main.c
 *
 *  Created on: 2017年7月5日
 *      Author: JunGeGe
 */

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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

#include "./test.h"

int main(void)
{
	__DO_WHITEBOX_TEST();
	printf("rinixianren");
	return 0;
}


#ifdef __WHITEBOX_TEST
__INIT_SUITE(main)   {return 0;}
__CLEAN_SUITE(main)  {return 0;}

__IMPLEMENT_TEST(test)
{
    CU_PASS("just for test...");
}

__BEGIN_TESTMAP_OF_SUITE(main)
    __REG_TEST(test)
__END_TESTMAP()
#endif




