//
//  DoraViewColorsSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#ifndef DoraViewColorsSDK_hpp
#define DoraViewColorsSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraViewColorsSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraViewColorsSDK_hpp */
