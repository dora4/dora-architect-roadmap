//
//  DoraGeetestSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/19.
//

#include "DoraGeetestSDK.hpp"

std::string dora::DoraGeetestSDK::GetName() {
    return "dora-geetest-support";
}

std::string dora::DoraGeetestSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合极验行为验证码";
}

std::string dora::DoraGeetestSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-geetest-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraGeetestSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_SCHEDULE;
}
