//
//  DoraCachePlate.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#include "DoraCachePlate.hpp"
#include "BaseProduct.hpp"
#include <vector>
#include "DoraCacheSDK.hpp"

std::vector<dora::BaseProduct*> dora::DoraCachePlate::GetProducts() {
    std::vector<dora::BaseProduct*> products;
    products.push_back(new dora::DoraCacheSDK());
    return products;
}
