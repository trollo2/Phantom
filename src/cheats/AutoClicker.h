//
// Created by somepineaple on 1/30/22.
//

#ifndef MC_INJECTION_AUTOCLICKER_H
#define MC_INJECTION_AUTOCLICKER_H

#include "../Phantom.h"
#include "../mapping/impl/Mouse.h"
#include "../mapping/impl/KeyBinding.h"
#include "../mapping/impl/Minecraft.h"
#include "Cheat.h"
#include "../utils/MSTimer.h"

class AutoClicker : public Cheat {
public:
    explicit AutoClicker(Phantom *phantom);
    void run(Minecraft *mc) override;
    void renderSettings() override;
private:
    void updateValues();

    int mouseDeviceIndex;
    unsigned long mouseDeviceID;
    bool isDeviceShit;

    MSTimer *clickTimer;
    MSTimer *eventTimer;

    float cps;
    int nextDelay;
    int eventDelay;
    int nextEventDelay;
    float dropChance;
    float spikeChance;
    bool isSpiking;
    bool isDropping;
};


#endif //MC_INJECTION_AUTOCLICKER_H
