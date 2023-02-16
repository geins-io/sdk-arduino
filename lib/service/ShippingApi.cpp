#include "ShippingApi.h"

using namespace Tiny;



        Response<
            Envelope-Int
        >
        ShippingApi::
        create_parcel_group(
            
            Shipping.Models.ParcelGroupOptions parcelGroupOptions
            
        )
        {
            std::string url = basepath + "/API/Shipping/ParcelGroup"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | parcelGroupOptions



            payload = parcelGroupOptions.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Int obj(output_string);


            Response<Envelope-Int> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Shipping.Models.ShippingOption>
        >
        ShippingApi::
        query_shipping_options(
            
            Shipping.Models.ShippingQuery shippingQuery
            
        )
        {
            std::string url = basepath + "/API/Shipping/Query"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | shippingQuery



            payload = shippingQuery.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<Shipping.Models.ShippingOption> obj = std::list<Shipping.Models.ShippingOption>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Shipping.Models.ShippingOption tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Shipping.Models.ShippingOption>> response(obj, httpCode);
            return response;
        }



