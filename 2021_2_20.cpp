
#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>//C++��IO���ƣ�iostream��׼��
#include <stdio.h>
int main()
{
	std::cout << "hello world!" <<std::endl;
    std::cout << "�������������֣�" << std::endl;
	float a = 0;
	float b = 0;
	std::cin >> a >> b;
	std::cout << "�����ĺ��� " << a+b << std::endl;
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
	while (std::cin>>a)  //�����������״̬����Ч�Ļ��ͼ������룬��Ч�Ļ���ֱ���������
	{
		sum = sum + a;
	}
	std::cout << sum << std::endl;
	return 0;
}

1-100�ڵ���������
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

 nԪ�� 1 2 5 3����Ǯ���Էֳɼ������

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
					printf("һԪ��%d ��Ԫ :%d ��Ԫ: %d\n", i, j, m);
					sum++;
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}




�����������һ����ֵ����ֵ�����˼��Σ������б׶�

int main()
{
	int cur = 0;
	int val = 0;
	if (std::cin >> cur)  //�������������һ�������ж�Ϊ���ܹ��������ѭ������
	{
		int cou = 1;
		while (std::cin >> val)
        //�����￪ʼ����һ����˳������֣��������ν����жϵģ�������һ����ȱ��
        //�������������ʱ�򣬾Ͳ����ˣ���Ѱ����
		{
			if (val == cur)
			{
				++cou;
			}
			else
			{
				std::cout << cur << "������" << cou << "��" << std::endl;
				cou = 1;
				cur = val;
			}
		}
		std::cout << cur << "������" << cou << "��" << std::endl;//������ʾ����
	}
	return 0;
}



���ĳ�����������������
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book;
    std::cin >> book;
	std::cout << book << std::endl;
	return 0;
}

��Ա�����Ľ���
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

 //������
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



