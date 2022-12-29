//
// Created by bygra on 29.12.2022.
//

#ifndef STORE_ELECTRONICS_TELEPHONE_H
#define STORE_ELECTRONICS_TELEPHONE_H
#include<iostream>
#include"ielectronics.h"
#include"device.h"
class Telephone: virtual public Device {
public:

    Telephone(int batteryLife, std::string connection);
    Telephone(std::string connection);
    void Show()override;

protected:
    std::string _connection;
};

class Samsung final :public Telephone
{
public:

    Samsung(int batteryLife, std::string connection);
    void Show()override;

};

class Nokia final :public Telephone
{
public:

    Nokia(int batteryLife, std::string connection);
    void Show();

};

#endif //STORE_ELECTRONICS_TELEPHONE_H
