//
//  DoraViewToggleButtonSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewToggleButtonSDK.hpp"

std::string dora::DoraViewToggleButtonSDK::GetName() {
    return "dview-toggle-button";
}

std::string dora::DoraViewToggleButtonSDK::GetIntroduce() {
    return "一个更灵活拖拽的ToggleButton";
}

std::string dora::DoraViewToggleButtonSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-toggle-button/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewToggleButtonSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
