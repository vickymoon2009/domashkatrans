#include <iostream>
using namespace std;
class Transport
{
protected:
    double m_maxSpeed;
    double m_fuelConsumption;
    int m_wheels;
    int m_passengers;

public:
    Transport(double maxSpeed, double fuelConsumption, int wheels, int passengers)
    {
        m_maxSpeed = maxSpeed;
        m_fuelConsumption = fuelConsumption;
        m_wheels = wheels;
        m_passengers = passengers;
    }

    virtual ~Transport() {}

    virtual void ShowMaxSpeed() const = 0;
    virtual void ShowFuelConsumption() const = 0;
    virtual void ShowWheelsCount() const = 0;
    virtual void ShowPassengersCount() const = 0;
};

class Car : public Transport
{
public:
    Car(double maxSpeed, double fuelConsumption, int wheels, int passengers)
        : Transport(maxSpeed, fuelConsumption, wheels, passengers)
    {
    }

    void ShowMaxSpeed() const override
    {
        cout << "Max speed of car: " << m_maxSpeed << endl;
    }

    void ShowFuelConsumption() const override
    {
        cout << "Fuel consumption of car: " << m_fuelConsumption << endl;
    }

    void ShowWheelsCount() const override
    {
        cout << "Wheels of car: " << m_wheels << endl;
    }

    void ShowPassengersCount() const override
    {
        cout << "Passengers of car: " << m_passengers << endl;
    }
};

class Moto : public Transport
{
public:
    Moto(double maxSpeed, double fuelConsumption, int wheels, int passengers)
        : Transport(maxSpeed, fuelConsumption, wheels, passengers)
    {
    }

    void ShowMaxSpeed() const override
    {
        cout << "Max speed of moto: " << m_maxSpeed << endl;
    }

    void ShowFuelConsumption() const override
    {
        cout << "Fuel consumption of moto: " << m_fuelConsumption << endl;
    }

    void ShowWheelsCount() const override
    {
        cout << "Wheels of moto: " << m_wheels << endl;
    }

    void ShowPassengersCount() const override
    {
        cout << "Passengers of moto: " << m_passengers << endl;
    }
};

int main()
{
    Transport* ptr = nullptr;

    ptr = new Car(200, 7.5, 4, 4);
    ptr->ShowMaxSpeed();
    ptr->ShowFuelConsumption();
    ptr->ShowWheelsCount();
    ptr->ShowPassengersCount();
    delete ptr;

    cout << endl;

    ptr = new Moto(240, 5.0, 2, 1);
    ptr->ShowMaxSpeed();
    ptr->ShowFuelConsumption();
    ptr->ShowWheelsCount();
    ptr->ShowPassengersCount();
    delete ptr;

    return 0;
}
