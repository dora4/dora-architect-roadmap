//
//  DoraViewTitleBarSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewTitleBarSDK.hpp"

std::string dora::DoraViewTitleBarSDK::GetName() {
    return "dview-titlebar";
}

std::string dora::DoraViewTitleBarSDK::GetIntroduce() {
    return "仿微信标题栏";
}

std::string dora::DoraViewTitleBarSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-titlebar/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewTitleBarSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
