#include "UCBrugPC.h"

UCBrugPC::UCBrugPC(Kode* kodePtr, UserInterface* userInterfacePtr, UC* UCPtr)
{
	Kode_ = kodePtr;
	UserInterface_ = userInterfacePtr;
	UC_ = UCPtr;
	correctCode_ = false;
}

void UCBrugPC::runUC()
{
	//bliver i UC s� l�nge correctCode_ er false
	while (correctCode_==false)
	{
		//tjekker om indtastet kode er korrekt
		checkCode(Kode_->getkode(), UserInterface_->showLoginScreen());
		//giver bruger besked om forkert kode
		if (correctCode_ == false)
		{
			UserInterface_->incorrectCode();
		}
	}
	//starter n�ste UC
	UC_->startUC(UserInterface_->showOptions());
}

void UCBrugPC::checkCode(const std::string code, const std::string receivedCode)
{
	//g�r kun noget hvis den korrekte kode er indtastet, �ndrer correctCode_ til true
	if (code==receivedCode)
	{
		correctCode_ = true;
	}
}
