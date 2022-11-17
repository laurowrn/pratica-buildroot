obj-m := khello.o
LOCAL_DIR := $(PWD)
KDIR := $(LOCAL_DIR)/../../output/build/linux-custom
COMPILER := $(LOCAL_DIR)/../../output/host/bin/arm-buildroot-linux-uclibcgnueabihf-

all:
	$(MAKE) ARCH=arm CROSS_COMPILE=$(COMPILER) -C $(KDIR) M=$$PWD
	$(MAKE) ARCH=arm CROSS_COMPILE=$(COMPILER) -C $(KDIR) M=$$PWD modules_install INSTALL_MOD_PATH=../../target

clean:
	rm -f *.o *.ko .*.cmd
	rm -f modules.order
	rm -f Module.symvers
	rm -f khello.mod.c
