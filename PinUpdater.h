#pragma once
#include <WProgram.h>

class PinUpdater{
public:
	PinUpdater();
	void setPin(int id=13);
	void setRate(char herz);
	void setUpdateInterval(unsigned int millis);
	void update();
	void changeValue();
private:
	int mPin;
	bool mOn;
	unsigned long mLastUpdate, mUpdateTime, mHoldTime;
};