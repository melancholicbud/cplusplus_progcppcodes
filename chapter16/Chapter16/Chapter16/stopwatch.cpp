//#include <iostream>
//#include "stopwatch.h"
//
//// Creates a Stopwatch object
//// A newly minted object is not running and is in a "reset" state
//Stopwatch::Stopwatch() : start_time(0), running(false), elapsed_time(0.0) {}
//
//// Starts the stopwatch to begin measuring elapsed time.
//// Starting a stopwatch that already is running has no effect.
//void Stopwatch::start() {
//	if (!running) {
//		running = true; // set the clock running
//		start_time = clock(); // record start time
//	}
//}
//
//// Stops the stopwatch. The stopwatch will retain the current elapsed time,
//// but it won't measure any time while it's stopped.
//// If the stopwatch is already stopped, the method has no effect.
//void Stopwatch::stop() {
//	if (running) {
//		clock_t stop_time = clock(); // record stop time
//		running = false;
//		// Accumulate elapsed time since start
//		elapsed_time += static_cast<double>((stop_time - start_time)) / CLOCKS_PER_SEC;
//	}
//}
//
//// Reports the cummulative time in seconds since the stopwatch was last reset.
//// This method doesn't affect the state of the stopwatch.
//double Stopwatch::elapsed() const {
//	if (running) { // compute time since last reset
//		clock_t current_time = clock(); // record current time
//		// Add time from previous elapsed to the current elapsed
//		// since the latest call to the start method.
//		return elapsed_time + static_cast<double>((current_time - start_time)) / CLOCKS_PER_SEC;
//	}
//	else // timer stopped; elapsed already computed in the stop method
//		return elapsed_time;
//}
//
//// Returns the stopwatch's status (running or not) to the client.
//// This method does not affect the state of the stopwatch.
//bool Stopwatch::is_running() const {
//	return running;
//}
//
//// Resets the stopwatch so a subsequent start begins recording a new time.
//// Stops the stopwatch if it currently is running.
//void Stopwatch::reset() {
//	running = false;
//	elapsed_time = 0.0;
//}