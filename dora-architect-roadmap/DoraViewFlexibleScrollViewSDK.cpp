//
//  DoraViewFlexibleScrollViewSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraViewFlexibleScrollViewSDK.hpp"

std::string dora::DoraViewFlexibleScrollViewSDK::GetName() {
    return "dview-flexible-scrollview";
}

std::string dora::DoraViewFlexibleScrollViewSDK::GetIntroduce() {
    return "一个带有回弹效果的ScrollView容器";
}

std::string dora::DoraViewFlexibleScrollViewSDK::GetSampleCode() {
    return "https://github.com/dora4/dview-flexible-scrollview/blob/main/README.md";
}

dora::CompleteStatus dora::DoraViewFlexibleScrollViewSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
