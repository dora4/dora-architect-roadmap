//
//  DoraViewToggleButtonSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#ifndef DoraViewToggleButtonSDK_hpp
#define DoraViewToggleButtonSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraViewToggleButtonSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraViewToggleButtonSDK_hpp */
