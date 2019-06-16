#include "stdafx.h"
#include "Windows.h"
#include <chrono>
#include <thread>


int main()
{
	SetThreadExecutionState(ES_CONTINUOUS | ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED);
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::minutes(10));
	}
}

