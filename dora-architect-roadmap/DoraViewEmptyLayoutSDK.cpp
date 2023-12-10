//
//  DoraViewEmptyLayoutSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewEmptyLayoutSDK.hpp"

std::string dora::DoraViewEmptyLayoutSDK::GetName() {
    return "dview-progress-view";
}

std::string dora::DoraViewEmptyLayoutSDK::GetIntroduce() {
    return "可仿抖音极速版领现金进度条动画";
}

std::string dora::DoraViewEmptyLayoutSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-progress-view/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewEmptyLayoutSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
