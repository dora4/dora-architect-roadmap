//
//  DoraViewProgressViewSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewProgressViewSDK.hpp"

std::string dora::DoraViewProgressViewSDK::GetName() {
    return "dview-progress-view";
}

std::string dora::DoraViewProgressViewSDK::GetIntroduce() {
    return "可仿抖音极速版领现金进度条动画";
}

std::string dora::DoraViewProgressViewSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-progress-view/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewProgressViewSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
