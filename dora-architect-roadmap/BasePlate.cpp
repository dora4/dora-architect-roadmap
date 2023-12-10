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
    std::string completeStatus = "";
    for (std::vector<dora::BaseProduct*>::const_iterator i = prods.begin(); i != prods.end(); ++i) {
        if ((*i)->GetCompleteStatus() == CS_SCHEDULE) {
            completeStatus = "【规划中】";
        } else if ((*i)->GetCompleteStatus() == CS_DEV) {
            completeStatus = "【开发中】";
        } else if ((*i)->GetCompleteStatus() == CS_COMPLETED) {
            completeStatus = "【已完成】";
        }
        std::cout << "SDK名称：" << (*i)->GetName() << completeStatus << std::endl;
        std::cout << "SDK介绍：" << (*i)->GetIntroduce() << std::endl;
        std::cout << "示例代码：\n" << (*i)->GetSampleCode() << std::endl;
        std::cout << "----------" << std::endl;
    }
}
