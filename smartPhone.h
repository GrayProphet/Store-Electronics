//
// Created by bygra on 29.12.2022.
//

#ifndef STORE_ELECTRONICS_SMARTPHONE_H
#define STORE_ELECTRONICS_SMARTPHONE_H
#include"photoaparat.h"
#include"telephone.h"
#include"player.h"

class SmartPhone final: public Photoaparat, Telephone, Player {
public:
    SmartPhone(int batteryLife, std::string connection, int mp, int countTracs);
    void Show() override;
};


#endif //STORE_ELECTRONICS_SMARTPHONE_H
