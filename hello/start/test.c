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


/*-----------------------------------------------------------------------------
 Section: Type Definitions
 ----------------------------------------------------------------------------*/
#define CONSOLE_MODE	0 	 	//	console���ƽ�������ģʽ
#define AUTOMATE_MODE	1 	 	//	�Զ�����XML�ļ���ģʽ
#define BASIC_MODE		2 	 	//	����ģʽ

#define TEST_REPORT_MODE BASIC_MODE

#if (TEST_REPORT_MODE == CONSOLE_MODE)
	#define  CU_RUN_TEST() {\
		CU_console_run_tests();\
	}

#elif (TEST_REPORT_MODE == AUTOMATE_MODE)
	#define  CU_RUN_TEST() {\
		CU_set_output_filename("TestMax");\
		CU_list_tests_to_file();\
		CU_automated_run_tests();\
	}

#elif (TEST_REPORT_MODE == BASIC_MODE)
	#define  CU_RUN_TEST() {\
		CU_basic_set_mode(CU_BRM_VERBOSE);\
		CU_basic_run_tests();\
	}
#endif

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
__DECLARE_SUITE(main)

/*-----------------------------------------------------------------------------
 Section: Local Function Prototypes
 ----------------------------------------------------------------------------*/
/* NONE */

/*-----------------------------------------------------------------------------
 Section: Local Variables
 ----------------------------------------------------------------------------*/
__BEGIN_SUITEMAP_OF_TESTBOOK(other)
    __REG_SUITE(main)
__END_SUITEMAP()

/*-----------------------------------------------------------------------------
 Section: Function Definitions
 ----------------------------------------------------------------------------*/
int
__do_test_fun(void)
{
//	CU_create_new_registry

    if( CUE_SUCCESS != CU_initialize_registry())//��ʼ�����Բ�
    {
        return CU_get_error();
    }
    assert(NULL != CU_get_registry()); 			//���ز��Բ�ָ��
    assert(!CU_is_test_running());    			//����Ƿ���ִ��

    if(CUE_SUCCESS != CU_register_suites(__TESTBOOK(other)))
    {
        printf("CU_get_error_msg:%s\n", CU_get_error_msg());
        CU_cleanup_registry();
        return CU_get_error();
    }

//    CU_pTestRegistry pTestRegistry =  CU_get_registry();

    CU_RUN_TEST();								//��������
    CU_cleanup_registry();						//���ע����Ϣ
	return 0;
}
/*----------------------------main.c--------------------------------*/
#endif

    //CUnit��ܵ�һ�����͵�ʹ��˳��Ϊ��
    //1)  Ϊ���Ա�д����(�����Ҫ�Ļ���д���԰��� init/cleanup ����).
    //2)  ��ʼ������ע�Ჾ            - CU_initialize_registry()
    //3)  ��Ӳ��԰�������ע�Ჾ         - CU_add_suite()
    //4)  ��Ӳ������������ǲ��԰�    - CU_add_test()
    //5)  ���ʵ��Ľӿں������в���, ����. CU_console_run_tests()
    //6)  �������ע�Ჾ             - CU_cleanup_registry()

    //CU_pTestRegistry CU_get_registry(void)
    //CU_pTestRegistry CU_set_registry(CU_pTestRegistry pTestRegistry)
    //CU_pTestRegistry CU_create_new_registry(void)
    //void                CU_destroy_existing_registry(CU_pTestRegistry* ppRegistry)

