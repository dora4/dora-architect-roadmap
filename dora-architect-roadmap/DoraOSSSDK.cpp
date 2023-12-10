//
//  DoraOSSSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraOSSSDK.hpp"

std::string dora::DoraOSSSDK::GetName() {
    return "dora-oss-support";
}

std::string dora::DoraOSSSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合阿里云OSS存储桶";
}

std::string dora::DoraOSSSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-oss-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraOSSSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_SCHEDULE;
}
