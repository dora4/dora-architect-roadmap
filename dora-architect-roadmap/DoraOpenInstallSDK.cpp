//
//  DoraOpenInstallSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/9.
//

#include "DoraOpenInstallSDK.hpp"

std::string dora::DoraOpenInstallSDK::GetName() {
    return "dora-openinstall-support";
}

std::string dora::DoraOpenInstallSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合OpenInstall推广营销框架";
}

std::string dora::DoraOpenInstallSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-openinstall-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraOpenInstallSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_SCHEDULE;
}
