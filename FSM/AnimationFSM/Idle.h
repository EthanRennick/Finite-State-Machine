#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	//can go from idle to jumping / climbing
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
};

#endif // !IDLE_H