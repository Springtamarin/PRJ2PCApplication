#pragma once
#include <string>

class UserInterface
{
public:
	void incorrectCode();	//udskriver sk�rm for forkert indtastet kode
	char showOptions();	//udskriver sk�rm for valg af funktioner i program(v�lg mode eller indstillinger), returnerer valg
	std::string showLoginScreen();	//viser loginSk�rm, returnerer indtastning
	char showSelectMode();	// viser valg for modes
	bool isCancelHit();	//tjekker, om der er trykket p� 'c'
	void displayInt(int);	//udskriver den valgte parameter
private:
};

