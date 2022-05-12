#pragma once
#include <ctime>
class Countdown
{
public:
	void startCountdown(const int);	//gemmer aktuelle time_t + parameteren i startTime_ og initierer timeLeft_ til parameteren.
	int calculateCurrentTimeLeft();	//sammenligner nuv�rende tid med startTime_, �ndrer timeLeft til ny v�rdi og returnerer differencen.
private:
	time_t finishTime_;
	int timeLeft_;
};

