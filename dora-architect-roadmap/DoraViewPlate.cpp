//
//  DoraViewPlate.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#include "DoraViewPlate.hpp"
#include <vector>
#include "DoraViewTitleBarSDK.hpp"
#include "DoraViewToggleButtonSDK.hpp"
#include "DoraViewAvatarSDK.hpp"
#include "DoraViewBottomDialogSDK.hpp"
#include "DoraViewClearEditTextSDK.hpp"
#include "DoraViewProgressViewSDK.hpp"
#include "DoraViewAlertDialogSDK.hpp"
#include "DoraViewLoadingDialogSDK.hpp"
#include "DoraViewEmptyLayoutSDK.hpp"
#include "DoraViewFlexibleScrollViewSDK.hpp"
#include "DoraViewColorsSDK.hpp"
#include "DoraViewSkinsSDK.hpp"

std::vector<dora::BaseProduct*> dora::DoraViewPlate::GetProducts() {
    std::vector<dora::BaseProduct*> products;
    products.push_back(new dora::DoraViewTitleBarSDK());
    products.push_back(new dora::DoraViewToggleButtonSDK());
    products.push_back(new dora::DoraViewAvatarSDK());
    products.push_back(new dora::DoraViewBottomDialogSDK());
    products.push_back(new dora::DoraViewClearEditTextSDK());
    products.push_back(new dora::DoraViewProgressViewSDK());
    products.push_back(new dora::DoraViewAlertDialogSDK());
    products.push_back(new dora::DoraViewLoadingDialogSDK());
    products.push_back(new dora::DoraViewEmptyLayoutSDK());
    products.push_back(new dora::DoraViewFlexibleScrollViewSDK());
    products.push_back(new dora::DoraViewColorsSDK());
    products.push_back(new dora::DoraViewSkinsSDK());
    return products;
}
