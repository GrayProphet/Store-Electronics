//
// Created by bygra on 29.12.2022.
//

#ifndef STORE_ELECTRONICS_PLAYER_H
#define STORE_ELECTRONICS_PLAYER_H
#include<iostream>
#include"device.h"

class Player: virtual public Device {
public:

    Player(int batteryLife, int countTraks);
    Player(int countTraks);
    void Show()override;

protected:
    int _countTracs;

};

class Sony final :public Player
{
public:

    Sony(int batteryLife, int countTraks);
    void Show()override;

};

#endif //STORE_ELECTRONICS_PLAYER_H
