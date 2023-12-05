//
//  main.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/5.
//

#include "DoraPlate.hpp"
#include "DoraCachePlate.hpp"
#include "DoraViewPlate.hpp"

int main(int argc, const char * argv[]) {
    auto dora = new DoraPlate();
    auto dcache = new DoraCachePlate();
    auto dview = new DoraViewPlate();
    dora->PrintProductsInfo();
    dcache->PrintProductsInfo();
    dview->PrintProductsInfo();
    return 0;
}
