//
//  DoraBuglySDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/16.
//

#include "DoraBuglySDK.hpp"

std::string dora::DoraBuglySDK::GetName() {
    return "dora-bugly-support";
}

std::string dora::DoraBuglySDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合Bugly崩溃日志收集上报框架";
}

std::string dora::DoraBuglySDK::GetSampleCode() {
    return "https://github.com/dora4/dora-bugly-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraBuglySDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_SCHEDULE;
}
