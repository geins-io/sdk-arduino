#include "ProductParameterApi.h"

using namespace Tiny;



        Response<
            Envelope
        >
        ProductParameterApi::
        batch_replace_product_parameter_values(
            
            ProductParameter.Models.Write.ProductParameterValueBatch productParameterBatch
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/Values"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | productParameterBatch



            payload = productParameterBatch.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope obj(output_string);


            Response<Envelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope
        >
        ProductParameterApi::
        batch_update_product_parameter_values(
            
            ProductParameter.Models.Write.ProductParameterValueBatch productParameterBatch
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/Values"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | productParameterBatch



            payload = productParameterBatch.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope obj(output_string);


            Response<Envelope> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameterValue
        >
        ProductParameterApi::
        create_or_update_product_parameter_value(
            
            ProductParameter.Models.Write.ProductParameterValue productParameterValue
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/Value"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | productParameterValue



            payload = productParameterValue.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameterValue obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameterValue> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameter
        >
        ProductParameterApi::
        create_product_parameter(
            
            ProductParameter.Models.Write.ProductParameter productParameter
            
        )
        {
            std::string url = basepath + "/API/ProductParameter"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | productParameter



            payload = productParameter.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameter obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameter> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameterGroup
        >
        ProductParameterApi::
        create_product_parameter_group(
            
            ProductParameter.Models.Write.ProductParameterGroup productParameterGroup
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/Group"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | productParameterGroup



            payload = productParameterGroup.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameterGroup obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameterGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue
        >
        ProductParameterApi::
        create_product_parameter_predefined_value(
            
            ProductParameter.Models.Write.ProductParameterPredefinedValue productParameterPredefinedValue
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/PredefinedValue"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | productParameterPredefinedValue



            payload = productParameterPredefinedValue.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameter
        >
        ProductParameterApi::
        get_product_parameter_by_id(
            
            int id
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameter obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameter> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameterGroup
        >
        ProductParameterApi::
        get_product_parameter_group_by_id(
            
            int id
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/Group/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameterGroup obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameterGroup> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameterValue
        >
        ProductParameterApi::
        get_product_parameter_predefined_value(
            
            int id
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/PredefinedValue/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameterValue obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameterValue> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameterValue
        >
        ProductParameterApi::
        get_product_parameter_value(
            
            int id
            , 
            
            std::string predefinedValueId
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/Value/{id}"; //id 


            // Headers  | 

            // Query    | predefinedValueId 
            addQueryParam("predefinedValueId",predefinedValueId);

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameterValue obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameterValue> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameter
        >
        ProductParameterApi::
        update_product_parameter(
            
            int id
            , 
            
            ProductParameter.Models.Write.ProductParameter productParameter
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | productParameter



            payload = productParameter.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameter obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameter> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-ProductParameter.Models.Read.ProductParameterGroup
        >
        ProductParameterApi::
        update_product_parameter_group(
            
            int id
            , 
            
            ProductParameter.Models.Write.ProductParameterGroup productParameterGroup
            
        )
        {
            std::string url = basepath + "/API/ProductParameter/Group/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | productParameterGroup



            payload = productParameterGroup.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-ProductParameter.Models.Read.ProductParameterGroup obj(output_string);


            Response<Envelope-ProductParameter.Models.Read.ProductParameterGroup> response(obj, httpCode);
            return response;
        }



