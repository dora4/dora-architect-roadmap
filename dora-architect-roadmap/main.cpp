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
    auto dora = new dora::DoraPlate();
    auto dcache = new dora::DoraCachePlate();
    auto dview = new dora::DoraViewPlate();
    // 打印dora板块的信息
    dora->PrintProductsInfo();
    // 打印dcache板块的信息
    dcache->PrintProductsInfo();
    // 打印dview板块的信息
    dview->PrintProductsInfo();
    delete dora;
    delete dcache;
    delete dview;
    return 0;
}
