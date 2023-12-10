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
#include "DoraARouterSDK.hpp"
#include "DoraApolloSDK.hpp"
#include "DoraPgyerSDK.hpp"
#include "DoraGlideSDK.hpp"
#include "DoraBaseRecyclerViewAdapterHelperSDK.hpp"
#include "DoraDaggerSDK.hpp"
#include "DoraSmartRefreshLayoutSDK.hpp"

std::vector<dora::BaseProduct*> dora::DoraPlate::GetProducts() {
    std::vector<dora::BaseProduct*> products;
    products.push_back(new dora::DoraSDK());
    products.push_back(new dora::DoraFirebaseSDK());
    products.push_back(new dora::DoraEventBusSDK());
    products.push_back(new dora::DoraARouterSDK());
    products.push_back(new dora::DoraApolloSDK());
    products.push_back(new dora::DoraPgyerSDK());
    products.push_back(new dora::DoraGlideSDK());
    products.push_back(new dora::DoraBaseRecyclerViewAdapterHelperSDK());
    products.push_back(new dora::DoraDaggerSDK());
    products.push_back(new dora::DoraSmartRefreshLayoutSDK());
    return products;
}
