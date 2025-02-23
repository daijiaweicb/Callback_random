#ifndef CALLBACK_H
#define CALLBACK_H

#include <iostream>
#include <vector>

class CallbackInterface
{
    public:
    virtual void SensorCallback(float sample) = 0;
    virtual ~CallbackInterface() = default;
};

class Sensor
{
    public:

    std::vector<CallbackInterface*> callback;   

    void RegisterCallback(CallbackInterface* cb);

    virtual void Getsample() = 0;

};

class MysensorAPP : public CallbackInterface
{
    public:
    void SensorCallback(float sample) override;
};


#endif