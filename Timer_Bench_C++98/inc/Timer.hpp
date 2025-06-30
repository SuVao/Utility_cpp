
#pragma once

#ifndef TIMER_HPP
#define TIMER_HPP

#include <sys/time.h>
#include <iostream>

class Timer 
{
private:
    timeval start, end;
public:
    Timer();
    ~Timer();
    void Stop();

};

#endif