#pragma once
#include "UCVaelgModeFraPC.h"
class UC
{
public:
	UC(UCVaelgModeFraPC* vaelgModeFraPC);
	void startUC(char); //starter UC indstil sikkerhedssystem hvis 1 ellers hvis 2 starter UC v�lg mode
private:
	UCVaelgModeFraPC* UCVaelgModeFraPCPtr_;
};

