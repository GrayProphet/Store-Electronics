#include <iostream>
#include"ielectronics.h"
#include"device.h"
#include"telephone.h"
#include"photoaparat.h"
#include"player.h"
#include"smartPhone.h"
using namespace std;
int main() {
    IElectronics* electronicsStore[5];

    electronicsStore[0] = new Samsung(48, string("Билайн"));
    electronicsStore[1] = new Nokia(24, string("Билайн"));
    electronicsStore[2] = new Sony(10, 100);
    electronicsStore[3] = new Nicon(12, 90);
    electronicsStore[4] = new SmartPhone(24, string("Билайн"), 64,120);

    bool open = true;
    while (open)
    {
        cout << "Выберите продукт :" << endl
             << "1 - телефон Samsung" << endl
             << "2 - телефон Nokia" << endl
             << "3 - плеер Sony" << endl
             << "4 - фотоапарат Nicon" << endl
             << "5 - смартфон " << endl
             << "0 чтобы выйти" << endl;

        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1:
                electronicsStore[0]->Show();
                break;

            case 2:
                electronicsStore[1]->Show();
                break;

            case 3:
                electronicsStore[2]->Show();
                break;

            case 4:
                electronicsStore[3]->Show();
                break;

            case 5:
                electronicsStore[4]->Show();
                break;

            case 0:
                open = false;
                break;

            default:
                cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
                break;
        }
    }

    delete electronicsStore[0];
    delete electronicsStore[1];
    delete electronicsStore[2];
    delete electronicsStore[3];
    delete electronicsStore[4];
    return 0;
}
