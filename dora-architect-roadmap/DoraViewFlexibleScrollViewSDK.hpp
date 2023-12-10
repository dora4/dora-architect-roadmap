//
//  DoraViewFlexibleScrollViewSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#ifndef DoraViewFlexibleScrollViewSDK_hpp
#define DoraViewFlexibleScrollViewSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraViewFlexibleScrollViewSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraViewFlexibleScrollViewSDK_hpp */
