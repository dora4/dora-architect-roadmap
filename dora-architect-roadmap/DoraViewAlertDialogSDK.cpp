//
//  DoraViewAlertDialogSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewAlertDialogSDK.hpp"

std::string dora::DoraViewAlertDialogSDK::GetName() {
    return "dview-alert-dialog";
}

std::string dora::DoraViewAlertDialogSDK::GetIntroduce() {
    return "简单提示信息弹窗";
}

std::string dora::DoraViewAlertDialogSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-alert-dialog/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewAlertDialogSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
