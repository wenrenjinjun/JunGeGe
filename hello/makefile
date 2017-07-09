#!/bin/sh

#-include ../makefile.init
#-include ./rules.make

ifndef CROSS_COMPILE
	CROSS_COMPILE= C:/Path/MinGW/bin/
endif

# This is useful if cross-compiling. Taken from kernel Makefile (CC changed)
AS      =$(CROSS_COMPILE)as
LD      =$(CROSS_COMPILE)ld
CC      =$(CROSS_COMPILE)gcc
CPP     =$(CROSS_COMPILE)g++
AR      =$(CROSS_COMPILE)ar
NM      =$(CROSS_COMPILE)nm
STRIP   =$(CROSS_COMPILE)strip
OBJCOPY =$(CROSS_COMPILE)objcopy
OBJDUMP =$(CROSS_COMPILE)objdump

do_test:
	@./sh/s6

#RM := del

# All of the sources participating in the build are defined here
#-include sources.mk
#-include subdir.mk
#-include objects.mk

#ifneq ($(MAKECMDGOALS),clean)
#ifneq ($(strip $(CC_DEPS)),)
#-include $(CC_DEPS)
#endif
#ifneq ($(strip $(C++_DEPS)),)
#-include $(C++_DEPS)
#endif
#ifneq ($(strip $(C_UPPER_DEPS)),)
#-include $(C_UPPER_DEPS)
#endif
#ifneq ($(strip $(CXX_DEPS)),)
#-include $(CXX_DEPS)
#endif
#ifneq ($(strip $(CPP_DEPS)),)
#-include $(CPP_DEPS)
#endif
#ifneq ($(strip $(C_DEPS)),)
#-include $(C_DEPS)
#endif
#endif

#-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target

#USER_OBJS :=

#LIBS :=    -lCUnit

#C_UPPER_SRCS := 
#CXX_SRCS := 
#C++_SRCS := 
#OBJ_SRCS := 
#CC_SRCS := 
#ASM_SRCS := 
#CPP_SRCS := 
#C_SRCS := 
#S_UPPER_SRCS := 
#O_SRCS := 
#CC_DEPS := 
#C++_DEPS := 
#EXECUTABLES := 
#OBJS := 
#C_UPPER_DEPS := 
#CXX_DEPS := 
#CPP_DEPS := 
#C_DEPS := 

# Every subdirectory with source files must be described here
#SUBDIRS := \
#. \

#C_SRCS += \
#../main.c ../test.c 

OBJS += \
./main.o ./test.o 

C_DEPS += \
./main.d ./test.d  

# Each subdirectory must supply rules for building sources it contributes
#%.o: ../%.c
#	@echo 'Building file: $<'
	#@echo '***************************************************************************'
#	gcc -52424 -O2 -g -Wall -c -fmessage-length=0  -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	#@echo 'Finished building: $<'
#	@echo ' '


%.o: ../%.c
	gcc -D__WHITEBOX_TEST -O2 -g -Wall -c -fmessage-length=0  -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	
all: hello
# Tool invocations
hello:  main.o test.o
	g++  -o "hello" main.o test.o    -lCUnit


#$(OBJS) $(USER_OBJS) $(LIBS) 
	

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(CPP_DEPS)$(C_DEPS) hello.exe
	-@echo ' '

.PHONY: all clean dependents
#.SECONDARY:

#-include ../makefile.targets
	