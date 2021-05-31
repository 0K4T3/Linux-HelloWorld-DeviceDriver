#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/cdev.h>
#include <linux/fs.h>

static __init int hello_world_driver_init(void);
static __exit void hello_world_driver_exit(void);
int hello_world_driver_open(struct inode *inode, struct file *filp);
int hello_world_driver_close(struct inode *inode, struct file *filp);

module_init(hello_world_driver_init);
module_exit(hello_world_driver_exit);
MODULE_LICENSE("GPL2");

static int __init hello_world_driver_init(void) {
  printk(KERN_DEBUG, "load hello world driver\n");
  printk(KERN_DEBUG, "Hello World!\n");
  return 0;
}

static void __exit hello_world_driver_exit(void) {
  printk(KERN_DEBUG, "unload hello world driver\n");
}


int hello_world_driver_open(struct inode *inode, struct file *filp) {
  printk(KERN_DEBUG, "open hello world dvier\n");
  return 0;
}

int hello_world_driver_close(struct inode *inode, struct file *filp) {
  printk(KERN_DEBUG, "close hello world dvier\n");
  return 0;
}
