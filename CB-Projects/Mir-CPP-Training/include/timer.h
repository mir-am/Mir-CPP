#ifndef TIMER_H
#define TIMER_H

#include <ctime>

class Timer
{

    private:

        clock_t total;
        clock_t started;
        clock_t finished;

    public:

        Timer(bool autostart=false);

        void start();
        void stop();

        void reset();
        void restart();

        double getTimeElapsed();


};

#endif // TIMER_H
