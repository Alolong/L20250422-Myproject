#pragma once
#include "Can.h"

class Soda : public Can
{
	
public:
	
	Soda();
	virtual~Soda() ;

	virtual std::string flavor() override;
	 


	//���� �Լ����� override



};

