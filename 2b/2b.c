//NAME:D.JASWANTH REDDY
//ROLL NO:CED17I034

#include<linux/module.h>
#include<linux/kernel.h>

char *name="D.JASWANTH REDDY";

int init_module(void)
{
	printk(KERN_INFO "INSIDE THE INIT FUNCTION");
	printk(KERN_INFO "Q2b HELLO  %s\n",name);
	return 0;
}

void cleanup_module(void){
printk(KERN_INFO "Unregistered the module\n");
}

MODULE_LICENSE("GPL");
