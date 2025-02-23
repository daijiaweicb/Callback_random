#include "Sensor.h"
#include <iostream>

float GetSensor :: GenerateSample()
{
    float sample = (float)(rand() % 100 /10.0);
    return sample;
}

void GetSensor::Getsample()
{
    
    running = true;
        while (running)
        {
            float sample = GenerateSample();
            this_thread ::sleep_for(chrono::microseconds(500));

            for (auto cb : callback)
            {
                cb->SensorCallback(sample);
            }
        }
}

void GetSensor::start()
{
    workerThread = thread(&GetSensor::Getsample, this);
}

void GetSensor :: stop()
{
    {
        running = false;
        if (workerThread.joinable())
        {
            workerThread.join();
        }
    }
}