#ifndef DELLDESKTOPBULDER_H
#define DELLDESKTOPBULDER_H

#include "desktop_Builder.hpp"

// code for concrete builder class
class DellDesktopBuilder : public DesktopBuilder{
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif