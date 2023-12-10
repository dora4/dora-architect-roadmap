//
//  DoraViewClearEditTextSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewClearEditTextSDK.hpp"

std::string dora::DoraViewClearEditTextSDK::GetName() {
    return "dview-clear-edittext";
}

std::string dora::DoraViewClearEditTextSDK::GetIntroduce() {
    return "右侧点击小”x“按钮清空文本框";
}

std::string dora::DoraViewClearEditTextSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-clear-edittext/blob/master/README.md";
}

dora::CompleteStatus dora::DoraViewClearEditTextSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
