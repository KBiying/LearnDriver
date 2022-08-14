#include <linux/module.h>
#include <linux/init.h>

/* Meta infomation */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("johannes 4 GNU/linux");
MODULE_DESCRIPTION("a hello world LKM");

/**
 * @brief This function is called, when the module id loaded into the kernel
 */
static int __init ModuleInit(void){
	printk("Hello Kernel\n");
	return 0;

}

/**
 * @brief This function id called, when the module is removed from the kernel
 */
static void __exit ModuleExit(void){
	printk("Bye Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
