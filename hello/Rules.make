# -*-makefile-*-
#
# 各个应用程序的makefile 的通用定义
#
# TOPDIR is declared by the Makefile including this file.
ifndef TOPDIR
	TOPDIR = .
endif

ifndef BINDIR
	BINDIR = $(TOPDIR)/bin
endif

ifndef LIBDIR
	LIBDIR = $(TOPDIR)/bin/lib
endif

ifndef COMPILEDIR
    COMPILEDIR = $(TOPDIR)/Output
endif

# KERNELDIR can be speficied on the command line or environment
ifndef KERNELDIR
	#KERNELDIR = /home/Robin/9260/9260ek/buildroot0427/buildroot/project_build_arm/at91sam9260dfc/linux-2.6.22.1
	KERNELDIR = /opt/sx/buildroot-2011.02/output/build/linux-2.6.37.2
endif
# The headers are taken from the kernel
	INCLUDEDIR = $(KERNELDIR)/include


ifndef CROSS_COMPILE
	#CROSS_COMPILE= /home/robin/buildroot/buildroot-2011.02/output/host/usr/bin/arm-linux-
	#CROSS_COMPILE= arm-linux-
	#CROSS_COMPILE= arm-none-linux-gnueabi-
#	CROSS_COMPILE= arm-softfloat-linux-gnu-
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

# CFLAGS: all assignments to CFLAGS are inclremental, so you can specify
# the initial flags on the command line or environment, if needed. -std=gnu99 

	CFLAGS +=  -I$(TOPDIR)/include -I$(TOPDIR)/Library  -O2 -Wall -Wno-psabi -Wno-write-strings 
#CCFLAGS = -std=gnu99 -O2 -Wall

CFLAGS += -lpthread  
LDFLAGS = -L/$(LIBDIR)  
#-lmysqlite -lsqlite3 -lm -ldatacenter -lcomm -llibrary -lupprotocol -lDownProtocol -ltimer  -lapplication

