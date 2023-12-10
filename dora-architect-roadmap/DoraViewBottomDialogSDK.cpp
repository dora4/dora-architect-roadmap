//
//  DoraViewBottomDialogSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewBottomDialogSDK.hpp"

std::string dora::DoraViewBottomDialogSDK::GetName() {
    return "dview-bottom-dialog";
}

std::string dora::DoraViewBottomDialogSDK::GetIntroduce() {
    return "底部弹窗";
}

std::string dora::DoraViewBottomDialogSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-bottom-dialog/blob/master/README.md";
}

dora::CompleteStatus dora::DoraViewBottomDialogSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
