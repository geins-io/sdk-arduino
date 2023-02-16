#ifndef TINY_CPP_CLIENT_SupplierApi_H_
#define TINY_CPP_CLIENT_SupplierApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope-Supplier.Models.Read.Supplier.h"
#include "Supplier.Models.Read.Supplier.h"
#include "Supplier.Models.SupplierQuery.h"
#include "Supplier.Models.Write.Supplier.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class SupplierApi : public Service {
public:
    SupplierApi() = default;

    virtual ~SupplierApi() = default;

    /**
    * Create a new supplier.
    *
    * 
    * \param supplier The supplier to create. *Required*
    */
    Response<
                Envelope-Supplier.Models.Read.Supplier
        >
    create_supplier(
            
            Supplier.Models.Write.Supplier supplier
            
    );
    /**
    * Get a specific supplier.
    *
    * 
    * \param id The id of the supplier to get. *Required*
    */
    Response<
                Envelope-Supplier.Models.Read.Supplier
        >
    get_supplier_by_id(
            
            int id
            
    );
    /**
    * Query suppliers.
    *
    * 
    * \param query The details of the query *Required*
    */
    Response<
                    std::list<Supplier.Models.Read.Supplier>
        >
    query_suppliers(
            
            Supplier.Models.SupplierQuery query
            
    );
    /**
    * Updates a supplier.
    *
    * Leaving out a property will ensure no changes are made to that property.  Collection properties will delete and/or add as necessary to match the supplied data.
    * \param id The id of the supplier to update. *Required*
    * \param supplier The supplier data to update. *Required*
    */
    Response<
                Envelope-Supplier.Models.Read.Supplier
        >
    update_supplier(
            
            int id
            , 
            
            Supplier.Models.Write.Supplier supplier
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_SupplierApi_H_ */