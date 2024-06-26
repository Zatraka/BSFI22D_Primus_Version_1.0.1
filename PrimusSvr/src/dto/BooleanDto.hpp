#ifndef BOOLEANDTO_HPP
#define BOOLEANDTO_HPP

#include "oatpp/core/Types.hpp"
#include "oatpp/core/macro/codegen.hpp"

namespace primus
{
    namespace dto
    {

#include OATPP_CODEGEN_BEGIN(DTO)
        //  ____              _                  ____  _        
        // | __ )  ___   ___ | | ___  __ _ _ __ |  _ \| |_ ___  
        // |  _ \ / _ \ / _ \| |/ _ \/ _` | '_ \| | | | __/ _ \ 
        // | |_) | (_) | (_) | |  __/ (_| | | | | |_| | || (_) |
        // |____/ \___/ \___/|_|\___|\__,_|_| |_|____/ \__\___/ 
        /**
        * @brief DTO class representing a boolean value.
        */
        class BooleanDto : public oatpp::DTO
        {

            DTO_INIT(BooleanDto, DTO);

            DTO_FIELD_INFO(value) {
                info->description = "Boolean value";
            }
            DTO_FIELD(oatpp::Boolean, value);

        };

#include OATPP_CODEGEN_END(DTO)

    } // namespace dto
} // namespace primus

#endif // BOOLEANDTO_HPP