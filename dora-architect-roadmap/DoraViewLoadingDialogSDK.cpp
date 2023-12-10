//
//  DoraViewLoadingDialogSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewLoadingDialogSDK.hpp"

std::string dora::DoraViewLoadingDialogSDK::GetName() {
    return "dview-loading-dialog";
}

std::string dora::DoraViewLoadingDialogSDK::GetIntroduce() {
    return "加载进度对话框";
}

std::string dora::DoraViewLoadingDialogSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-loading-dialog/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewLoadingDialogSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
