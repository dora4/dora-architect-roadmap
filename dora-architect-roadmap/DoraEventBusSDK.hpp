//
//  DoraEventBusSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/9.
//

#ifndef DoraEventBusSDK_hpp
#define DoraEventBusSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraEventBusSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
    };
}
#endif /* DoraEventBusSDK_hpp */
