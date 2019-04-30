#include <linux/init.h>  
#include <linux/kernel.h> 
#include <linux/module.h>

/*For making the kernel object : "make -C /lib/modules/$(uname -r)/build M=$(pwd) modules" */
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");

static int __init loaded(void){
   printk(KERN_INFO "I am loaded\n");
   return 0;
}

static void __exit unloaded(void){
   printk(KERN_INFO "Bye, I am unloaded\n");
}

module_init(loaded);
module_exit(unloaded);