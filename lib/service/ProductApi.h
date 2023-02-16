#ifndef TINY_CPP_CLIENT_ProductApi_H_
#define TINY_CPP_CLIENT_ProductApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope.h"
#include "Envelope-List-Product.Models.Read.Feed.h"
#include "Envelope-List-Product.Models.Read.Product.h"
#include "Envelope-List-Product.Models.Read.ProductItem.h"
#include "Envelope-List-Product.Models.Read.RelationType.h"
#include "Envelope-Product.Models.Read.Product.h"
#include "Envelope-Product.Models.Read.ProductItem.h"
#include "Product.Models.MonitorSku.h"
#include "Product.Models.ProductCategory.h"
#include "Product.Models.ProductQuery.h"
#include "Product.Models.Read.ProductItem.h"
#include "Product.Models.Read.ProductItemStock.h"
#include "Product.Models.RelatedProductEnvelope.h"
#include "Product.Models.StockEnvelope.h"
#include "Product.Models.Write.Product.h"
#include "Product.Models.Write.ProductItem.h"
#include "Product.Models.Write.ProductItemStock.h"
#include "Product.Models.Write.RelatedProduct.h"
#include "Product.ProductItemEnvelope.h"
#include <list>

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class ProductApi : public Service {
public:
    ProductApi() = default;

    virtual ~ProductApi() = default;

    /**
    * Adds an image relation to a product.
    *
    * 
    * \param productId The id of the product to update. *Required*
    * \param imageName The name of the image to set to product. *Required*
    * \param isPrimaryImage Specifies whether {imageName} should be set as the primary image of the product.
    * \param productIdType The type of product id supplied in {productId}.
    */
    Response<
                Envelope
        >
    add_Image_to_Product(
            
            std::string productId
            , 
            
            std::string imageName
            , 
            
            bool isPrimaryImage
            , 
            
            int productIdType
            
    );
    /**
    * Add a product availability monitor.
    *
    * 
    * \param model  *Required*
    */
    Response<
                Envelope
        >
    add_availability_monitor(
            
            Product.Models.MonitorSku model
            
    );
    /**
    * Adds a category relation to a product.
    *
    * 
    * \param productId The id of the product to update. *Required*
    * \param productCategory The category to relate the product to. *Required*
    * \param productIdType The type of product id supplied in {productId}.
    */
    Response<
                Envelope
        >
    add_category_to_product(
            
            std::string productId
            , 
            
            Product.Models.ProductCategory productCategory
            , 
            
            int productIdType
            
    );
    /**
    * Add related products to a product.
    *
    * 
    * \param productId The id of the main product to which the relations will be created *Required*
    * \param relatedProducts The list of related products to link with the main product. *Required*
    * \param productIdType The type of product id for {productId} and supplied in {relatedProducts}.
    */
    Response<
                Product.Models.RelatedProductEnvelope
        >
    add_related_products_to_product(
            
            std::string productId
            , 
            std::list<Product.Models.Write.RelatedProduct> relatedProducts
            
            , 
            
            int productIdType
            
    );
    /**
    * Updates product items in batch.
    *
    * 
    * \param productItems The product items to update *Required*
    * \param productItemIdType The type of product item id
    */
    Response<
                Envelope
        >
    batch_update_product_items(
            std::list<Product.Models.Write.ProductItem> productItems
            
            , 
            
            int productItemIdType
            
    );
    /**
    * Update stock values for multiple product items.
    *
    * 
    * \param productItemStocks List of product item ids with new stock values. *Required*
    * \param productItemIdType The type of product item id supplied in {productItemStocks}.
    */
    Response<
                Product.Models.StockEnvelope
        >
    batch_update_stock_values(
            std::list<Product.Models.Write.ProductItemStock> productItemStocks
            
            , 
            
            int productItemIdType
            
    );
    /**
    * Create a new product.
    *
    * 
    * \param product The product to create. *Required*
    * \param include Comma separated list of child-collections to also include with the created product. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Product.Models.Read.Product
        >
    create_product(
            
            Product.Models.Write.Product product
            , 
            
            std::string include
            
    );
    /**
    * Create a new product item.
    *
    * 
    * \param productId The id of the product to create an item on. *Required*
    * \param productItem The product item to create. *Required*
    * \param productIdType The type of product id supplied in {productId}.
    */
    Response<
                Envelope-Product.Models.Read.ProductItem
        >
    create_product_items(
            
            std::string productId
            , 
            
            Product.Models.Write.ProductItem productItem
            , 
            
            int productIdType
            
    );
    /**
    * Get a specific product.
    *
    * 
    * \param productId The id of the product to get. *Required*
    * \param productIdType The type of product id supplied in {productId}.
    * \param include Comma separated list of child-collections to also include with the requested product. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Product.Models.Read.Product
        >
    get_product_by_id(
            
            std::string productId
            , 
            
            int productIdType
            , 
            
            std::string include
            
    );
    /**
    * Get a specific product item.
    *
    * 
    * \param itemId The id of the product item to get. *Required*
    * \param productItemIdType The type of product item id supplied in {itemId}.
    */
    Response<
                Product.ProductItemEnvelope
        >
    get_product_item_by_id(
            
            std::string itemId
            , 
            
            int productItemIdType
            
    );
    /**
    * Add related products to a product using a fixed relation type.
    *
    * 
    * \param productId The id of the main product to which the relations will be created *Required*
    * \param relationTypeId The relation type id that will apply to all related products in {relatedProducts} *Required*
    * \param relatedProducts The list of related products to link with the main product. *Required*
    * \param productIdType The type of product id for {productId} and supplied in {relatedProducts}.
    */
    Response<
                Product.Models.RelatedProductEnvelope
        >
    link_related_products_by_relation_id(
            
            std::string productId
            , 
            
            int relationTypeId
            , 
            std::list<Product.Models.Write.RelatedProduct> relatedProducts
            
            , 
            
            int productIdType
            
    );
    /**
    * Get all product items with pagination.
    *
    * 
    * \param page The page to fetch *Required*
    */
    Response<
                Envelope-List-Product.Models.Read.ProductItem
        >
    list_all_product_items_paged(
            
            int page
            
    );
    /**
    * Gets a list of all feeds.
    *
    * 
    */
    Response<
                Envelope-List-Product.Models.Read.Feed
        >
    list_feeds(
    );
    /**
    * Get all product items.
    *
    * 
    */
    Response<
                    std::list<Product.Models.Read.ProductItem>
        >
    list_product_items(
    );
    /**
    * Gets a list of product relation types.
    *
    * 
    */
    Response<
                Envelope-List-Product.Models.Read.RelationType
        >
    list_product_relation_types(
    );
    /**
    * Query products.
    *
    * 
    * \param query The details of the query *Required*
    * \param include Comma separated list of child-collections to also include with the queried products. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-List-Product.Models.Read.Product
        >
    query_products(
            
            Product.Models.ProductQuery query
            , 
            
            std::string include
            
    );
    /**
    * Query products with pagination.
    *
    * The {Product.Models.ProductQuery.BatchId} property is mandatory when fetching a page other than the first page.  If no BatchId is provided for the first page, a new batch is created and the BatchId can be found in the {Envelope.PageResult} field.
    * \param page The page to fetch. To start a new batched query it is mandatory to send in page=1 *Required*
    * \param query The details of the query *Required*
    * \param include Comma separated list of child-collections to also include with the queried products. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-List-Product.Models.Read.Product
        >
    query_products_paged(
            
            int page
            , 
            
            Product.Models.ProductQuery query
            , 
            
            std::string include
            
    );
    /**
    * Query stock.
    *
    * 
    * \param productItemIds The details of the query. *Required*
    */
    Response<
                    std::list<Product.Models.Read.ProductItemStock>
        >
    query_stock(
            std::list<int> productItemIds
            
            
    );
    /**
    * Updates a product.
    *
    * 
    * \param productId The id of the product to update. *Required*
    * \param product The product data to update. *Required*
    * \param productIdType The type of product id supplied in {productId}.
    * \param include Comma separated list of child-collections to also include with the updated product. See  {Product.Models.ProductIncludes} names for valid options.
    */
    Response<
                Envelope-Product.Models.Read.Product
        >
    update_product(
            
            std::string productId
            , 
            
            Product.Models.Write.Product product
            , 
            
            int productIdType
            , 
            
            std::string include
            
    );
    /**
    * Updates a product item.
    *
    * 
    * \param itemId The id of the product item to update. *Required*
    * \param productItem The product item data to update. *Required*
    * \param productItemIdType The type of product item id supplied in {itemId}.
    */
    Response<
                Envelope-Product.Models.Read.ProductItem
        >
    update_product_item(
            
            std::string itemId
            , 
            
            Product.Models.Write.ProductItem productItem
            , 
            
            int productItemIdType
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_ProductApi_H_ */