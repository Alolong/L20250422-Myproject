#include <iostream>
#include <string>
#include "Can.h"
#include "Coffee.h"
#include "Soda.h"
#include "VendingMachine.h"
#include <vector>// 크기를 마음대로 변경할 수 있는 배열이라고 생각해

using namespace std;

int main()
{
	
	//VendingMachine* Machine = new VendingMachine();


	//delete Machine ;

	//Machine = nullptr;

	
	std::vector<VendingMachine*>Numbers; //VendingMachine* 밴딩머신포인터 변수 클래스위치를 저장

	Numbers.push_back(new VendingMachine()); // 공간 하나 잡음 new(주소값 반환) Vendingmachine(주소)
	Numbers.push_back(new VendingMachine());// 벡터가 알아서 순번을 정해줌 
	//Numbers.push_back(2); // 두번쨰 공간 2개
	//Numbers.push_back(3); //세번쨰 공간 4개


	for (int i = 0; i < Numbers.size(); ++i) //size()가 위의 벡터에 들어있는 요소의 총 갯수 괄호 안에 있는거 int가 아닌 자료형도 갯수 알아서 반환
	{
		cout << Numbers[i] << endl;
	}
	


	return 0;
}