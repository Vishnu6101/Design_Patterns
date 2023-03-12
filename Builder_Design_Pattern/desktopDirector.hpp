#ifndef DESKTOPDIRECTOR
#define DESKTOPDIRECTOR

#include "desktop_Builder.hpp"

// a builder will be sent to the director and the director will use the builder 
// to create our product

// we need builder as a member
// Builder has product, Director has Builder
// Director will use the Builder to build the Product
class DesktopDirector{
    private:
        DesktopBuilder* desktopBuilder; // builder member
    public:
        // we are passing a builder to this director
        // assign the builder to that member
        DesktopDirector(DesktopBuilder* pDesktopBuilder){
            this->desktopBuilder = pDesktopBuilder;
        }

        // function of the director -- process by which ourproduct will be built
        // direct the entire process and returns the product
        Desktop* buildDesktop(){
            // call the build functions one by one in the order we want to build the product
            desktopBuilder->buildMonitor();
            desktopBuilder->buildKeyBoard();
            desktopBuilder->buildMouse();
            desktopBuilder->buildSpeaker();
            desktopBuilder->buildRam();
            desktopBuilder->buildProcessor();
            desktopBuilder->buildMotherBoard();
            return desktopBuilder->getDesktop(); // returns the product
        }

        // the buildDesktop function can be used to just build and a separate 
        // function can be implemented to get the product
};

#endif