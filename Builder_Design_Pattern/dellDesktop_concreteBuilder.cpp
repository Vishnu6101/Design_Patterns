#include "dellDesktop_concreteBuilder.hpp"

void DellDesktopBuilder::buildMonitor(){
    // with the configurations build it
    // actually build the product here
    desktop->setMonitor("Dell Monitor");
}

void DellDesktopBuilder::buildKeyBoard(){
    desktop->setKeyBoard("Dell Key Board");
}

void DellDesktopBuilder::buildMouse(){
    desktop->setMouse("Dell Mouse");
}

void DellDesktopBuilder::buildSpeaker(){
    desktop->setSpeaker("Dell Speaker");
}

void DellDesktopBuilder::buildRam(){
    desktop->setRam("Dell RAM");
}

void DellDesktopBuilder::buildProcessor(){
    desktop->setProcessor("Dell Processor");
}

void DellDesktopBuilder::buildMotherBoard(){
    desktop->setMotherBoard("Dell Mother Board");
}