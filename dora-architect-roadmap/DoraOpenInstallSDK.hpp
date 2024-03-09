//
//  DoraOpenInstallSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2024/3/9.
//

#ifndef DoraOpenInstallSDK_hpp
#define DoraOpenInstallSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraOpenInstallSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraOpenInstallSDK_hpp */
