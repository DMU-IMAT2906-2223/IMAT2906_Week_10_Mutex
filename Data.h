#pragma once
#include<iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <vector>

class Data {
public:
	bool b_dataProcessed = false;
	std::mutex mtx;
	std::condition_variable conVar;

	Data() {};
	void setupData() {
	}

	void dataProcess() {

	}

};

