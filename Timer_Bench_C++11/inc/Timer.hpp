#pragma once


#ifndef TIMER_HPP
#define TIMER_HPP

#include <iostream>
#include <string>
#include <chrono>
#include <memory>

class Timer
{
private:
    std::chrono::time_point< std::chrono::high_resolution_clock> _StartTimepoint;
public:
    Timer();
    ~Timer();
    void Stop();
};



#endif