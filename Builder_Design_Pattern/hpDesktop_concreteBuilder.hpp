#ifndef HPDESKTOPBUILDER_H
#define HPDESKTOPBUILDER_H

#include "desktop_Builder.hpp"

// concrete class code
class HpDesktopBuilder : public DesktopBuilder{
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif