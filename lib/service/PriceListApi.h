#ifndef TINY_CPP_CLIENT_PriceListApi_H_
#define TINY_CPP_CLIENT_PriceListApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "PriceList.Models.PriceList.h"
#include "PriceList.Models.PriceListPriceResponse.h"
#include "PriceList.Models.Write.PriceListPrice.h"
#include <list>

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class PriceListApi : public Service {
public:
    PriceListApi() = default;

    virtual ~PriceListApi() = default;

    /**
    * Get all price list definitions.
    *
    * - Prices on campaign price lists (id: xxxxxx2) can not be updated. Any such entries will be ignored.  - ID for Ordinary, Sale and Campaign price lists starts from 1000000.   The ID is calculated by this formula, Market ID * 1000000 + Type of price list (Ordinary=0, Sale=1, Capaign=2)  So :  Ordinary price list for market with ID 1 has ID = 1000000  Sale price list for market with ID 1 has ID = 1000001  Campaign price list for market with ID 1 has ID = 1000002  Ordinary price list for market with ID 2 has ID = 2000000  And so on ...
    */
    Response<
                    std::list<PriceList.Models.PriceList>
        >
    list_price_lists(
    );
    /**
    * Updates price list prices.
    *
    * - Prices on campaign price lists (id: xxxxxx2) can not be updated. Any such entries will be ignored.  - ID for Ordinary, Sale and Campaign price lists starts from 1000000.   The ID is calculated by this formula, Market ID * 1000000 + Type of price list (Ordinary=0, Sale=1, Capaign=2)  So :  Ordinary price list for market with ID 1 has ID = 1000000  Sale price list for market with ID 1 has ID = 1000001  Campaign price list for market with ID 1 has ID = 1000002  Ordinary price list for market with ID 2 has ID = 2000000  And so on ...
    * \param priceListPrices List of new price list prices. *Required*
    * \param productIdType The type of product id supplied in {priceListPrices}
    * \param pricesIncVat Set to true if prices in {priceListPrices} includes VAT. Leave blank or set to false if they exclude VAT.
    */
    Response<
                PriceList.Models.PriceListPriceResponse
        >
    update_pricelist_prices(
            std::list<PriceList.Models.Write.PriceListPrice> priceListPrices
            
            , 
            
            int productIdType
            , 
            
            bool pricesIncVat
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_PriceListApi_H_ */