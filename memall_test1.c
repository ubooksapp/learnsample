#include <stdio.h>

char* toStr1(){
	//char str[] 为局部字符数组，它是一个局部变量，函数调用完毕后，此数组空间被释放，所以返回的是一块已经释放的内存空间的地址
	char str[] = "this is a test";
	return str;
};

char* toStr2(){
	//char *str 也是一个局部变量，但是由于返回的是字符串常量的地址，这种字符串常量是属于全局的，要到程序退出的时候才会被销毁，所以返回它的地址是没有问题的
	char *str = "this is a test";
	return str;
}

int main() {
	printf("output str1 = %s\n", toStr1());
	printf("output str2 = %s\n", toStr2()); 
	return 0;
}



