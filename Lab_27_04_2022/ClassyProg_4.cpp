#include <iostream>

using namespace std;

class CarPark
{
private:
    int CarRegnno;
    int ChargePerHour;
    float ParkingDuration;

public:
    void setData(int reg, int charge, float duration)
    {
        CarRegnno = reg;
        ChargePerHour = charge;
        ParkingDuration = duration;
    }

    void showData()
    {
        cout << "Car Reg.No : " << CarRegnno << endl;
        cout << "Parking Duration : " << ParkingDuration << endl;
        cout << "Charge : " << ChargePerHour * ParkingDuration << endl;
    }
};

int main(int argc, char const *argv[])
{
    int reg, duration, charge = 50;

    cout << "Enter your Car Reg.No : ";
    cin >> reg;

    cout << "How many hours has the car been parked for : ";
    cin >> duration;

    CarPark data;

    data.setData(reg, charge, duration);
    data.showData();

    return 0;
}
