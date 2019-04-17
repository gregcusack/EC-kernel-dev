#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("greg cusack");
MODULE_DESCRIPTION("A simple linux driver");
MODULE_VERSION("0.1");

static char *name = "world";
module_param(name, charp, S_IRUGO);
MODULE_PARM_DESC(name, "The name to display in /var/log/kern.log");

//initialization function
static int __init helloworld_init(void) {
	printk(KERN_ALERT "hello %s from the Kernel module!\n", name);
	return 0;
}

//clean up function
static void __exit helloworld_exit(void) {
	printk(KERN_ALERT "byyeeeeeee %s from the kernel\n", name);
}

module_init(helloworld_init);
module_exit(helloworld_exit);
