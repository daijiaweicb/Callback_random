#include <iostream>
#include "callback.h"
#include "Sensor.h"


using namespace std;

int main()
{
    GetSensor sor;
    MysensorAPP app;
    sor.RegisterCallback(&app);
    sor.start();

    this_thread::sleep_for(chrono::seconds(5));

    sor.stop();

    return 0;
}