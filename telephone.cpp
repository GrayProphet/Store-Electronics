//
// Created by bygra on 29.12.2022.
//
#include<iostream>
#include "telephone.h"
#include"device.h"

Telephone::Telephone(int batteryLife, std::string connection) : Device(batteryLife), _connection(connection)
{

}
Telephone::Telephone(std::string connection): _connection(connection)
{

}
void Telephone::Show()
{
    std::cout << "Время работы аккумулятора = " << _batteryLife << std::endl << "Мобильная связь = " << _connection << std::endl;
}


Samsung::Samsung(int batteryLife, std::string connection) : Device(batteryLife), Telephone(connection)
{

}
void Samsung::Show()
{
    std::cout << "Время работы аккумулятора = " << _batteryLife << std::endl << "Мобильная связь = " << _connection << std::endl;
}


Nokia::Nokia(int batteryLife, std::string connection) : Device(batteryLife), Telephone(connection)
{

}
void Nokia::Show()
{
    std::cout << "Время работы аккумулятора = " << _batteryLife << std::endl << "Мобильная связь = " << _connection << std::endl;
}