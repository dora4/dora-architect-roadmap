//
//  BaseProduct.cpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/2.
//

#include "BaseProduct.hpp"

dora::CompleteStatus dora::BaseProduct::GetCompleteStatus() {
    return dora::CompleteStatus::CS_SCHEDULE;
}
