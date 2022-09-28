#pragma once
// reset the timer so it reads 0 seconds
void reset_timer();

// start the timer. the timer will begin measuring elapsed time.
void start_timer();

// stop the timer. the timer will retain the current elapsed time,
// but it will not measure any time while it is stopped.
void stop_timer();

// return the cummulative time (in seconds) kept by the timer since it last was reset
double elapsed_time();