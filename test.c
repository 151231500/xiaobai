#define _CRT_SECURE_NO_WARNING 1

#include <stdio.h>

int main()//һ��������һ����䣬ֻ�зֺ�Ҳ������䣨����䣩     if������
{
	//int age = 10;//���if
	//if (age < 18)
	//	printf("1");
	//else if (age >= 18 && age < 36)
	//	printf("2");
	//else
	//	print("3");
	//int age = 10;
	//if (age < 18)
	//	printf("weichengnian");
	//else
	//	printf("chengnian");//����ѡ������
	//	int age= 0;
	//if (age < 18)
	//	printf("δ����\n");
	//return   0;//����if���
}

//�ṹ�� ������ʾһ������ĸ������ԣ������Լ����������һ������
//struct Book//�ṹ��
//{
//	char name[20];
//	short price;
//
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	printf("%s\n", (*pb).name);
//	printf("%s\n", pb->name);
//	/*printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 30;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//		return 0;*/
//}

//int main()//ָ��������֪ʶ ����1���ڴ棺���ó���ʱ��Ҫ���ڴ�ռ���ã�Ϊ�˸��Ӻ���ĵ��ã�����ѡ���ڴ水���ֽ�Ϊ��λ���л��֣�ÿ���ֽڶ�����һ����ַ����
//������һ����������&+�������Ա�ʾ���ַ����������+*���Եõ����ĵ�ַ
//{
//
//	double b = 3.14;
//	double* pd = &b;
//	*pd = 5.5;
//	printf("%d\n", sizeof(pd));//32λ�������ַ��ռ32������λ��4���ֽ�
//	printf("%lf\n",* pd);
//	printf("%lf\n", b);
//	
//	int a = 10;
//	int* p = &a;//����p��ߴ�����a�ĵ�ַ
//	printf("%d\n", p);
//	//*p;//*p �Ǹ���p�ĵ�ַѰ���������*�н����ò�����/��ӷ��ʲ�����
//	*p = 20;
//	printf("%d/n", a);//��ʱΪ20
//	return 0;
//
//}