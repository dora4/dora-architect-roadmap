//
//  DoraViewPlate.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#include "DoraViewPlate.hpp"
#include <vector>
#include "DoraViewSkinsSDK.hpp"

std::vector<BaseProduct*> DoraViewPlate::GetProducts() {
    std::vector<BaseProduct*> products;
    products.push_back(new DoraViewSkinsSDK());
    return products;
}
