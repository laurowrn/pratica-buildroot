#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89939d1e, "module_layout" },
	{ 0x8d8b4e2, "class_unregister" },
	{ 0xf0a72774, "device_destroy" },
	{ 0xcbc426b, "class_destroy" },
	{ 0x84bd6690, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x98e40b5f, "__class_create" },
	{ 0xc2316e93, "__register_chrdev" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x97255bdf, "strlen" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x6c953f92, "kmem_cache_alloc_trace" },
	{ 0x628db1b0, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "286D4938A25C4AFD73D5BB4");
