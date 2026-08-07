// cpp/main.cpp
#include "device-h.cpp"

int main() {
    Light light;
    Fan fan;
    AC ac;
    DoorLock door;

    light.turnOn();
    fan.turnOn();
    ac.turnOff();
    door.turnOn(); // Door locked

    return 0;
}
