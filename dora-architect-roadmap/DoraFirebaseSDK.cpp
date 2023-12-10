//
//  DoraFirebaseSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/6.
//

#include "DoraFirebaseSDK.hpp"

std::string dora::DoraFirebaseSDK::GetName() {
    return "dora-firebase-support";
}

std::string dora::DoraFirebaseSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合Firebase产品增长运营框架";
}

std::string dora::DoraFirebaseSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-firebase-support/blob/master/README.md";
}

dora::CompleteStatus dora::DoraFirebaseSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
