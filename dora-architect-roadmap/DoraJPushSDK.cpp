//
//  DoraJpushSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/6.
//

#include "DoraJPushSDK.hpp"

std::string dora::DoraJPushSDK::GetName() {
    return "dora-jpush-support";
}

std::string dora::DoraJPushSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合极光推送";
}

std::string dora::DoraJPushSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-jpush-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraJPushSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_SCHEDULE;
}
