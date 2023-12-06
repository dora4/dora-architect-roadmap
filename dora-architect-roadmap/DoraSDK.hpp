//
//  DoraSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/5.
//

#ifndef DoraSDK_hpp
#define DoraSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
    };
}

#endif /* DoraSDK_hpp */
