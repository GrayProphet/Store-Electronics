//
// Created by bygra on 29.12.2022.
//

#ifndef STORE_ELECTRONICS_DEVICE_H
#define STORE_ELECTRONICS_DEVICE_H
#include"ielectronics.h"

class Device: public IElectronics {
public:
    Device(int battaryLife);
    Device();
    void Show();
protected:
    int _batteryLife;

};


#endif //STORE_ELECTRONICS_DEVICE_H
