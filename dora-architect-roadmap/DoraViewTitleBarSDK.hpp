//
//  DoraViewTitleBarSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#ifndef DoraViewTitleBarSDK_hpp
#define DoraViewTitleBarSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraViewTitleBarSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraViewTitleBarSDK_hpp */
