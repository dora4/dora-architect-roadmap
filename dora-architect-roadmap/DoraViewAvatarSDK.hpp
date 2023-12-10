//
//  DoraViewAvatarSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#ifndef DoraViewAvatarSDK_hpp
#define DoraViewAvatarSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraViewAvatarSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraViewAvatarSDK_hpp */
