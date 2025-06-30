#include "../inc/Timer.hpp"

Timer::Timer()
{
    _StartTimepoint = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
    Stop();
}

void Timer::Stop()
{
    std::chrono::high_resolution_clock::time_point endTimepoint = std::chrono::high_resolution_clock::now();

    long long start = std::chrono::time_point_cast<std::chrono::microseconds>(_StartTimepoint).time_since_epoch().count();
    long long end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
    
    long long duration = end - start;
    double ms = duration * 0.001;
    
    std::cout << "Duration: (" << duration << " us) (" << ms << " ms) (" << ms /1000 << " seconds)" << std::endl;
}

