//NAME:D.JASWANTH REDDY
//ROLL NO:CED17I034

#include<linux/module.h>
#include<linux/kernel.h>

int num = 0;


module_param(num, int, S_IRUGO);

int init_module(void)
{
	printk(KERN_INFO "INSIDE THE INIT FUNCTION");
	printk(KERN_INFO "Q2a The number given in parameter is %d\n",num);
	return 0;
}

void cleanup_module(void){
printk(KERN_INFO "Unregistered the module\n");
}

MODULE_LICENSE("GPL");
