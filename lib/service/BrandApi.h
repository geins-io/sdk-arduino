#ifndef TINY_CPP_CLIENT_BrandApi_H_
#define TINY_CPP_CLIENT_BrandApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Brand.Models.BrandQuery.h"
#include "Brand.Models.Read.Brand.h"
#include "Brand.Models.Write.Brand.h"
#include "Envelope-Brand.Models.Read.Brand.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class BrandApi : public Service {
public:
    BrandApi() = default;

    virtual ~BrandApi() = default;

    /**
    * Create a new brand.
    *
    * 
    * \param brand The brand to create. *Required*
    */
    Response<
                Envelope-Brand.Models.Read.Brand
        >
    create_brand(
            
            Brand.Models.Write.Brand brand
            
    );
    /**
    * Get a specific brand.
    *
    * 
    * \param id The id of the brand to get. *Required*
    */
    Response<
                Envelope-Brand.Models.Read.Brand
        >
    get_brand_by_id(
            
            int id
            
    );
    /**
    * Query brands.
    *
    * 
    * \param query The details of the query. *Required*
    */
    Response<
                    std::list<Brand.Models.Read.Brand>
        >
    query_brands(
            
            Brand.Models.BrandQuery query
            
    );
    /**
    * Updates a brand.
    *
    * Leaving out a property will ensure no changes are made to that property.  Collection properties will delete and/or add as necessary to match the supplied data.
    * \param id The id of the brand to update. *Required*
    * \param brand The brand data to update. *Required*
    */
    Response<
                Envelope-Brand.Models.Read.Brand
        >
    update_brand(
            
            int id
            , 
            
            Brand.Models.Write.Brand brand
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_BrandApi_H_ */