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
#include "DoraEventBusSDK.hpp"

std::vector<dora::BaseProduct*> dora::DoraPlate::GetProducts() {
    std::vector<dora::BaseProduct*> products;
    products.push_back(new dora::DoraSDK());
    products.push_back(new dora::DoraFirebaseSDK());
    products.push_back(new dora::DoraEventBusSDK());
    return products;
}
