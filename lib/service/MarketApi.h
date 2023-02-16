#ifndef TINY_CPP_CLIENT_MarketApi_H_
#define TINY_CPP_CLIENT_MarketApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope-Market.Models.Market.h"
#include "Market.Models.Market.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class MarketApi : public Service {
public:
    MarketApi() = default;

    virtual ~MarketApi() = default;

    /**
    * Get a specific market.
    *
    * 
    * \param marketId The id of the market to get. *Required*
    * \param marketIdType The type of market id supplied. See {Market.Models.MarketIdType} for valid options.
    */
    Response<
                Envelope-Market.Models.Market
        >
    get_market_by_id(
            
            std::string marketId
            , 
            
            int marketIdType
            
    );
    /**
    * Gets a list of all markets.
    *
    * 
    */
    Response<
                Market.Models.Market
        >
    list_markets(
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_MarketApi_H_ */