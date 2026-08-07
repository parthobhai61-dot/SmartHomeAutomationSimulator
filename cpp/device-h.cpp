// cpp/device.h
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Device {
protected:
    string name;
    bool state;
public:
    Device(string n) : name(n), state(false) {}
    void turnOn() {
        state = true;
        logAction("ON");
    }
    void turnOff() {
        state = false;
        logAction("OFF");
    }
    void logAction(string action) {
        ofstream file("logs/devices.log", ios::app);
        file << name << " turned " << action << endl;
        file.close();
    }
    bool status() { return state; }
};

// Specific devices
class Light : public Device {
public:
    Light() : Device("Light") {}
};

class Fan : public Device {
public:
    Fan() : Device("Fan") {}
};

class AC : public Device {
public:
    AC() : Device("AC") {}
};

class DoorLock : public Device {
public:
    DoorLock() : Device("DoorLock") {}
};
