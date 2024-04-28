#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init gpio_driver_init(void)
{
	printk("Hola ! Welcome to First Driver\n");
	return 0;
}

static void __exit gpio_driver_exit(void)
{
	printk("Adios Amigo\n");
	return;
}

module_init(gpio_driver_init);
module_exit(gpio_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DARSHILLL");
MODULE_DESCRIPTION("TEST OF WRITING DRIVERS");
MODULE_VERSION("1.0");
       	
