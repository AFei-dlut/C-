//apple.cpp

#include <iostream>
using namespace std;

//const����ֻ�ܷ���const��Ա����,����const������Է�������ĳ�Ա����,����const��Ա����.
//��һ�����У��κβ����޸����ݳ�Ա�ĺ�����Ӧ������Ϊconst����
class Apple
{
private:
    int people[100];
public:
    Apple();
    //������������static��ϣ�Ҳ���ǣ�
    static const int apple_number = 3;
    void take(int num) const;
    int add(int num);
    int add(int num) const;
    int getCount() const;

};
//�������е�const��Ա��������ͨ����ʼ���б���г�ʼ��
Apple::Apple()
{

}
int Apple::add(int num) {
    take(num);
    return 1;
}
int Apple::add(int num) const {
    take(num);
    return 1;
}
void Apple::take(int num) const
{
    cout << "take func " << num << endl;
}
int Apple::getCount() const
{
    take(1);
    //add(1); //error
    return apple_number;
}
int main() {
    Apple a;
    cout << a.getCount() << endl;
    a.add(10);
    const Apple b;
    b.add(100);
    return 0;
}
