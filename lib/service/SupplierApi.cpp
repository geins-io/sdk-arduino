#include "SupplierApi.h"

using namespace Tiny;



        Response<
            Envelope-Supplier.Models.Read.Supplier
        >
        SupplierApi::
        create_supplier(
            
            Supplier.Models.Write.Supplier supplier
            
        )
        {
            std::string url = basepath + "/API/Supplier"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | supplier



            payload = supplier.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Supplier.Models.Read.Supplier obj(output_string);


            Response<Envelope-Supplier.Models.Read.Supplier> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Supplier.Models.Read.Supplier
        >
        SupplierApi::
        get_supplier_by_id(
            
            int id
            
        )
        {
            std::string url = basepath + "/API/Supplier/{id}"; //id 


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




            Envelope-Supplier.Models.Read.Supplier obj(output_string);


            Response<Envelope-Supplier.Models.Read.Supplier> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Supplier.Models.Read.Supplier>
        >
        SupplierApi::
        query_suppliers(
            
            Supplier.Models.SupplierQuery query
            
        )
        {
            std::string url = basepath + "/API/Supplier/Query"; //


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



            std::list<Supplier.Models.Read.Supplier> obj = std::list<Supplier.Models.Read.Supplier>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Supplier.Models.Read.Supplier tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Supplier.Models.Read.Supplier>> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-Supplier.Models.Read.Supplier
        >
        SupplierApi::
        update_supplier(
            
            int id
            , 
            
            Supplier.Models.Write.Supplier supplier
            
        )
        {
            std::string url = basepath + "/API/Supplier/{id}"; //id 


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
            // Body     | supplier



            payload = supplier.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Supplier.Models.Read.Supplier obj(output_string);


            Response<Envelope-Supplier.Models.Read.Supplier> response(obj, httpCode);
            return response;
        }



