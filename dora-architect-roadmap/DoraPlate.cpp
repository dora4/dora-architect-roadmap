//
//  DoraPlate.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#include "DoraPlate.hpp"
#include <vector>
#include "BaseProduct.hpp"
#include "DoraSDK.hpp"
#include "DoraFirebaseSDK.hpp"

std::vector<BaseProduct*> DoraPlate::GetProducts() {
    std::vector<BaseProduct*> products;
    products.push_back(new DoraSDK());
    products.push_back(new DoraFirebaseSDK());
    return products;
}
