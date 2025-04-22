#pragma once
#include "Can.h"

class Soda : public Can
{
	
public:
	
	Soda();
	virtual~Soda() ;

	virtual std::string flavor() override;
	 


	//구현 함수에만 override



};

