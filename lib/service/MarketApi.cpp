#include "MarketApi.h"

using namespace Tiny;



        Response<
            Envelope-Market.Models.Market
        >
        MarketApi::
        get_market_by_id(
            
            std::string marketId
            , 
            
            int marketIdType
            
        )
        {
            std::string url = basepath + "/API/Market/{marketId}"; //marketId 


            // Headers  | 

            // Query    | marketIdType 
            addQueryParam("marketIdType",marketIdType);

            // Form     | 



                std::string s_marketId("{");
                s_marketId.append("marketId");
                s_marketId.append("}");

                int pos = url.find(s_marketId);

                url.erase(pos, s_marketId.length());
                url.insert(pos, stringify(marketId));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-Market.Models.Market obj(output_string);


            Response<Envelope-Market.Models.Market> response(obj, httpCode);
            return response;
        }

        Response<
            Market.Models.Market
        >
        MarketApi::
        list_markets(
        )
        {
            std::string url = basepath + "/API/Market/List"; //


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




            Market.Models.Market obj(output_string);


            Response<Market.Models.Market> response(obj, httpCode);
            return response;
        }



