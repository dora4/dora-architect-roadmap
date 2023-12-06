//
//  DoraViewPlate.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#include "DoraViewPlate.hpp"
#include <vector>
#include "DoraViewSkinsSDK.hpp"

std::vector<dora::BaseProduct*> dora::DoraViewPlate::GetProducts() {
    std::vector<dora::BaseProduct*> products;
    products.push_back(new dora::DoraViewSkinsSDK());
    return products;
}
