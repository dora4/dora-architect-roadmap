//
//  DoraSmartRefreshLayoutSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraSmartRefreshLayoutSDK.hpp"

std::string dora::DoraSmartRefreshLayoutSDK::GetName() {
    return "dora-srl-support";
}

std::string dora::DoraSmartRefreshLayoutSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合SmartRefreshLayout下拉刷新上拉加载框架";
}

std::string dora::DoraSmartRefreshLayoutSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-srl-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraSmartRefreshLayoutSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
