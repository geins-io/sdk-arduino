#include "CategoryApi.h"

using namespace Tiny;



        Response<
            Envelope-Category.Models.Read.Category
        >
        CategoryApi::
        create_category(
            
            Category.Models.Write.Category category
            
        )
        {
            std::string url = basepath + "/API/Category"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | category



            payload = category.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Category.Models.Read.Category obj(output_string);


            Response<Envelope-Category.Models.Read.Category> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Category.Models.Read.Category
        >
        CategoryApi::
        get_category_by_id(
            
            int id
            
        )
        {
            std::string url = basepath + "/API/Category/{id}"; //id 


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




            Envelope-Category.Models.Read.Category obj(output_string);


            Response<Envelope-Category.Models.Read.Category> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Category.Models.Read.Category>
        >
        CategoryApi::
        query_categories(
            
            Category.Models.CategoryQuery query
            
        )
        {
            std::string url = basepath + "/API/Category/Query"; //


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



            std::list<Category.Models.Read.Category> obj = std::list<Category.Models.Read.Category>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Category.Models.Read.Category tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Category.Models.Read.Category>> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Category.Models.Read.Category
        >
        CategoryApi::
        update_category(
            
            int id
            , 
            
            Category.Models.Write.Category category
            
        )
        {
            std::string url = basepath + "/API/Category/{id}"; //id 


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
            // Body     | category



            payload = category.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Category.Models.Read.Category obj(output_string);


            Response<Envelope-Category.Models.Read.Category> response(obj, httpCode);
            return response;
        }



