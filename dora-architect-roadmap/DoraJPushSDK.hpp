//
//  DoraJPushSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/6.
//

#ifndef DoraJPushSDK_hpp
#define DoraJPushSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraJPushSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraJPushSDK_hpp */
