#include<iostream>
#include"FindFactorial.h"
#include"Data.h"

int main() {
	FindFactorial ff(10);
	int i_f = ff.getFactorial();
	std::cout << i_f << std::endl;

	//Setting up the data object to use the two functions. The functions have no content.
	Data d;
	std::thread tSetup(&Data::setupData, &d);
	std::thread tProcess(&Data::dataProcess, &d);
	tSetup.join();
	tProcess.join();
	return 0;
}
