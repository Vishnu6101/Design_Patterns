#include "desktopDirector.hpp"
#include "dellDesktop_concreteBuilder.hpp"
#include "hpDesktop_concreteBuilder.hpp"

int main(){
    // 2 builders & 2 directors to build 2 products

    // Builders
    HpDesktopBuilder* hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    // Directors
    DesktopDirector* hpDirector = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector* dellDirector = new DesktopDirector(dellDesktopBuilder);

    // now directors can build the desktop
    Desktop* hpDesktop = hpDirector->buildDesktop();
    Desktop* dellDesktop = dellDirector->buildDesktop();

    // specs
    hpDesktop->showSpecs();
    dellDesktop->showSpecs();
    return 0;
}