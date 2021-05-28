MODULES = hello_world_driver.o

obj-m := $(MODULES)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
