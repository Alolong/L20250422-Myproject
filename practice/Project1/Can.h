#pragma once
#include "VendingMachine.h"
#include <string>



class Soda;
class Juice;
class Coffee;



struct can
{
	int cost;
	int kal;
	string name[10];
	string brand[10];

};


class Can
{
	

public:
	 

	
	// 

	can coffee = { 100,30,"TOP","Lotte"};
	







	virtual std::string flavor();
	

	Can();
	virtual ~Can();

	struct can
	{
		int Price;//����
		int Kcal;// Į�θ�
		// brand; // ������
	};

	



};

