#include <iostream>
using namespace std;

//쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n��.
int Fibonacci1(int n)//쳲���������
{
	//�������飬����״ֵ̬
	int* fi = new int[n + 1];
	//��ʼ������
	fi[0] = 0;
	fi[1] = fi[2] = 1;
	//ѭ����������
	for (int i = 2; i <= n; i++)
	{
		fi[i] = fi[i - 1] + fi[i - 2];
	}

	return fi[n];
}

int Fibonacci2(int n)//쳲���������
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;

	int fn = 0;
	int fn1 = 0, fn2 = 1;

	for (int i = 2; i <= n; i++)
	{
		fn = fn1 + fn2;
		fn1 = fn2;
		fn2 = fn;
	}

	return fn;
}

//һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж���������
//�����������һ��̨�ף�����̨���Ƿ�����ȥ��ֻ�����п��ܣ�����ȥ���߲�����ȥ��2������������ѡ��Ϊ2^n
int jumpFloorII1(int number)
{
	return 1 << (number - 1);
}

int jumpFloorII2(int number)
{
	int sum = 1;
	for (int i = 1; i < number; i++)
	{
		sum *= 2;
	}
	return sum;
}

int main()
{
	int n;
	while (cin >> n)
	{
		int cur = jumpFloorII2(n);
		cout << cur << endl;

	}
	

	system("pause");
	return 0;
}