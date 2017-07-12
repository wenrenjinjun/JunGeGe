CONFIG_DM9000_NO_SROM=y
CONFIG_CMD_FAT=y
CONFIG_USB_OHCI=y
CONFIG_BOOTM_NETBSD=y
CONFIG_HARD_I2C=y
CONFIG_JFFS2_PART_SIZE="0x480000"
CONFIG_SYS_CLK_FREQ=12000000
CONFIG_CMD_ITEST=y
CONFIG_RTC_S3C24X0=y
CONFIG_CMD_EDITENV=y
CONFIG_SYS_MAX_NAND_DEVICE=y
CONFIG_MTD_NAND_VERIFY_WRITE=y
CONFIG_SYS_GBL_DATA_SIZE=128
CONFIG_SYS_LONGHELP=y
CONFIG_DM9000_USE_16BIT=y
CONFIG_SYS_LOAD_ADDR="0x30008000"
CONFIG_CMD_XIMG=y
CONFIG_CMD_CACHE=y
CONFIG_STACKSIZE="(128*1024)"
CONFIG_BOOTDELAY=y
CONFIG_SYS_NAND_BASE="0x4E000000"
CONFIG_SYS_EEPROM_PAGE_WRITE_BITS=4
CONFIG_NR_DRAM_BANKS=y
CONFIG_BOOTM_RTEMS=y
CONFIG_SYS_CBSIZE=256
CONFIG_STACKSIZE_FIQ="(4*1024)"
CONFIG_ETHADDR="08:08:11:18:12:27"
CONFIG_MD5=y
CONFIG_BOOTM_LINUX=y
CONFIG_CMD_CONSOLE=y
CONFIG_SYS_EEPROM_PAGE_WRITE_ENABLE=y
CONFIG_GATEWAYIP="192.168.0.1"
CONFIG_DRIVER_DM9000=y
CONFIG_CMD_REGINFO=y
CONFIG_MMC=y
CONFIG_DRIVER_S3C24X0_I2C=y
CONFIG_CMD_MISC=y
CONFIG_FIT=y
CONFIG_ENV_OFFSET="0X40000"
CONFIG_RELOC_FIXUP_WORKS=y
CONFIG_ENV_OVERWRITE=y
CONFIG_CMD_NET=y
CONFIG_CMD_NFS=y
CONFIG_USE_IRQ=y
CONFIG_ENV_SIZE="0x20000"
CONFIG_CMD_JFFS2=y
CONFIG_CMD_PING=y
CONFIG_S3C2410_NAND_SKIP_BAD=y
CONFIG_SYS_MALLOC_LEN="(CONFIG_ENV_SIZE + 128*1024)"
CONFIG_INITRD_TAG=y
CONFIG_SYS_I2C_SPEED=100000
CONFIG_NAND_S3C2410=y
CONFIG_CMD_FLASH=y
CONFIG_CMD_SAVEENV=y
CONFIG_SYS_BARGSIZE="CONFIG_SYS_CBSIZE"
CONFIG_CMD_NAND=y
CONFIG_ENV_ADDR="(CONFIG_SYS_FLASH_BASE + CONFIG_ENV_OFFSET)"
CONFIG_USB_DEVICE=y
CONFIG_S3C2440=y
CONFIG_BOOTARGS="noinitrd root=/dev/mtdblock3 console=ttySAC0 init=/linuxrc"
CONFIG_CMD_MEMORY=y
CONFIG_SYS_MAXARGS=16
CONFIG_CMD_RUN=y
CONFIG_IPADDR="192.168.0.230"
CONFIG_SYS_PBSIZE="(CONFIG_SYS_CBSIZE+sizeof(CONFIG_SYS_PROMPT)+16)"
CONFIG_BOOTP_HOSTNAME=y
CONFIG_BOARDDIR="board/tekkamanninja/mini2440"
CONFIG_OF_LIBFDT=y
CONFIG_SYS_I2C_EEPROM_ADDR_OVERFLOW="0x07"
CONFIG_SUPPORT_VFAT=y
CONFIG_OVERWRITE_ETHADDR_ONCE=y
CONFIG_CMDLINE_EDITING=y
CONFIG_CMD_USB=y
CONFIG_BOOTCOMMAND="nand read.i 0x30008000 60000 500000;bootm"
CONFIG_MINI2440=y
CONFIG_CMD_SETGETDCR=y
CONFIG_NET_RETRY_COUNT=20
CONFIG_CMD_EEPROM=y
CONFIG_MMC_S3C=y
CONFIG_JFFS2_PART_OFFSET="0x80000"
CONFIG_ZLIB=y
CONFIG_S3C24X0=y
CONFIG_SST_VF1601=y
CONFIG_SYS_FLASH_WRITE_TOUT="(5*CONFIG_SYS_HZ)"
CONFIG_BOOTP_BOOTFILESIZE=y
CONFIG_CMD_BOOTD=y
CONFIG_NET_MULTI=y
CONFIG_AUTO_COMPLETE=y
CONFIG_SYS_HZ=1000
CONFIG_DOS_PARTITION=y
CONFIG_GZIP=y
CONFIG_SYS_EEPROM_PAGE_WRITE_DELAY_MS=10
CONFIG_CMD_FPGA=y
CONFIG_SYS_BAUDRATE_TABLE="{ 9600, 19200, 38400, 57600, 115200 }"
CONFIG_CMD_ECHO=y
CONFIG_SYS_HUSH_PARSER=y
CONFIG_JFFS2_DEV="nand0"
CONFIG_CMD_DHCP=y
CONFIG_ENV_IS_IN_NAND=y
CONFIG_SYS_PROMPT_HUSH_PS2="> "
CONFIG_BOOTP_GATEWAY=y
CONFIG_EXTRA_ENV_SETTINGS="stdin=serial\0stdout=serial\0stderr=serial\0"
CONFIG_S3C24X0_SERIAL=y
CONFIG_CMD_ASKENV=y
CONFIG_MINI2440_LED=y
CONFIG_SYS_DEVICE_DEREGISTER=y
CONFIG_BAUDRATE=115200
CONFIG_SYS_I2C_EEPROM_ADDR_LEN=y
CONFIG_NETMASK="255.255.255.0"
CONFIG_CMDLINE_TAG=y
CONFIG_SYS_64BIT_VSPRINTF=y
CONFIG_ARM920T=y
CONFIG_SYS_MEMTEST_END="0x33F00000"
CONFIG_CMD_I2C=y
CONFIG_FIT_VERBOSE=y
CONFIG_CMD_ELF=y
CONFIG_CMD_DATE=y
CONFIG_JFFS2_CMDLINE=y
CONFIG_SYS_DEF_EEPROM_ADDR="CONFIG_SYS_I2C_EEPROM_ADDR"
CONFIG_SYS_FLASH_BASE="PHYS_FLASH_1"
CONFIG_SYS_I2C_SLAVE="0x7F"
CONFIG_SYS_MAX_FLASH_BANKS=y
CONFIG_CMD_IMLS=y
CONFIG_CMD_SOURCE=y
CONFIG_SYS_PROMPT="[u-boot@MINI2440]# "
CONFIG_BOOTP_BOOTPATH=y
CONFIG_USB_STORAGE=y
CONFIG_DM9000_BASE="0x20000300"
CONFIG_SHA1=y
CONFIG_SETUP_MEMORY_TAGS=y
CONFIG_SERIAL1=y
CONFIG_SYS_I2C_EEPROM_ADDR="0x50"
CONFIG_SYS_MEMTEST_START="0x30000000"
CONFIG_CMD_LOADB=y
CONFIG_CMD_LOADS=y
CONFIG_CMD_IMI=y
CONFIG_SYS_MAX_FLASH_SECT="(32)"
CONFIG_CMD_BDI=y
CONFIG_SERVERIP="192.168.0.1"
CONFIG_JFFS2_NAND=y
CONFIG_SYS_FLASH_ERASE_TOUT="(5*CONFIG_SYS_HZ)"
CONFIG_CMD_MMC=y
CONFIG_STACKSIZE_IRQ="(4*1024)"
