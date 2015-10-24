#include <linux/linkage.h>
#include <linux/uaccess.h>
static int result=0;
asmlinkage long sys_get_unique_id(int *uuid)
{
	result++;
	int errno=0;
	errno=put_user(result, uuid);
	return errno ? -EFAULT : 0;
}

