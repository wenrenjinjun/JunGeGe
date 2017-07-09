/**
 ******************************************************************************
 * @file      main.c
 * @brief     C Source file of main.c.
 * @details   This file including all API functions's 
 *            implement of main.c.	
 *
 * @copyright Copyrigth(C), 2008-2012,Sanxing Electric Co.,Ltd.
 ******************************************************************************
 */

/*-----------------------------------------------------------------------------
 Section: Includes
 ----------------------------------------------------------------------------*/
#include <test.h>
#ifdef __WHITEBOX_TEST
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <CUnit\console.h>
#include <CUnit\Basic.h>
#include <CUnit\Mymem.h>
#include <CUnit\Automated.h>


/*-----------------------------------------------------------------------------
 Section: Type Definitions
 ----------------------------------------------------------------------------*/
#define CONSOLE_MODE	0 	 	//	console控制交互界面模式
#define AUTOMATE_MODE	1 	 	//	自动产生XML文件的模式
#define BASIC_MODE		2 	 	//	基本模式

/*-----------------------------------------------------------------------------
 Section: Constant Definitions
 ----------------------------------------------------------------------------*/
/* NONE */

/*-----------------------------------------------------------------------------
 Section: Global Function Prototypes
 ----------------------------------------------------------------------------*/
/* NONE */

/*-----------------------------------------------------------------------------
 Section: Global Variables
 ----------------------------------------------------------------------------*/
/* NONE */

/*-----------------------------------------------------------------------------
 Section: Local Function Prototypes
 ----------------------------------------------------------------------------*/
/* NONE */

/*-----------------------------------------------------------------------------
 Section: Local Variables
 ----------------------------------------------------------------------------*/
/* NONE */

/*-----------------------------------------------------------------------------
 Section: Function Definitions
 ----------------------------------------------------------------------------*/
int
__do_test_fun(CU_SuiteInfo  suite_info[],
		int mode)
{
//	CU_create_new_registry

    if( CUE_SUCCESS != CU_initialize_registry())//初始化测试簿
    {
        return CU_get_error();
    }
    assert(NULL != CU_get_registry()); 			//返回测试簿指针
    assert(!CU_is_test_running());    			//检测是否在执行

    if(CUE_SUCCESS != CU_register_suites(&suite_info[0]))
    {
        printf("CU_get_error_msg:%s\n", CU_get_error_msg());
        CU_cleanup_registry();
        return CU_get_error();
    }

//    CU_pTestRegistry pTestRegistry =  CU_get_registry();

    switch(mode)			//启动测试
    {
    case CONSOLE_MODE:	 		//	console控制交互界面模式
		CU_console_run_tests();
		break;

    case AUTOMATE_MODE: 	 	//	自动产生XML文件的模式
    	CU_set_output_filename("TestMax");\
    	CU_list_tests_to_file();\
    	CU_automated_run_tests();
    	break;

    case BASIC_MODE	: 	 		//	基本模式
    	CU_basic_set_mode(CU_BRM_VERBOSE);\
    	CU_basic_run_tests();\
    	break;
    }

    CU_cleanup_registry();						//清除注册信息
	return 0;
}
/*----------------------------main.c--------------------------------*/
#endif

    //CUnit框架的一个典型的使用顺序为：
    //1)  为测试编写函数(如果需要的话编写测试包的 init/cleanup 函数).
    //2)  初始化测试注册簿            - CU_initialize_registry()
    //3)  添加测试包到测试注册簿         - CU_add_suite()
    //4)  添加测试用例到的是测试包    - CU_add_test()
    //5)  用适当的接口函数运行测试, 例如. CU_console_run_tests()
    //6)  清理测试注册簿             - CU_cleanup_registry()

    //CU_pTestRegistry CU_get_registry(void)
    //CU_pTestRegistry CU_set_registry(CU_pTestRegistry pTestRegistry)
    //CU_pTestRegistry CU_create_new_registry(void)
    //void                CU_destroy_existing_registry(CU_pTestRegistry* ppRegistry)

