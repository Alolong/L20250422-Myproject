#pragma once
#include "VendingMachine.h"
#include <string>



class Soda;
class Juice;
class Coffee;


class Can
{
	

public:
	 


	virtual std::string flavor();
	

	Can();
	virtual ~Can();

	struct can
	{
		int Price;//가격
		int Kcal;// 칼로리
		// brand; // 제조사
	};

	



};

