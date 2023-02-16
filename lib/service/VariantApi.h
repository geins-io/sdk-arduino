#ifndef TINY_CPP_CLIENT_VariantApi_H_
#define TINY_CPP_CLIENT_VariantApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope.h"
#include "Envelope-String.h"
#include "Envelope-Variant.Models.Read.Variant-.h"
#include "Envelope-Variant.Models.Read.VariantGroup.h"
#include "Variant.Models.Write.Variant.h"
#include "Variant.Models.Write.VariantGroup.h"
#include <list>

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class VariantApi : public Service {
public:
    VariantApi() = default;

    virtual ~VariantApi() = default;

    /**
    * Adds a product to an existing group.
    *
    * 
    * \param groupId The ID of the group to which a product should be added *Required*
    * \param productId The ID of the product to be added to the target group. *Required*
    * \param variant The variant details. *Required*
    * \param productIdType The type of product id provided.
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    add_product_to_variant_group(
            
            int groupId
            , 
            
            std::string productId
            , 
            std::list<Variant.Models.Write.Variant> variant
            
            , 
            
            int productIdType
            , 
            
            std::string include
            
    );
    /**
    * Adds a product to an existing group.
    *
    * 
    * \param productId1 The ID of a product belonging to the target group. *Required*
    * \param productId2 The ID of the product to be added to the target group. *Required*
    * \param productIdType The type of product id provided.
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    add_product_to_variant_group_by_product_id(
            
            std::string productId1
            , 
            
            std::string productId2
            , 
            
            int productIdType
            , 
            
            std::string include
            
    );
    /**
    * Create a new variant group.
    *
    * 
    * \param variantGroup The settings for the new group. *Required*
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    create_variant_group(
            
            Variant.Models.Write.VariantGroup variantGroup
            , 
            
            std::string include
            
    );
    /**
    * Create a new group for the provided product id.
    *
    * 
    * \param productId The id of the product, for which to create a group. *Required*
    * \param variantGroup The settings for the new group. *Required*
    * \param productIdType The type of product id provided.
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    create_variant_group_with_product(
            
            std::string productId
            , 
            
            Variant.Models.Write.VariantGroup variantGroup
            , 
            
            int productIdType
            , 
            
            std::string include
            
    );
    /**
    * Delete an entire variant group.
    *
    * 
    * \param groupId The ID of the group to delete *Required*
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    delete_variant_group(
            
            int groupId
            
    );
    /**
    * Delete an entire variant group.
    *
    * 
    * \param productId The id of a product that belongs to the group to remove. *Required*
    * \param productIdType The type of product id provided.
    */
    Response<
                Envelope
        >
    delete_variant_group_by_product_id(
            
            std::string productId
            , 
            
            int productIdType
            
    );
    /**
    * Get a specific variant group.
    *
    * 
    * \param groupId The ID of the group to get *Required*
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    get_variant_group(
            
            int groupId
            , 
            
            std::string include
            
    );
    /**
    * Get the variant group for the provided id.
    *
    * 
    * \param productId The id of the product, for which to get the group. *Required*
    * \param productIdType The type of id.
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    get_variant_group_by_product_id(
            
            std::string productId
            , 
            
            int productIdType
            , 
            
            std::string include
            
    );
    /**
    * Get all valid variant labels.
    *
    * 
    */
    Response<
                Envelope-String
        >
    get_variant_labels(
    );
    /**
    * Remove a product from its variant group.
    *
    * 
    * \param productId The id of the product to remove from group. *Required*
    * \param productIdType The type of product id provided.
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    remove_product_from_variant_group(
            
            std::string productId
            , 
            
            int productIdType
            , 
            
            std::string include
            
    );
    /**
    * Adds the variant details for the product with the provided ID.
    *
    * 
    * \param productId The ID of the product for which to update the variant details. *Required*
    * \param variant The variant details. *Required*
    * \param productIdType The type of product id provided.
    */
    Response<
                Envelope-Variant.Models.Read.Variant-
        >
    update_variant(
            
            std::string productId
            , 
            std::list<Variant.Models.Write.Variant> variant
            
            , 
            
            int productIdType
            
    );
    /**
    * Updates the settings of a group.
    *
    * 
    * \param groupId The ID of the group to update *Required*
    * \param variantGroup The new settings for the group *Required*
    * \param include Comma separated list of product child collections to also include with the variant group. Set to \"product\" to only include basic product data and to null (skip) to not include any product data. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Variant.Models.Read.VariantGroup
        >
    update_variant_group(
            
            int groupId
            , 
            
            Variant.Models.Write.VariantGroup variantGroup
            , 
            
            std::string include
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_VariantApi_H_ */