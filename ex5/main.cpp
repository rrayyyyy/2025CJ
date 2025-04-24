#include <iostream>
#include <string>
using namespace std;

// 父類別 Car
class Car {
protected:
    string m_DriveMode;

private:
    int m_MaxSeating;
    int m_price;
    void m_UpdatePrice(int base = 500000) {
        m_price = base + m_MaxSeating * 10000;
    }

public:
    string m_brand;
    string m_model;
    int m_year;

    // 建構子
    Car(string x, string y, int z, int s) {
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        m_UpdatePrice();  // 預設價格計算
    }

    int get_MaxSeating() {
        return m_MaxSeating;
    }

    int get_Price() {
        return m_price;
    }

    string get_DriveMode() {
        return m_DriveMode;
    }
};

// 子類別 BMW_Car
class BMW_Car : public Car {
public:
    BMW_Car(string y, int z, int s) : Car("BMW", y, z, s) {
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Rear-wheel";
    }
};

// 子類別 AUDI_Car
class AUDI_Car : public Car {
public:
    AUDI_Car(string y, int z, int s) : Car("Audi", y, z, s) {
        cout << "Constructing AUDI_Car\n";
        m_DriveMode = "Front-wheel";
    }
};

// 子類別 BENZ_Car
class BENZ_Car : public Car {
public:
    BENZ_Car(string y, int z, int s) : Car("Benz", y, z, s) {
        cout << "Constructing BENZ_Car\n";
        m_DriveMode = "Front-wheel";
    }
};

// 主程式測試
int main() {
    BMW_Car bmw("X5", 2020, 5);
    cout << bmw.m_brand << " : Drive Mode = " << bmw.get_DriveMode() << endl;

    AUDI_Car audi("A4", 2021, 5);
    cout << audi.m_brand << " : Drive Mode = " << audi.get_DriveMode() << endl;

    BENZ_Car benz("C300", 2022, 5);
    cout << benz.m_brand << " : Drive Mode = " << benz.get_DriveMode() << endl;

    return 0;
}

