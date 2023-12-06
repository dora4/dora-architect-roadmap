//
//  DoraFirebaseSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/6.
//

#ifndef DoraFirebaseSDK_hpp
#define DoraFirebaseSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraFirebaseSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
    };
}

#endif /* DoraFirebaseSDK_hpp */
