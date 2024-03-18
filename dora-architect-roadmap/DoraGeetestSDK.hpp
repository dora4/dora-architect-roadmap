//
//  DoraGeetestSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/19.
//

#ifndef DoraGeetestSDK_hpp
#define DoraGeetestSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraGeetestSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}

#endif /* DoraGeetestSDK_hpp */
