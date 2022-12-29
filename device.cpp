//
// Created by bygra on 29.12.2022.
//

#include "device.h"
#include"ielectronics.h"
#include<iostream>
Device::Device(int batteryLife) : _batteryLife(batteryLife)
{

}
Device::Device()
{

}

void Device:: Show()
{
    std::cout << _batteryLife;
}