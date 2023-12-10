//
//  DoraViewAvatarSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewAvatarSDK.hpp"

std::string dora::DoraViewAvatarSDK::GetName() {
    return "dview-avatar";
}

std::string dora::DoraViewAvatarSDK::GetIntroduce() {
    return "可自动裁剪圆形或圆角矩形头像的控件";
}

std::string dora::DoraViewAvatarSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-avatar/blob/master/README.md";
}

dora::CompleteStatus dora::DoraViewAvatarSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
