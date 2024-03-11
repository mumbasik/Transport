// Transport.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Transport {
protected:
    int oil;
public:
    Transport() {
        oil = 0;

    }
    virtual void Print() = 0;
    virtual void Oil() = 0;
};
class Plane : public Transport {
    string Engine;
public:
    Plane(int oiil, string eng) {
        oil = oiil;
        Engine = eng;
    }
    virtual void Print() override {
        cout << "The Plane has " << Engine << " Engine" << endl;
    }
    virtual void Oil() override {
        cout << "The Plane needs " << oil << " count of oil" << endl;
    }
};
class Ship : public Transport {
    string Engine;
public:
    Ship(int oiil, string eng) {
        oil = oiil;
        Engine = eng;
    }
    virtual void Print() override {
        cout << "The Ship has " << Engine << " Engine" << endl;
    }
    virtual void Oil() override {
        cout << "The Ship needs " << oil << " count of oil" << endl;
    }
};
class Truck: public Transport {
    string Engine;
public:
    Truck(int oiil, string eng) {
        oil = oiil;
        Engine = eng;
    }
    virtual void Print() override {
        cout << "The Truck has " << Engine << " Engine" << endl;
    }
    virtual void Oil() override {
        cout << "The Truck needs " << oil << " count of oil" << endl;
    }
};
class Bicycle : public Transport {
    string Engine;
public:
   Bicycle( string eng) {
       
       Engine = eng;
   }
   virtual void Print() override {
       cout << "The Bicycle has " << Engine << " Engine" << endl;
   }
   virtual void Oil() override {
       cout << "The Bicycle doesn't need an oil " << endl;
   }
};
class Car : public Transport {
    string Engine;
public:
    Car(int oiil, string eng) {
        oil = oiil;
        Engine = eng;
    }
    virtual void Print() override {
        cout << "The Car has " << Engine << " Engine" << endl;
    }
    virtual void Oil() override {
        cout << "The Car needs " << oil << " count of oil" << endl;
    }
};
int main()
{
    
    Plane obj(1500, "X8000");
    Ship obj1(2500, "XA9600");
    Truck obj2(1000, "IK8700");
    Bicycle obj3("O0095");
    Car obj4(900, "OOP9000");
    Transport* to_diff;
    
    to_diff = &obj;
    to_diff->Print();
    to_diff->Oil();
    to_diff = &obj1;
    to_diff->Print();
    to_diff->Oil();
    to_diff = &obj2;
    to_diff->Print();
    to_diff->Oil();
    to_diff = &obj3;
    to_diff->Print();
    to_diff->Oil();
    to_diff = &obj4;
    to_diff->Print();
    to_diff->Oil();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
