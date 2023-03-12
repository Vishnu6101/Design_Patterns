#ifndef desktop_h
#define desktop_h

#include<string>
using namespace std;

// Product class code
// we write what are the parts that are going to be there in desktop
class Desktop{
    // all the parts of the Desktop
    // just for simplicity all are strings
    string monitor;
    string keyboard;
    string mouse;
    string speaker;
    string ram;
    string processor;
    string motherboard;

    // we need setters to set these parts
    public:
        void setMonitor(string pMonitor);
        void setKeyBoard(string pkeyBoard);
        void setMouse(string pMouse);
        void setSpeaker(string pSpeaker);
        void setRam(string pRam);
        void setProcessor(string pProcessor);
        void setMotherBoard(string pMotherBoard);

        // function to print the specs
        void showSpecs();
};

#endif