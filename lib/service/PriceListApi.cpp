#include "PriceListApi.h"

using namespace Tiny;



        Response<
            std::list<PriceList.Models.PriceList>
        >
        PriceListApi::
        list_price_lists(
        )
        {
            std::string url = basepath + "/API/PriceList/List"; //


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



            std::list<PriceList.Models.PriceList> obj = std::list<PriceList.Models.PriceList>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                PriceList.Models.PriceList tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<PriceList.Models.PriceList>> response(obj, httpCode);
            return response;
        }

        Response<
            PriceList.Models.PriceListPriceResponse
        >
        PriceListApi::
        update_pricelist_prices(
            std::list<PriceList.Models.Write.PriceListPrice> priceListPrices
            
            , 
            
            int productIdType
            , 
            
            bool pricesIncVat
            
        )
        {
            std::string url = basepath + "/API/PriceList/Price"; //


            // Headers  | 

            // Query    | productIdType pricesIncVat 
            addQueryParam("productIdType",productIdType);
            addQueryParam("pricesIncVat",pricesIncVat);

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | priceListPrices


            bourne::json tmp_arr = bourne::json::array();
            for(auto& var : priceListPrices)
            {
                auto tmp = var.toJson();
                tmp_arr.append(tmp);

            }
            payload = tmp_arr.dump();


            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            PriceList.Models.PriceListPriceResponse obj(output_string);


            Response<PriceList.Models.PriceListPriceResponse> response(obj, httpCode);
            return response;
        }



