################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
#C_SRCS += \
../start/main.c \
../start/test.c 

OBJS += \
./start/main.o \
./start/test.o 

C_DEPS += \
./start/main.d \
./start/test.d  

objects := $(patsubst %.c,%.o,$(wildcard *.c))




# Each subdirectory must supply rules for building sources it contributes
%.o:%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D__WHITEBOX_TEST -I"C:\Users\JunGeGe\Documents\GitHub\JunGeGe\hello\inc" -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


