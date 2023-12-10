//
//  DoraARouterSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraARouterSDK.hpp"

std::string dora::DoraARouterSDK::GetName() {
    return "dora-arouter-support";
}

std::string dora::DoraARouterSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合ARouter模块化、组件化路由框架";
}

std::string dora::DoraARouterSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-arouter-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraARouterSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
