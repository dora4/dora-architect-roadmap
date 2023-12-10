//
//  DoraBaseRecyclerViewAdapterHelperSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraBaseRecyclerViewAdapterHelperSDK.hpp"

std::string dora::DoraBaseRecyclerViewAdapterHelperSDK::GetName() {
    return "dora-brvah-support";
}

std::string dora::DoraBaseRecyclerViewAdapterHelperSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合BaseRecyclerViewAdapterHelper列表适配器框架";
}

std::string dora::DoraBaseRecyclerViewAdapterHelperSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-glide-support/blob/master/README.md";
}

dora::CompleteStatus dora::DoraBaseRecyclerViewAdapterHelperSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
