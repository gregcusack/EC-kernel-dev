#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Greg Cusack");
MODULE_DESCRIPTION("Greg's first linux module");
MODULE_VERSION("0.01");

static int __init test_mod_init(void) {
	printk(KERN_ALERT "Hello world it's Greg Cusack!\n");
	return 0;
}

static void __exit test_mod_exit(void) {
	printk(KERN_ALERT "Goodbye world!  Greg is gone\n");
}

module_init(test_mod_init);
module_exit(test_mod_exit);
