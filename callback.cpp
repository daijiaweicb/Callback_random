#include "callback.h"

void Sensor :: RegisterCallback(CallbackInterface* cb)
{
    callback.push_back(cb);
}

void MysensorAPP::SensorCallback(float sample) 
{
    std::cout << "the number is: " << sample << std::endl;
}