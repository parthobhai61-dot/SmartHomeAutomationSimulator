// cpp/rules.cpp
#include "device-h.cpp"
#include <ctime>

int main() {
    Light light;
    Fan fan;

    
    time_t now = time(0);
    tm *localTime = localtime(&now);
    if(localTime->tm_hour >= 22) {
        light.turnOff();
    }

   
    int temperature = 32;
    if(temperature > 30) {
        fan.turnOn();
    }

    return 0;
}

