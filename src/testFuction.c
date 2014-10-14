#include "testFunction.h"

int fib_test(int count)
{
	int result = 1,i = 0;
	int temp = 0;
	for (i = 0; i < count; i++)
	{
		int pre = result;
		result = temp + result;
		temp = pre;
	}
	return result;
}
