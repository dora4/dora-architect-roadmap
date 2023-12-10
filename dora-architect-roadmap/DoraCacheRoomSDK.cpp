//
//  DoraCacheRoomSDK.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#include "DoraCacheRoomSDK.hpp"

std::string dora::DoraCacheRoomSDK::GetName() {
    return "dora-room-support";
}

std::string dora::DoraCacheRoomSDK::GetIntroduce() {
    return "https://github.com/dora4/dcache-android Room扩展包。";
}

std::string dora::DoraCacheRoomSDK::GetSampleCode() {
    return "https://github.com/dora4/dcache-room-support/blob/main/README.md";
}

dora::CompleteStatus dora::DoraCacheRoomSDK::GetCompleteStatus() {
    return dora::CompleteStatus::CS_DEV;
}
