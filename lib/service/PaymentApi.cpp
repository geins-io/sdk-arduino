#include "PaymentApi.h"

using namespace Tiny;



        Response<
            std::list<Payment.Models.PaymentOption>
        >
        PaymentApi::
        query_payment_options(
            
            Payment.Models.PaymentOptionQuery query
            
        )
        {
            std::string url = basepath + "/API/Payment/Query"; //


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



            std::list<Payment.Models.PaymentOption> obj = std::list<Payment.Models.PaymentOption>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Payment.Models.PaymentOption tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Payment.Models.PaymentOption>> response(obj, httpCode);
            return response;
        }



