#include "BendingMachineWithFunction.h"


int main()
{
	int readyMoney{}, sel{}, running{ false };
	SetMoney(readyMoney);

	while (!running) {
		ShowMenu(readyMoney);
		running = Update(sel, readyMoney);
	}

}