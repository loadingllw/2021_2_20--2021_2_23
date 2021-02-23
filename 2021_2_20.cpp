
#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>//C++的IO机制，iostream标准库
#include <stdio.h>
int main()
{
	std::cout << "hello world!" <<std::endl;
    std::cout << "请输入两个数字：" << std::endl;
	float a = 0;
	float b = 0;
	std::cin >> a >> b;
	std::cout << "两数的和是 " << a+b << std::endl;
    return 0;
}

int main()
{

	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << a*b << std::endl;
	return 0;
}


int main()
{
	//std::cout << "/*";
	std::cout << /*"*/"/*"/*"*/;
	return 0;
}


int main()
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	while (a <= b)
	{
		std::cout << a << " ";
		a++;
	}
	return 0;
}


int main()
{
	int i = 0;
	int sum = 0;
	for (i = -100; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << sum<<std::endl;
	return 0;
}


int main()
{
	int sum = 0;
	int a = 0;
	while (std::cin>>a)  //检查输入流的状态，有效的话就继续输入，无效的话就直接条件变假
	{
		sum = sum + a;
	}
	std::cout << sum << std::endl;
	return 0;
}

1-100内的所有素数
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
	return 0;
}

 n元被 1 2 5 3种零钱可以分成几种情况

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int m = 0;
	int sum = 0;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n / 2; j++)
		{
			for (m = 0; m <= n / 5; m++)
			{
				if (n == i + 2 * j + m * 5)
				{
					printf("一元：%d 两元 :%d 五元: %d\n", i, j, m);
					sum++;
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}




这个用来计算一行数值中数值出现了几次，但是有弊端

int main()
{
	int cur = 0;
	int val = 0;
	if (std::cin >> cur)  //这个是用来输入一个数字判断为真能够让下面的循环进行
	{
		int cou = 1;
		while (std::cin >> val)
        //从这里开始输入一行有顺序的数字，它是依次进行判断的，所以有一定的缺陷
        //当数字是无序的时候，就不行了，另寻他法
		{
			if (val == cur)
			{
				++cou;
			}
			else
			{
				std::cout << cur << "出现了" << cou << "次" << std::endl;
				cou = 1;
				cur = val;
			}
		}
		std::cout << cur << "出现了" << cou << "次" << std::endl;//用来表示结束
	}
	return 0;
}



书店的程序，用来介绍类类型
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book;
    std::cin >> book;
	std::cout << book << std::endl;
	return 0;
}

成员函数的介绍
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.same_isbn(item2))
	{
		std::cout << item1 + item2 << std::endl;
		return 0;                                                                                                                                                                                   
	}
	else
	{
		std::cout << "Data refers other ISBN" << std::endl;
		return -1;
	}
}

 //书店程序
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item total;
	if (std::cin >> total)
	{
		Sales_item trans;
		while (std::cin >> trans)
		{
			if (total.same_isbn(trans))
			{
				total += trans;
			}
			else
			{
				std::cout << total << std::endl;
				total = trans;
			}
		}
	}
	else
	{
		std::cerr << "No dats!" << std::endl;
		return -1;
	}
	return 0;

}



