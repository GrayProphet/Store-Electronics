//
// Created by bygra on 29.12.2022.
//

#ifndef STORE_ELECTRONICS_PHOTOAPARAT_H
#define STORE_ELECTRONICS_PHOTOAPARAT_H
#include"device.h"

class Photoaparat: virtual public Device {
public:

    Photoaparat(int batteryLife, int mp);
    Photoaparat(int mp);

    void Show()override;

protected:
    int _mp;
};

class Nicon final :public  Photoaparat
{

public:
    Nicon(int batteryLife, int mp);

    void Show()override;


};

#endif //STORE_ELECTRONICS_PHOTOAPARAT_H
