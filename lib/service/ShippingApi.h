#ifndef TINY_CPP_CLIENT_ShippingApi_H_
#define TINY_CPP_CLIENT_ShippingApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope-Int.h"
#include "Shipping.Models.ParcelGroupOptions.h"
#include "Shipping.Models.ShippingOption.h"
#include "Shipping.Models.ShippingQuery.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class ShippingApi : public Service {
public:
    ShippingApi() = default;

    virtual ~ShippingApi() = default;

    /**
    * Create a new parcel group.
    *
    * 
    * \param parcelGroupOptions Options for the new parcel group. *Required*
    */
    Response<
                Envelope-Int
        >
    create_parcel_group(
            
            Shipping.Models.ParcelGroupOptions parcelGroupOptions
            
    );
    /**
    * Query shipping options.
    *
    * No response envelope.
    * \param shippingQuery The query to filter shipping options by. *Required*
    */
    Response<
                    std::list<Shipping.Models.ShippingOption>
        >
    query_shipping_options(
            
            Shipping.Models.ShippingQuery shippingQuery
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_ShippingApi_H_ */