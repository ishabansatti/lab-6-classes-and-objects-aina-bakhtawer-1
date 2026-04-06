#include <iostream>
using namespace std;
class Sensor {
private:
    int id;
public:
    static int totalSensors;

    Sensor() {
        totalSensors++;
        id = totalSensors;
    }
    void printInfo() {
        cout << "Sensor ID: " << id << ", Total Sensors: " << totalSensors << endl;
    }
};
int Sensor::totalSensors = 0;
int main() {
    Sensor s1, s2, s3, s4;
    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    s4.printInfo();
    return 0;
}