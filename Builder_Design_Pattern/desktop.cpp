#include "desktop.hpp"
#include <iostream>

void Desktop::setMonitor(string pMonitor){
    this->monitor = pMonitor;
}

void Desktop::setKeyBoard(string pKeyBoard){
    this->keyboard = pKeyBoard;
}

void Desktop::setMouse(string pMouse){
    this->mouse = pMouse;
}

void Desktop::setSpeaker(string pSpeaker){
    this->speaker = pSpeaker;
}

void Desktop::setRam(string pRam){
    this->ram = pRam;
}

void Desktop::setProcessor(string pProcessor){
    this->processor = pProcessor;
}

void Desktop::setMotherBoard(string pMotherBoard){
    this->motherboard = pMotherBoard;
}

void Desktop::showSpecs(){
    cout << "------------------------------------------------------" << endl;
    cout << "Monitor " << this->monitor << endl;
    cout << "Key Board " << this->keyboard << endl;
    cout << "Mouse " << this->mouse << endl;
    cout << "Speaker " << this->speaker << endl;
    cout << "RAM " << this->ram << endl;
    cout << "Processor " << this->processor << endl;
    cout << "Mother Board " << this->motherboard << endl;
    cout << "------------------------------------------------------" << endl;
}