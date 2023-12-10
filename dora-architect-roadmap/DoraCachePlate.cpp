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
#include "DoraCacheRoomSDK.hpp"
#include "DoraCacheGreenDaoSDK.hpp"

std::vector<dora::BaseProduct*> dora::DoraCachePlate::GetProducts() {
    std::vector<dora::BaseProduct*> products;
    products.push_back(new dora::DoraCacheSDK());
    products.push_back(new dora::DoraCacheRoomSDK());
    products.push_back(new dora::DoraCacheGreenDaoSDK());
    return products;
}
