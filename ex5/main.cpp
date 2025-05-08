#include<iostream>

using namespace std;

class Car { // Base class
    protected:
    string m_DriveMode;
    private:
    int m_MaxSeating;
    int m_price;
    void m_UpdatePrice(int base = 500000) {
        m_price = m_MaxSeating * base;
    }
    public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x, string y, int z, int s) {
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        m_UpdatePrice();
        m_DriveMode = "No-Wheel";
    }
    int getMaxSeating() {
        return m_MaxSeating;
    }
    int getPrice() {
        return m_price;
    }
    string getDriveMode() {
        return m_DriveMode;
    }
};

class BMW_Car : public Car {
    public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s) {
        cout << "Constructing BMW_Car" << endl;
        m_DriveMode = "Rear-wheel";
    }   
    string getDriveMode() {
        return m_DriveMode;
    }
};
class AUDI_Car : public Car {
    public:
    AUDI_Car(string y, int z, int s) : Car("AUDI", y, z, s) {
        cout << "Constructing AUDI_Car" << endl;
        m_DriveMode = "Front-wheel";
    }
    string getDriveMode() {
        return m_DriveMode;
    }
};
class BENZ_Car : public Car {
    public:
    BENZ_Car(string y, int z, int s) : Car("BENZ", y, z, s) {
        cout << "Constructing BENZ_Car" << endl;
        m_DriveMode = "Front-wheel";
    }
    string getDriveMode() {
        return m_DriveMode;
    }
};
int main() {
    BMW_Car car_1("X5", 2023, 6);
    cout << car_1.m_brand;
    cout << " : Drive Mode: " << car_1.getDriveMode() << endl;

    AUDI_Car car_2("A1", 2023, 5);
    cout << car_2.m_brand;
    cout << " : Drive Mode: " << car_2.getDriveMode() << endl;

    BENZ_Car car_3("A1", 2023, 4);
    cout << car_3.m_brand;
    cout << " : Drive Mode: " << car_3.getDriveMode() << endl;
    return 0;
}