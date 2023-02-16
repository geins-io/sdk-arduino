#include "PageAreaApi.h"

using namespace Tiny;



        Response<
            Envelope-PageArea.Models.Read.PageArea
        >
        PageAreaApi::
        create_or_update_a_page_area(
            
            PageArea.Models.Write.PageArea area
            
        )
        {
            std::string url = basepath + "/API/PageArea"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | area



            payload = area.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-PageArea.Models.Read.PageArea obj(output_string);


            Response<Envelope-PageArea.Models.Read.PageArea> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-PageArea.Models.Read.PageAreaFamily
        >
        PageAreaApi::
        create_or_update_page_area_family(
            
            PageArea.Models.Write.PageAreaFamily family
            
        )
        {
            std::string url = basepath + "/API/PageAreaFamily"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | family



            payload = family.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-PageArea.Models.Read.PageAreaFamily obj(output_string);


            Response<Envelope-PageArea.Models.Read.PageAreaFamily> response(obj, httpCode);
            return response;
        }

        Response<
            PageArea.Models.Read.PageArea
        >
        PageAreaApi::
        get_page_area(
            
            std::string name
            
        )
        {
            std::string url = basepath + "/API/PageArea/{name}"; //name 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_name("{");
                s_name.append("name");
                s_name.append("}");

                int pos = url.find(s_name);

                url.erase(pos, s_name.length());
                url.insert(pos, stringify(name));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            PageArea.Models.Read.PageArea obj(output_string);


            Response<PageArea.Models.Read.PageArea> response(obj, httpCode);
            return response;
        }

        Response<
            PageArea.Models.Read.PageAreaFamily
        >
        PageAreaApi::
        get_page_area_family(
            
            int familyId
            
        )
        {
            std::string url = basepath + "/API/PageAreaFamily/{familyId}"; //familyId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_familyId("{");
                s_familyId.append("familyId");
                s_familyId.append("}");

                int pos = url.find(s_familyId);

                url.erase(pos, s_familyId.length());
                url.insert(pos, stringify(familyId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            PageArea.Models.Read.PageAreaFamily obj(output_string);


            Response<PageArea.Models.Read.PageAreaFamily> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<PageArea.Models.Read.PageAreaFamily>
        >
        PageAreaApi::
        list_page_area_families(
        )
        {
            std::string url = basepath + "/API/PageAreaFamily/List"; //


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



            std::list<PageArea.Models.Read.PageAreaFamily> obj = std::list<PageArea.Models.Read.PageAreaFamily>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                PageArea.Models.Read.PageAreaFamily tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<PageArea.Models.Read.PageAreaFamily>> response(obj, httpCode);
            return response;
        }



