//
//  DoraApolloSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraApolloSDK.hpp"

std::string dora::DoraApolloSDK::GetName() {
    return "dora-apollo-support";
}

std::string dora::DoraApolloSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合Apollo消息通信框架";
}

std::string dora::DoraApolloSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-apollo-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraApolloSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
