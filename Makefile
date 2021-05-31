MODULES = hello_world_driver.o

obj-m := $(MODULES)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

install:
	insmod hello_world_driver.ko

uninstall:
	rmmod hello_world_driver

clean:
	rm ./*.ko ./*.mod* ./*.o
