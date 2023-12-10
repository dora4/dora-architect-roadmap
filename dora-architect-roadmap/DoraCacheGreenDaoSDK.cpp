//
//  DoraCacheGreenDaoSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraCacheGreenDaoSDK.hpp"

std::string dora::DoraCacheGreenDaoSDK::GetName() {
    return "dora-greendao-support";
}

std::string dora::DoraCacheGreenDaoSDK::GetIntroduce() {
    return "https://github.com/dora4/dcache-android GreenDao扩展包。";
}

std::string dora::DoraCacheGreenDaoSDK::GetSampleCode() {
    return "https://github.com/dora4/dcache-greendao-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraCacheGreenDaoSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
