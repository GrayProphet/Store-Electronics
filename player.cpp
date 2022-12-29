//
// Created by bygra on 29.12.2022.
//

#include "player.h"
#include"device.h"
#include<iostream>
Player::Player(int batteryLife, int countTracs) : Device(batteryLife), _countTracs(countTracs)
{

}
Player::Player(int countTracs): _countTracs(countTracs)
{

}
void Player::Show()
{
    std::cout << "Время работы аккумулятора = " << _batteryLife << std::endl << "Количество треков = " << _countTracs << std::endl;
}


Sony::Sony(int batteryLife, int countTracs) : Device(batteryLife), Player(countTracs)
{

}
void Sony::Show()
{
    std::cout << "Время работы аккумулятора = " << _batteryLife << std::endl << "Количество треков = " << _countTracs << std::endl;
}