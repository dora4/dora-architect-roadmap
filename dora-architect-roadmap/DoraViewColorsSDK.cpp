//
//  DoraViewColorsSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewColorsSDK.hpp"

std::string dora::DoraViewColorsSDK::GetName() {
    return "dview-colors";
}

std::string dora::DoraViewColorsSDK::GetIntroduce() {
    return "dora.widget.colors.R.color提供一些app开发常用的颜色";
}

std::string dora::DoraViewColorsSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-colors/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewColorsSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
