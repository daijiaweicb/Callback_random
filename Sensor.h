#ifndef SENSOR_H
#define SENDOR_H

#include "callback.h"
#include <thread>
using namespace std;

class GetSensor : public Sensor
{
    private:
    thread workerThread;
    bool running = false;

    public:
    float GenerateSample();

    void Getsample() override;

    void start();

    void stop();

};

#endif