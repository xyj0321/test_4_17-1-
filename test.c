#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
int main()
{
	int money = 0;
	scanf("%d", &money);
	int drink = money;//Ǯ��ĺȵ���������
	int empty = drink;//��ƿ��
	while (empty>1)
	{
		drink += empty / 2;
		empty = empty / 2+empty % 2;;//20/2=10 /10/2=5
	}
	printf("%d\n", drink);
	return 0;
}
int compare_int(const int* p1, const int *p2)
{
	return(*(int*)p1 - *(int*)p2);

}
#include<stdlib.h>
//�Ƚ�����
void test1()
{
	int arr[10] = {1,8,9,7,6,4,2,3};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),compare_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int compare_float(const void*a, const void*b)
{
	return(*(float*)a-*(float*)b);
}

//�Ƚϸ�����
void test2()
{
	float f[] = {1.0,6.0, 7.0,12.5, 8, 9.5, 10.1 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), compare_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}
��ϰʹ�ÿ⺯����qsort����������͵�����
struct Stu
{
	char name[20];
	int age;
};
int  compare(const void*s1, const void*s2)
{
	return(((struct Stu*)s1)->age,((struct Stu*)s2)->age);
}
void test3()
{
	struct Stu s[3] = { { "zhangsan", "20" }, { "lisi", "26" }, { "wangwu", "60" } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compare);

}
int main()
{
//	test1();
//	test2();
	test3();
	return 0;
}

