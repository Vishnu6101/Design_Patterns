#ifndef DESKTOPBUILDER_H
#define DESKTOPBUILDER_H

#include "desktop.hpp"


// Builder class code
// we need a product in this builder
// the product needs to be accessed by all the concrete builders (inherited classes)
// Thats why Creating the product in protected mode
class DesktopBuilder{
    protected:
        Desktop* desktop; // our product

    public:
        // initialize the Product in the DesktopBuilder
        // as soon as the builder is created the product is created but this is a 
        // simple product with no configurations. The configs will be given in concreteBuilder

        DesktopBuilder(){
            desktop = new Desktop();
        }

        // adding the parts that have to be configured
        // all are pure virtual functions as it has to be implemented by the concreteBuilder
        virtual void buildMonitor() = 0;
        virtual void buildKeyBoard() = 0;
        virtual void buildMouse() = 0;
        virtual void buildSpeaker() = 0;
        virtual void buildRam() = 0;
        virtual void buildProcessor() = 0;
        virtual void buildMotherBoard() = 0;

        // getter to get the desktop (getter of the product)
        // we can also add the getter of the product in concreteBuilder that will be useful if
        // we are building products of  different return types like car, two-wheeler
        // here all are of desktop types os we can defind the getter here
        
        // making it virtual (for overriding purpose if needed)
        virtual Desktop* getDesktop(){
            return desktop;
        }
};

#endif