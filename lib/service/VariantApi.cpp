#include "VariantApi.h"

using namespace Tiny;



        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        add_product_to_variant_group(
            
            int groupId
            , 
            
            std::string productId
            , 
            std::list<Variant.Models.Write.Variant> variant
            
            , 
            
            int productIdType
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/VariantGroup/{groupId}/{productId}"; //groupId productId 


            // Headers  | 

            // Query    | productIdType include 
            addQueryParam("productIdType",productIdType);
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_groupId("{");
                s_groupId.append("groupId");
                s_groupId.append("}");

                int pos = url.find(s_groupId);

                url.erase(pos, s_groupId.length());
                url.insert(pos, stringify(groupId));
                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | variant


            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : variant)
            {
                auto tmp = var.toJson();
                tmp_arr.append(tmp);

            }
            payload = tmp_arr.dump();


            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        add_product_to_variant_group_by_product_id(
            
            std::string productId1
            , 
            
            std::string productId2
            , 
            
            int productIdType
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Variant/{productId1}/{productId2}"; //productId1 productId2 


            // Headers  | 

            // Query    | productIdType include 
            addQueryParam("productIdType",productIdType);
            addQueryParam("include",include);

            // Form     | 



                std::string s_productId1("{");
                s_productId1.append("productId1");
                s_productId1.append("}");

                int pos = url.find(s_productId1);

                url.erase(pos, s_productId1.length());
                url.insert(pos, stringify(productId1));
                std::string s_productId2("{");
                s_productId2.append("productId2");
                s_productId2.append("}");

                int pos = url.find(s_productId2);

                url.erase(pos, s_productId2.length());
                url.insert(pos, stringify(productId2));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | 
            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        create_variant_group(
            
            Variant.Models.Write.VariantGroup variantGroup
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/VariantGroup"; //


            // Headers  | 

            // Query    | include 
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | variantGroup



            payload = variantGroup.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        create_variant_group_with_product(
            
            std::string productId
            , 
            
            Variant.Models.Write.VariantGroup variantGroup
            , 
            
            int productIdType
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Variant/{productId}/VariantGroup"; //productId 


            // Headers  | 

            // Query    | productIdType include 
            addQueryParam("productIdType",productIdType);
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | variantGroup



            payload = variantGroup.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        delete_variant_group(
            
            int groupId
            
        )
        {
            std::string url = basepath + "/API/VariantGroup/{groupId}"; //groupId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_groupId("{");
                s_groupId.append("groupId");
                s_groupId.append("}");

                int pos = url.find(s_groupId);

                url.erase(pos, s_groupId.length());
                url.insert(pos, stringify(groupId));


            std::string payload = "";
            // Send Request
            // METHOD | DELETE
            // Body     | 
            int httpCode = sendRequest(url, "DELETE", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope
        >
        VariantApi::
        delete_variant_group_by_product_id(
            
            std::string productId
            , 
            
            int productIdType
            
        )
        {
            std::string url = basepath + "/API/Variant/{productId}/VariantGroup"; //productId 


            // Headers  | 

            // Query    | productIdType 
            addQueryParam("productIdType",productIdType);

            // Form     | 



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | DELETE
            // Body     | 
            int httpCode = sendRequest(url, "DELETE", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope obj(output_string);


            Response<Envelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        get_variant_group(
            
            int groupId
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/VariantGroup/{groupId}"; //groupId 


            // Headers  | 

            // Query    | include 
            addQueryParam("include",include);

            // Form     | 



                std::string s_groupId("{");
                s_groupId.append("groupId");
                s_groupId.append("}");

                int pos = url.find(s_groupId);

                url.erase(pos, s_groupId.length());
                url.insert(pos, stringify(groupId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        get_variant_group_by_product_id(
            
            std::string productId
            , 
            
            int productIdType
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Variant/{productId}/VariantGroup"; //productId 


            // Headers  | 

            // Query    | productIdType include 
            addQueryParam("productIdType",productIdType);
            addQueryParam("include",include);

            // Form     | 



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-String
        >
        VariantApi::
        get_variant_labels(
        )
        {
            std::string url = basepath + "/API/Variant/Labels"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-String obj(output_string);


            Response<Envelope-String> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        remove_product_from_variant_group(
            
            std::string productId
            , 
            
            int productIdType
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/Variant/{productId}"; //productId 


            // Headers  | 

            // Query    | productIdType include 
            addQueryParam("productIdType",productIdType);
            addQueryParam("include",include);

            // Form     | 



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | DELETE
            // Body     | 
            int httpCode = sendRequest(url, "DELETE", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.Variant-
        >
        VariantApi::
        update_variant(
            
            std::string productId
            , 
            std::list<Variant.Models.Write.Variant> variant
            
            , 
            
            int productIdType
            
        )
        {
            std::string url = basepath + "/API/Variant/{productId}"; //productId 


            // Headers  | 

            // Query    | productIdType 
            addQueryParam("productIdType",productIdType);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_productId("{");
                s_productId.append("productId");
                s_productId.append("}");

                int pos = url.find(s_productId);

                url.erase(pos, s_productId.length());
                url.insert(pos, stringify(productId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | variant


            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : variant)
            {
                auto tmp = var.toJson();
                tmp_arr.append(tmp);

            }
            payload = tmp_arr.dump();


            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.Variant- obj(output_string);


            Response<Envelope-Variant.Models.Read.Variant-> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Variant.Models.Read.VariantGroup
        >
        VariantApi::
        update_variant_group(
            
            int groupId
            , 
            
            Variant.Models.Write.VariantGroup variantGroup
            , 
            
            std::string include
            
        )
        {
            std::string url = basepath + "/API/VariantGroup/{groupId}"; //groupId 


            // Headers  | 

            // Query    | include 
            addQueryParam("include",include);

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_groupId("{");
                s_groupId.append("groupId");
                s_groupId.append("}");

                int pos = url.find(s_groupId);

                url.erase(pos, s_groupId.length());
                url.insert(pos, stringify(groupId));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | variantGroup



            payload = variantGroup.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Variant.Models.Read.VariantGroup obj(output_string);


            Response<Envelope-Variant.Models.Read.VariantGroup> response(obj, httpCode);
            return response;
        }



