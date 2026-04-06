#include <iostream>
using namespace std;
class Temperature {
private:
    double celsius;
public:
    Temperature(double c = 0.0) {
        if (c >= -273.15)
            celsius = c;
        else {
            celsius = -273.15;
            cout << "Invalid temperature! Set to absolute zero (-273.15°C)." << endl;
        }
    }
    void setCelsius(double c) {
        if (c >= -273.15)
            celsius = c;
        else
            cout << "Error: Temperature cannot be below -273.15°C." << endl;
    }
    double getCelsius() const { return celsius; }
    double getFahrenheit() const { return celsius * 9 / 5 + 32; }
    double getKelvin() const { return celsius + 273.15; }
};
int main() {
    Temperature temp; 
    temp.setCelsius(373);  
    temp.setCelsius(44);  
    cout << "Celsius: " << temp.getCelsius() << "°C" << endl;
    cout << "Fahrenheit: " << temp.getFahrenheit() << "°F" << endl;
    cout << "Kelvin: " << temp.getKelvin() << "K" << endl;
    return 0;
}