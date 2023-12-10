//
//  DoraGlideSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraGlideSDK.hpp"

std::string dora::DoraGlideSDK::GetName() {
    return "dora-glide-support";
}

std::string dora::DoraGlideSDK::GetIntroduce() {
    return "Dora MVVM框架扩展包 - 用于整合Glide图片加载框架";
}

std::string dora::DoraGlideSDK::GetSampleCode() {
    return "https://github.com/dora4/dora-glide-support/blob/master/README.md";
}

dora::CompleteStatus dora::DoraGlideSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
