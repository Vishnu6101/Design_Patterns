#include "hpDesktop_concreteBuilder.hpp"

void HpDesktopBuilder::buildMonitor(){
    desktop->setMonitor("Hp Monitor");
}

void HpDesktopBuilder::buildKeyBoard(){
    desktop->setKeyBoard("Hp Key Board");
}

void HpDesktopBuilder::buildMouse(){
    desktop->setMouse("Hp Mouse");
}

void HpDesktopBuilder::buildSpeaker(){
    desktop->setSpeaker("Hp Speaker");
}

void HpDesktopBuilder::buildRam(){
    desktop->setRam("Hp RAM");
}

void HpDesktopBuilder::buildProcessor(){
    desktop->setProcessor("Hp Processor");
}

void HpDesktopBuilder::buildMotherBoard(){
    desktop->setMotherBoard("Hp Mother Board");
}