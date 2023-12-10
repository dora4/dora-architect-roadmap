//
//  DoraViewEmptyLayoutSDK.hpp
//  dora-architect-roadmap
//
//  Created by dora on 2023/12/10.
//

#ifndef DoraViewEmptyLayoutSDK_hpp
#define DoraViewEmptyLayoutSDK_hpp

#include "BaseProduct.hpp"
#include <string>

namespace dora {

    class DoraViewEmptyLayoutSDK : public BaseProduct {
    public:
        virtual std::string GetName() override;
        virtual std::string GetIntroduce() override;
        virtual std::string GetSampleCode() override;
        virtual CompleteStatus GetCompleteStatus() override;
    };
}
#endif /* DoraViewEmptyLayoutSDK_hpp */
