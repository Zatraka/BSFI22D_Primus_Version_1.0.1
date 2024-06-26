
#ifndef SwaggerComponent_hpp
#define SwaggerComponent_hpp

#include "oatpp-swagger/Model.hpp"
#include "oatpp-swagger/Resources.hpp"
#include "oatpp/core/macro/component.hpp"

namespace primus
{
    namespace component
    {
        /**
         *  Swagger ui is served at
         *  http://host:port/swagger/ui
         */
        class SwaggerComponent {
        public:

            /**
             *  General API docs info
             */
            OATPP_CREATE_COMPONENT(std::shared_ptr<oatpp::swagger::DocumentInfo>, swaggerDocumentInfo)([] {

                oatpp::swagger::DocumentInfo::Builder builder;

                builder
                    .setTitle("Primus")
                    .setDescription("Swagger documentation for the primus project")
                    .setVersion("1.0")
                    .setContactName("Sascha Meissner")
                    .setContactUrl("https://thesascham.github.io/Website/")

                    .setLicenseName("Apache License, Version 2.0")
                    .setLicenseUrl("http://www.apache.org/licenses/LICENSE-2.0")

                    .addServer("http://localhost:8000", "server on localhost");

                return builder.build();

                }());

            /**
             *  Swagger-Ui Resources (<oatpp-examples>/lib/oatpp-swagger/res)
             */
            OATPP_CREATE_COMPONENT(std::shared_ptr<oatpp::swagger::Resources>, swaggerResources)([] {
                // Make sure to specify correct full path to oatpp-swagger/res folder !!!
                return oatpp::swagger::Resources::loadResources(OATPP_SWAGGER_RES_PATH);
                }());

        };
    } //namespace component
} // namespace primus

#endif /* SwaggerComponent_hpp */
