#include <iostream>
#include <string>
#include "Can.h"
#include "Coffee.h"
#include "Soda.h"
#include "VendingMachine.h"
#include <vector>// ũ�⸦ ������� ������ �� �ִ� �迭�̶�� ������

using namespace std;

int main()
{
	
	//VendingMachine* Machine = new VendingMachine();


	//delete Machine ;

	//Machine = nullptr;

	
	std::vector<VendingMachine*>Numbers; //VendingMachine* ����ӽ������� ���� Ŭ������ġ�� ����

	Numbers.push_back(new VendingMachine()); // ���� �ϳ� ���� new(�ּҰ� ��ȯ) Vendingmachine(�ּ�)
	Numbers.push_back(new VendingMachine());// ���Ͱ� �˾Ƽ� ������ ������ 
	//Numbers.push_back(2); // �ι��� ���� 2��
	//Numbers.push_back(3); //������ ���� 4��


	for (int i = 0; i < Numbers.size(); ++i) //size()�� ���� ���Ϳ� ����ִ� ����� �� ���� ��ȣ �ȿ� �ִ°� int�� �ƴ� �ڷ����� ���� �˾Ƽ� ��ȯ
	{
		cout << Numbers[i] << endl;
	}
	


	return 0;
}