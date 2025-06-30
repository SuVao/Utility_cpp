#include "../inc/Timer.hpp"

Timer::Timer()
{
    gettimeofday(&start, NULL);
}

Timer::~Timer()
{
    Stop();
}

void Timer::Stop()
{
    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long micros = end.tv_usec - start.tv_usec;
    double elapsed = seconds * 1000.0 + micros / 1000.0;
    std::cout << "Duration: (" << elapsed / 0.001 << " us) (" << elapsed << " ms) (" << elapsed / 1000 << " seconds)" << std::endl;
}