#include<iostream>
#include <string>
using namespace std;

#define pi 3.1415

void test_define_type()
{
	double a = 100;
	if (typeid(pi) == typeid(a)) {
		cout << 1 << endl;
	}
	else {
		cout << 2 << endl;
	}
	return;
}

//void f(const int a)
//{
//	a++; //const���β��������޸�
//}

//���������壬��Ϊ�������ر�����Ǹ�ֵ�������ı�����
//const int func1(const int a)
//{
//	//a = 2;
//	//return a;
//}

void func2(const int var); // ���ݹ����Ĳ������ɱ�
void func3(int* const var); // ָ�뱾���ɱ�

//����src �����������dst �������������src����const���κ�����������ڵ������ͼ�Ķ�src�����ݣ�
//��������ָ����������Ǽ���const������֮һ��
void StringCopy(char* dst, const char* src);

//����Ϊ���ã�Ϊ������Ч��ͬʱ��ֹ�޸�
// ���ڷ��ڲ��������͵Ĳ������ԣ���void func(A a) ���������ĺ���ע��Ч�ʱȽϵ͡���Ϊ�������ڽ�����A ����
//����ʱ�������ڸ��Ʋ���a������ʱ����Ĺ��졢���ơ��������̶�������ʱ�䡣
//Ϊ�����Ч�ʣ����Խ�����������Ϊvoid func(A& a)����Ϊ�����ô��ݡ�������һ�²����ı������ѣ�����Ҫ������
//ʱ���󡣵��Ǻ���void func(A& a) ����һ��ȱ�㣺
//�����ô��ݡ��п��ܸı����a���������ǲ������ġ���������������ף���const���μ��ɣ���˺������ճ�Ϊ
//void func(const A& a)��
//�Դ����ƣ��Ƿ�Ӧ��void func(int x) ��дΪvoid func(const int& x)���Ա����Ч�ʣ���ȫû�б�Ҫ����Ϊ�ڲ���
//�����͵Ĳ��������ڹ��졢�����Ĺ��̣�������Ҳ�ǳ��죬��ֵ���ݡ��͡����ô��ݡ���Ч�ʼ����൱��
//void func(const A& a)




//int main() 
//{
	//define �������ݴ�������
	//test_define_type();

	//const int i; //const�������ʱ�����ʼ��,��Ϊ�����ڶ����Ͳ��ܱ��޸ģ����Զ���ʱ�����ʼ��
	//const int i = 0, j = 0; 

	//const char* a; //ָ��const�����ָ�����˵ָ������ָ�롣
	//char const* b; //ͬ��
	//char* const c = nullptr; //ָ�����Ͷ����constָ�롣����˵��ָ�롢constָ�롣
	//const char* const d = nullptr; //ָ��const�����constָ�롣

	//string a1 = "dsad";
	//cout << a1 << endl;
	//const char* p = "das"; //�����ַ���
	//char* p = new char[10];
	//char str2[] = "abcd";

	//ָ��const��ָ��cptrʵ����ָ����һ����const���󡣾�������ָ������const��
	//����Ȼ����ʹ��cptr�޸ĸö����ֵ��ϵͳ�������ָ�����ж�����Ϊconst��
	//���ָ��const��ָ����ָ�Ķ��󲢷�const�����ֱ�Ӹ��ö���ֵ���ӵ�������ͨ�ķ�constָ���޸���ֵ��
	//�Ͼ����ֵ����const
	//const int* ptr;
	//int val = 3;
	//ptr = &val; //ok
	//val = 4;
	//cout << val  << " " << *ptr << endl;

	//�޸ĳ�ptrָ����ָ���ֵ������ͨ����constָ�����޸ġ�
	//constָ�������г�ʼ������constָ���ֵ�����޸ġ�
	//int num = 0;
	//int num2 = 2;
	//int* const ptr = &num; //constָ������ʼ������constָ���ֵ�����޸�
	//int* t = &num;
	//*t = 1;
	//ptr = &num2;
	//cout << *ptr << endl;

	//��һ��const�����ĵ�ַ��ֵ��ptrʱ������ptrָ�����һ��������
	//������const���������Իᱨ�����֣�const int* -> int* ����
	//const int num = 0;
	//const int* const ptr = &num; //error! const int* -> int*
	//cout << *ptr << endl;

	//ptr��һ��constָ�룬Ȼ��ָ����һ��int ���͵�const����
	//const int p = 3;
	//const int* const ptr = &p;

	/*int x;
	int q = func1(x);
	q = 2;
	cout << q << endl;*/


	//return 1;
//}