//
//  DoraPgyerSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraPgyerSDK.hpp"

std::string dora::DoraPgyerSDK::GetName() {
    return "dora-pgyer-support";
}

std::string dora::DoraPgyerSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合蒲公英产品增长运营框架";
}

std::string dora::DoraPgyerSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-pgyer-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraPgyerSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
