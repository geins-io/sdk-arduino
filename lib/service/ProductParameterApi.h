#ifndef TINY_CPP_CLIENT_ProductParameterApi_H_
#define TINY_CPP_CLIENT_ProductParameterApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope.h"
#include "Envelope-ProductParameter.Models.Read.ProductParameter.h"
#include "Envelope-ProductParameter.Models.Read.ProductParameterGroup.h"
#include "Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue.h"
#include "Envelope-ProductParameter.Models.Read.ProductParameterValue.h"
#include "ProductParameter.Models.Write.ProductParameter.h"
#include "ProductParameter.Models.Write.ProductParameterGroup.h"
#include "ProductParameter.Models.Write.ProductParameterPredefinedValue.h"
#include "ProductParameter.Models.Write.ProductParameterValue.h"
#include "ProductParameter.Models.Write.ProductParameterValueBatch.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class ProductParameterApi : public Service {
public:
    ProductParameterApi() = default;

    virtual ~ProductParameterApi() = default;

    /**
    * Replace multiple product parameter values.
    *
    * 
    * \param productParameterBatch The product parameter values to replace. *Required*
    */
    Response<
                Envelope
        >
    batch_replace_product_parameter_values(
            
            ProductParameter.Models.Write.ProductParameterValueBatch productParameterBatch
            
    );
    /**
    * Update multiple product parameter values.
    *
    * 
    * \param productParameterBatch The product parameter values update. *Required*
    */
    Response<
                Envelope
        >
    batch_update_product_parameter_values(
            
            ProductParameter.Models.Write.ProductParameterValueBatch productParameterBatch
            
    );
    /**
    * Create or update a new product parameter value.
    *
    * 
    * \param productParameterValue The product parameter value to create or update. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameterValue
        >
    create_or_update_product_parameter_value(
            
            ProductParameter.Models.Write.ProductParameterValue productParameterValue
            
    );
    /**
    * Create a new product parameter.
    *
    * 
    * \param productParameter The product parameter to create. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameter
        >
    create_product_parameter(
            
            ProductParameter.Models.Write.ProductParameter productParameter
            
    );
    /**
    * Create a new product parameter group.
    *
    * 
    * \param productParameterGroup The product parameter group to create. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameterGroup
        >
    create_product_parameter_group(
            
            ProductParameter.Models.Write.ProductParameterGroup productParameterGroup
            
    );
    /**
    * Create a new predefined value for a product parameter.
    *
    * 
    * \param productParameterPredefinedValue The predefined value to create. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue
        >
    create_product_parameter_predefined_value(
            
            ProductParameter.Models.Write.ProductParameterPredefinedValue productParameterPredefinedValue
            
    );
    /**
    * Get a specific product parameter.
    *
    * 
    * \param id The id of the product parameter to get. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameter
        >
    get_product_parameter_by_id(
            
            int id
            
    );
    /**
    * Get a specific product parameter group.
    *
    * 
    * \param id The id of the product parameter group to get. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameterGroup
        >
    get_product_parameter_group_by_id(
            
            int id
            
    );
    /**
    * Get a specific predefined value for a product parameter.
    *
    * 
    * \param id The id of the predefined value to get. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameterValue
        >
    get_product_parameter_predefined_value(
            
            int id
            
    );
    /**
    * Get a specific product parameter value.
    *
    * 
    * \param id The id of the product parameter value to get. *Required*
    * \param predefinedValueId The predefined value id of the product parameter value to get. Only applicable for {ProductParameter.Models.ProductParameterType.Multi}.
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameterValue
        >
    get_product_parameter_value(
            
            int id
            , 
            
            std::string predefinedValueId
            
    );
    /**
    * Updates a product parameter.
    *
    * Leaving out a property will ensure no changes are made to that property. Collection properties will delete and/or add as necessary to match the supplied data.
    * \param id The id of the product parameter to update. *Required*
    * \param productParameter The product parameter data to update. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameter
        >
    update_product_parameter(
            
            int id
            , 
            
            ProductParameter.Models.Write.ProductParameter productParameter
            
    );
    /**
    * Update a product parameter group.
    *
    * Leaving out a property will ensure no changes are made to that property. Collection properties will delete and/or add as necessary to match the supplied data.
    * \param id The id of the product parameter group to update. *Required*
    * \param productParameterGroup The product parameter group data to update. *Required*
    */
    Response<
                Envelope-ProductParameter.Models.Read.ProductParameterGroup
        >
    update_product_parameter_group(
            
            int id
            , 
            
            ProductParameter.Models.Write.ProductParameterGroup productParameterGroup
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_ProductParameterApi_H_ */