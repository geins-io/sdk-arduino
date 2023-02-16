#include "BrandApi.h"

using namespace Tiny;



        Response<
            Envelope-Brand.Models.Read.Brand
        >
        BrandApi::
        create_brand(
            
            Brand.Models.Write.Brand brand
            
        )
        {
            std::string url = basepath + "/API/Brand"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | brand



            payload = brand.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Brand.Models.Read.Brand obj(output_string);


            Response<Envelope-Brand.Models.Read.Brand> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Brand.Models.Read.Brand
        >
        BrandApi::
        get_brand_by_id(
            
            int id
            
        )
        {
            std::string url = basepath + "/API/Brand/{id}"; //id 


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




            Envelope-Brand.Models.Read.Brand obj(output_string);


            Response<Envelope-Brand.Models.Read.Brand> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Brand.Models.Read.Brand>
        >
        BrandApi::
        query_brands(
            
            Brand.Models.BrandQuery query
            
        )
        {
            std::string url = basepath + "/API/Brand/Query"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | query



            payload = query.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<Brand.Models.Read.Brand> obj = std::list<Brand.Models.Read.Brand>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Brand.Models.Read.Brand tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Brand.Models.Read.Brand>> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Brand.Models.Read.Brand
        >
        BrandApi::
        update_brand(
            
            int id
            , 
            
            Brand.Models.Write.Brand brand
            
        )
        {
            std::string url = basepath + "/API/Brand/{id}"; //id 


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
            // Body     | brand



            payload = brand.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Brand.Models.Read.Brand obj(output_string);


            Response<Envelope-Brand.Models.Read.Brand> response(obj, httpCode);
            return response;
        }



