#!/bin/sh

#-include ../makefile.init

do_test:
	@./sh/s6

#RM := del

# All of the sources participating in the build are defined here
-include sources.mk
-include ./start/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
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
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

#-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:mkboot

# Tool invocations
.PHONY:mkboot
mkboot:
	cd boot && make 
#	unconfig  test #mini2440_config  #make -C boot -f Makefile distclean  
	
hello: $(OBJS)
	g++  -o "hello" $(OBJS) $(USER_OBJS) $(LIBS)  
	#make -C start/
	#g++  -o "hello" $(LIBSA) $(LIBS) 
	
	#$(OBJS) $(USER_OBJS)

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(CPP_DEPS)$(C_DEPS) hello.exe
	-@echo ' '

.PHONY: all clean dependents
#.SECONDARY:

#-include ../makefile.targets
	