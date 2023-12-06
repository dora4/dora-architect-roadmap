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

std::vector<BaseProduct*> DoraCachePlate::GetProducts() {
    std::vector<BaseProduct*> products;
    products.push_back(new DoraCacheSDK());
    return products;
}
