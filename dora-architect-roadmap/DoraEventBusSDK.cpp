//
//  DoraEventBusSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/9.
//

#include "DoraEventBusSDK.hpp"

std::string dora::DoraEventBusSDK::GetName() {
    return "dora-eventbus-support";
}

std::string dora::DoraEventBusSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合EventBus事件通信框架。过时停止维护，由于不支持和带Activity的第三方SDK同时使用，如XXPermissions请求通知栏权限会打开它的Activity，而这个Activity没有配置eventbus相关注解。建议使用https://github.com/dora4/dora-apollo-support 替代。";
}

std::string dora::DoraEventBusSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-eventbus-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraEventBusSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_COMPLETED;
}
