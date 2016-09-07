#include <stdio.h>               /* 编译预处理命令 */
int factorial(int n);            /* 函数声明 */
int main(void)                   /* 主函数 */
{
	int n;                       /* 定义变量 */
	scanf("%d", &n);             /* 输入一个整数 */
	printf("%d\n", factorial(n));/* 调用函数计算阶乘并输出 */
	return 0;
}

int factorial(int n)             /* 定义计算n!的函数 */
{
	int i, fact = 1;
	for(i = 1; i <= n; i++) 
		fact = fact * i;
	return fact;
}
