#pragma once
#include "Can.h"
#include <string>


class Coffee : public Can
{
	

public:


	Coffee();
	virtual~Coffee();

	virtual std::string flavor() override;


	//Americano, Latte, machiato ±¸Á¶Ã¼
};

