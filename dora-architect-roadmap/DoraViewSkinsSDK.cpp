//
//  DoraViewSkinsSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/6.
//

#include "DoraViewSkinsSDK.hpp"

std::string dora::DoraViewSkinsSDK::GetName() {
    return "dview-skins";
}

std::string dora::DoraViewSkinsSDK::GetIntroduce() {
    return "一款好用的Android换肤框架";
}

std::string dora::DoraViewSkinsSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-skins/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewSkinsSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
