//
//  BasePlate.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#include "BasePlate.hpp"
#include <iostream>

void dora::BasePlate::PrintProductsInfo() {
    std::vector<dora::BaseProduct*> prods = GetProducts();
    for (std::vector<dora::BaseProduct*>::const_iterator i = prods.begin(); i != prods.end(); ++i) {
        std::cout << "SDK名称：" << (*i)->GetName() << std::endl;
        std::cout << "SDK介绍：" << (*i)->GetIntroduce() << std::endl;
        std::cout << "示例代码：\n" << (*i)->GetSampleCode() << std::endl;
        std::cout << "----------" << std::endl;
    }
}
