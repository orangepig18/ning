// 数据结构p125第一题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
int strindex(char s[], char t[])
{
	int i, j, k;

	for (i = 0; s[i] != '\n'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\n')
			return i;
	}
	return -1;
}
int main()
{
	char s[] = "I AM A STUDENT";
	char t[] = "GOOD";
	char q[] = "WORKER";
	char r[] = { 'A' };
	char sub1[20];
	char sub2[20];
	strncpy_s(sub1, s, 7);
	strncpy_s(sub2, s+6, 1);
	printf_s("StrLength的结果为:%d\nSubString(sub1)的结果为:%s\nSubString(sub2)的结果为:%s\n", strlen(s),sub1,sub2);
	printf_s("StrIndex的结果为:%d", strindex(s + 4,r ));
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
