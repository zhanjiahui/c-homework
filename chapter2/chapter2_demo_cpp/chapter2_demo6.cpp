#include <iostream>
#include <iomanip>

using namespace std;                         //ʹ��C++�ı�׼���ֿռ�

int sum = 5000; 		                    //����ȫ�ֱ���sum 

int main()
{
	int arr[3] = { 10,20,30 };
	{                                       //һ��С�����Ŀ�ʼ
		int i, sum = 0;                     //����ֲ�����sum               
		for (i = 0; i < 3; i++)
		{
			sum += arr[i];                  //��ͣ�������ھֲ�����sum��
		}
		cout << "sum=" << sum << endl;       //����ֲ�����sum��ֵ 
		::sum += sum;	                     //ͨ�����������ͬ���ֲ��������������ڶ�ȫ��sum����
		cout << "ȫ��sum=" << ::sum << endl;  //���ȫ��sum������ֵ
	}                                        //С�����Ľ���

	sum *= 2;                                //����ȫ��sum,��Ϊ�ֲ�����sum���������ѽ��� 
	cout << "sum=" << sum << endl;           //���ȫ��sum������ֵ

	int sum = 200;                        //������һ���ֲ�����sum   	
	cout << "sum=" << sum << endl;           //����ն���ľֲ�����sum��ֵ 
	::sum += sum;           	          //ͨ���������ʹȫ��sum��ͬ���ֲ�sum��������ɼ�	

	cout << "ȫ��sum=" << ::sum << endl;     //���ȫ��sum������ֵ
	getchar();
	return 0;
}