#pragma once
#include "UCVaelgModeFraPC.h"
class UC
{
public:
	UC(UCVaelgModeFraPC* vaelgModeFraPC);	//initialiserer UCVaelgModeFraPCPtr til parameterem (tilf�jes flere hvis flere UC implementeres)
	void startUC(const char); //starter UC indstil sikkerhedssystem hvis 1 ellers hvis 2 starter UC v�lg mode
private:
	UCVaelgModeFraPC* UCVaelgModeFraPCPtr_;
};

