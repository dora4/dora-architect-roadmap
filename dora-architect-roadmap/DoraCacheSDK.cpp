//
//  DoraCacheSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/6.
//

#include "DoraCacheSDK.hpp"

std::string dora::DoraCacheSDK::GetName() {
    return "dcache-android";
}

std::string dora::DoraCacheSDK::GetIntroduce() {
    return "dcache是一个开源的Android离线数据缓存框架，旨在提供一种简单而高效的方式来缓存网络请求的结果和其他数据，以便在手机没有网络的时候使用历史缓存数据。它可以用于缓存各种类型的数据，包括字符串、JSON、图片、音频和视频等。";
}

std::string dora::DoraCacheSDK::GetSampleCode() {
    return "https://github.com/dora4/dcache-android/blob/master/README.md";
}

dora::CompleteStatus dora::DoraCacheSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
