//
//  DoraDaggerSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraDaggerSDK.hpp"

std::string dora::DoraDaggerSDK::GetName() {
    return "dora-dagger-support";
}

std::string dora::DoraDaggerSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合Dagger依赖注入框架";
}

std::string dora::DoraDaggerSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-dagger-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraDaggerSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
