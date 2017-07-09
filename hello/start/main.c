/*
 * main.c
 *
 *  Created on: 2017Äê7ÔÂ5ÈÕ
 *      Author: JunGeGe
 */

#include <stdio.h>


#include <test.h>

#ifdef __WHITEBOX_TEST
__DECLARE_SUITE(main)
__BEGIN_SUITEMAP_OF_TESTBOOK(other)
    __REG_SUITE(main)
__END_SUITEMAP()
#endif

int main(void)
{
	__DO_WHITEBOX_TEST(__TESTBOOK(other), 2);
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




