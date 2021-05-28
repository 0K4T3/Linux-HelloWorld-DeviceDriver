#include <linux/init.h>
#include <linux/module.h>

static int __init hello_world_driver_init(void) {
  printk(KERN_DEBUG, "load driver\n");
  printk(KERN_DEBUG, "Hello World!\n");
  return 0;
}

static void __exit hello_world_driver_exit(void) {
  printk(KERN_DEBUG, "unload driver\n");
}

module_init(hello_world_driver_init);
module_exit(hello_world_driver_exit);
MODULE_LICENSE("Dual BSD/GPL");
