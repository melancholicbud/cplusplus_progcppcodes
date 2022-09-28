#pragma once
#ifndef STOPWATCH_H_DEFINED_
#define STOPWATCH_H_DEFINED_

#include <ctime>

class Stopwatch {
	clock_t start_time;
	bool running;
	double elapsed_time;
public:
	Stopwatch();
	void start(); // start the timer
	void stop(); // stop the timer
	void reset(); // reset the timer
	double elapsed() const; // reveal the elapsed time
	bool is_running() const; // is the stopwatch currently running
};

#endif // !STOPWATCH_H_DEFINED_
