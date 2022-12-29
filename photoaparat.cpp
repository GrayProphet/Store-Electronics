//
// Created by bygra on 29.12.2022.
//

#include "photoaparat.h"
#include"device.h"
#include<iostream>

Photoaparat::Photoaparat(int batteryLife, int mp) : Device(batteryLife), _mp(mp)
{

}
Photoaparat::Photoaparat(int mp):_mp(mp)
{

}
void Photoaparat::Show()
{
    std::cout << "Время работы аккумулятора = " << _batteryLife << std::endl << "Количество мегапикселей = " << _mp << std::endl;
}

Nicon::Nicon(int batteryLife, int mp) : Device(batteryLife),Photoaparat(mp)
{

}
void Nicon::Show()
{
    std::cout << "Время работы аккумулятора = " << _batteryLife << std::endl << "Количество мегапикселей = " << _mp << std::endl;
}