#pragma once
#include<iostream>
class FindFactorial {
public:
	int i_facIn = 1;
	int i_facOutput = 1;
	FindFactorial() {};
	FindFactorial(int i) {
		if (i > 0) {
			i_facIn = i;
		}
		else {
			std::cout << "Must be a positive number" << std::endl;
		}
	}
	/// <summary>
	/// Non-recursive function.
	/// </summary>
	/// <returns></returns>
	int getFactorial() {
		for (int i = 1; i <= i_facIn; ++i) {
			i_facOutput *= i;
		}
		return i_facOutput;
	}

};
