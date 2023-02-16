# Documentation for Geins Management API Tiny client cpp (Arduino) 
This is a client generator for microcontrollers on the Espressif32 platform and the Arduino framework
After the client have been generated, you have to change these following variables:
- root.cert | Provide your service root certificate.
- src/main.cpp | Change wifi name
- src/main.cpp | Change wifi password
- lib/service/AbstractService.h | Change to your url


The project is structured like this:
```
samples/client/petstore/tiny/cpp/
├── lib
│   ├── Models
│   ├── service
│   └── TestFiles
├── platformio.ini
├── pre_compiling_bourne.py
├── README.md
├── root.cert
├── src
│   └── main.cpp
└── test
    └── RunTests.cpp
```

All URIs are relative to https://mgmtapi.geins.io

### BrandApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*create_brand* | *POST* /API/Brand | Create a new brand.|
|*get_brand_by_id* | *GET* /API/Brand/{id} | Get a specific brand.|
|*query_brands* | *POST* /API/Brand/Query | Query brands.|
|*update_brand* | *PUT* /API/Brand/{id} | Updates a brand.|

### CategoryApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*create_category* | *POST* /API/Category | Create a new category.|
|*get_category_by_id* | *GET* /API/Category/{id} | Get a specific category.|
|*query_categories* | *POST* /API/Category/Query | Query categories.|
|*update_category* | *PUT* /API/Category/{id} | Update a category.|

### MarketApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*get_market_by_id* | *GET* /API/Market/{marketId} | Get a specific market.|
|*list_markets* | *GET* /API/Market/List | Gets a list of all markets.|

### OrderApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*add_comment_to_order* | *POST* /API/Order/{id}/Comment | Adds a comment to the order.|
|*create_order* | *POST* /API/Order | Post a new order.|
|*create_order_id* | *POST* /API/Order/Id | Create a new order id.|
|*delete_order* | *DELETE* /API/Order/{id} | Deletes or deactivates an order.|
|*get_capture_by_id* | *GET* /API/Order/Capture/{captureId} | Get Capture by Id.|
|*get_order_by_id* | *GET* /API/Order/{id}/{include} | Get an instance of a order.|
|*get_order_statuses* | *GET* /API/Order/Statuses | Get a list of available order statuses.|
|*get_refund_by_id* | *GET* /API/Order/Refund/{refundId} | Get Refund by Id.|
|*partial_update_of_order* | *PATCH* /API/Order/{id} | Partial update of an order.|
|*query_orders* | *POST* /API/Order/Query | Query the order repository.|
|*set_capture_as_processed* | *POST* /API/Order/Capture/SetAsProcessed | Set a capture as processed (= captured).|
|*set_payment_as_payed* | *POST* /API/Order/PaymentDetail/{paymentDetailId}/SetAsPayed | Set Payment Detail as payed.|
|*set_refund_as_processed* | *POST* /API/Order/Refund/SetAsProcessed | Set a refund as processed (= settled).|
|*update_order_status* | *POST* /API/Order/{id}/Status/{status}/{transactionId}/{secondaryTransactionId} | Update order status.|
|*update_transaction_data* | *POST* /API/Order/{id}/TransactionData | Updates transaction data on an order.|
|*validate_order* | *POST* /API/Order/ValidateCreation | Validates order data for order creation..|

### PageAreaApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*create_or_update_a_page_area* | *POST* /API/PageArea | Create or update a page area.|
|*create_or_update_page_area_family* | *POST* /API/PageAreaFamily | Create or update a page area family.|
|*get_page_area* | *GET* /API/PageArea/{name} | Get a specific page area.|
|*get_page_area_family* | *GET* /API/PageAreaFamily/{familyId} | Get a specific page area family.|
|*list_page_area_families* | *GET* /API/PageAreaFamily/List | Gets a list of all page area families, including nested data.|

### PaymentApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*query_payment_options* | *POST* /API/Payment/Query | Query payment options.|

### PriceListApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*list_price_lists* | *GET* /API/PriceList/List | Get all price list definitions.|
|*update_pricelist_prices* | *PUT* /API/PriceList/Price | Updates price list prices.|

### ProductApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*add_Image_to_Product* | *PUT* /API/Product/{productId}/Image/{imageName} | Adds an image relation to a product.|
|*add_availability_monitor* | *POST* /API/Product/MonitorAvailability | Add a product availability monitor.|
|*add_category_to_product* | *PUT* /API/Product/{productId}/Category | Adds a category relation to a product.|
|*add_related_products_to_product* | *PUT* /API/Product/{productId}/Related | Add related products to a product.|
|*batch_update_product_items* | *PUT* /API/Product/Items | Updates product items in batch.|
|*batch_update_stock_values* | *PUT* /API/Product/Stock | Update stock values for multiple product items.|
|*create_product* | *POST* /API/Product | Create a new product.|
|*create_product_items* | *POST* /API/Product/{productId}/Item | Create a new product item.|
|*get_product_by_id* | *GET* /API/Product/{productId} | Get a specific product.|
|*get_product_item_by_id* | *GET* /API/Product/Item/{itemId} | Get a specific product item.|
|*link_related_products_by_relation_id* | *PUT* /API/Product/{productId}/Related/{relationTypeId} | Add related products to a product using a fixed relation type.|
|*list_all_product_items_paged* | *GET* /API/Product/Items/{page} | Get all product items with pagination.|
|*list_feeds* | *GET* /API/Product/Feeds | Gets a list of all feeds.|
|*list_product_items* | *GET* /API/Product/Items | Get all product items.|
|*list_product_relation_types* | *GET* /API/Product/RelationTypes | Gets a list of product relation types.|
|*query_products* | *POST* /API/Product/Query | Query products.|
|*query_products_paged* | *POST* /API/Product/Query/{page} | Query products with pagination.|
|*query_stock* | *POST* /API/Product/Stock/Query | Query stock.|
|*update_product* | *PUT* /API/Product/{productId} | Updates a product.|
|*update_product_item* | *PUT* /API/Product/Item/{itemId} | Updates a product item.|

### ProductParameterApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*batch_replace_product_parameter_values* | *POST* /API/ProductParameter/Values | Replace multiple product parameter values.|
|*batch_update_product_parameter_values* | *PUT* /API/ProductParameter/Values | Update multiple product parameter values.|
|*create_or_update_product_parameter_value* | *POST* /API/ProductParameter/Value | Create or update a new product parameter value.|
|*create_product_parameter* | *POST* /API/ProductParameter | Create a new product parameter.|
|*create_product_parameter_group* | *POST* /API/ProductParameter/Group | Create a new product parameter group.|
|*create_product_parameter_predefined_value* | *POST* /API/ProductParameter/PredefinedValue | Create a new predefined value for a product parameter.|
|*get_product_parameter_by_id* | *GET* /API/ProductParameter/{id} | Get a specific product parameter.|
|*get_product_parameter_group_by_id* | *GET* /API/ProductParameter/Group/{id} | Get a specific product parameter group.|
|*get_product_parameter_predefined_value* | *GET* /API/ProductParameter/PredefinedValue/{id} | Get a specific predefined value for a product parameter.|
|*get_product_parameter_value* | *GET* /API/ProductParameter/Value/{id} | Get a specific product parameter value.|
|*update_product_parameter* | *PUT* /API/ProductParameter/{id} | Updates a product parameter.|
|*update_product_parameter_group* | *PUT* /API/ProductParameter/Group/{id} | Update a product parameter group.|

### ShippingApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*create_parcel_group* | *POST* /API/Shipping/ParcelGroup | Create a new parcel group.|
|*query_shipping_options* | *POST* /API/Shipping/Query | Query shipping options.|

### SupplierApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*create_supplier* | *POST* /API/Supplier | Create a new supplier.|
|*get_supplier_by_id* | *GET* /API/Supplier/{id} | Get a specific supplier.|
|*query_suppliers* | *POST* /API/Supplier/Query | Query suppliers.|
|*update_supplier* | *PUT* /API/Supplier/{id} | Updates a supplier.|

### UserApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*create_user_profile* | *POST* /API/User | Create user profile.|
|*delete_user_profile* | *DELETE* /API/User/email | Delete user profile.|
|*get_user_profile* | *POST* /API/User/Query | Get a specific user profile.|
|*update_user_profile* | *PUT* /API/User | Update user profile.|

### VariantApi
|Method | HTTP request | Description|
|------------- | ------------- | -------------|
|*add_product_to_variant_group* | *PUT* /API/VariantGroup/{groupId}/{productId} | Adds a product to an existing group.|
|*add_product_to_variant_group_by_product_id* | *PUT* /API/Variant/{productId1}/{productId2} | Adds a product to an existing group.|
|*create_variant_group* | *POST* /API/VariantGroup | Create a new variant group.|
|*create_variant_group_with_product* | *POST* /API/Variant/{productId}/VariantGroup | Create a new group for the provided product id.|
|*delete_variant_group* | *DELETE* /API/VariantGroup/{groupId} | Delete an entire variant group.|
|*delete_variant_group_by_product_id* | *DELETE* /API/Variant/{productId}/VariantGroup | Delete an entire variant group.|
|*get_variant_group* | *GET* /API/VariantGroup/{groupId} | Get a specific variant group.|
|*get_variant_group_by_product_id* | *GET* /API/Variant/{productId}/VariantGroup | Get the variant group for the provided id.|
|*get_variant_labels* | *GET* /API/Variant/Labels | Get all valid variant labels.|
|*remove_product_from_variant_group* | *DELETE* /API/Variant/{productId} | Remove a product from its variant group.|
|*update_variant* | *PUT* /API/Variant/{productId} | Adds the variant details for the product with the provided ID.|
|*update_variant_group* | *PUT* /API/VariantGroup/{groupId} | Updates the settings of a group.|


## What are the Model files for the data structures/objects?
|Class | Description|
|------------- | -------------|
|*API.Order.OrderComment* | |
|*API.Order.TransactionData* | |
|*Brand.Models.BrandQuery* | A brand query.|
|*Brand.Models.Read.Brand* | A brand.|
|*Brand.Models.Write.Brand* | A brand.|
|*Category.Models.CategoryQuery* | A query to filter categories by.|
|*Category.Models.Read.Category* | An existing category.|
|*Category.Models.Write.Category* | A category to create or update.|
|*ContainerRestrictionSetup.ContainerRestrictionConfiguration* | |
|*Envelope* | An envelope for the result of and action taken on a resource.|
|*Envelope-Brand.Models.Read.Brand* | An envelope for the result of and action taken on a resource.|
|*Envelope-Category.Models.Read.Category* | An envelope for the result of and action taken on a resource.|
|*Envelope-Int* | An envelope for the result of and action taken on a resource.|
|*Envelope-List-Product.Models.Read.Feed* | An envelope for the result of and action taken on a resource.|
|*Envelope-List-Product.Models.Read.Product* | An envelope for the result of and action taken on a resource.|
|*Envelope-List-Product.Models.Read.ProductItem* | An envelope for the result of and action taken on a resource.|
|*Envelope-List-Product.Models.Read.RelationType* | An envelope for the result of and action taken on a resource.|
|*Envelope-Market.Models.Market* | An envelope for the result of and action taken on a resource.|
|*Envelope-PageArea.Models.Read.PageArea* | An envelope for the result of and action taken on a resource.|
|*Envelope-PageArea.Models.Read.PageAreaFamily* | An envelope for the result of and action taken on a resource.|
|*Envelope-Product.Models.Read.Product* | An envelope for the result of and action taken on a resource.|
|*Envelope-Product.Models.Read.ProductItem* | An envelope for the result of and action taken on a resource.|
|*Envelope-ProductParameter.Models.Read.ProductParameter* | An envelope for the result of and action taken on a resource.|
|*Envelope-ProductParameter.Models.Read.ProductParameterGroup* | An envelope for the result of and action taken on a resource.|
|*Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue* | An envelope for the result of and action taken on a resource.|
|*Envelope-ProductParameter.Models.Read.ProductParameterValue* | An envelope for the result of and action taken on a resource.|
|*Envelope-String* | An envelope for the result of and action taken on a resource.|
|*Envelope-Supplier.Models.Read.Supplier* | An envelope for the result of and action taken on a resource.|
|*Envelope-User.Models.Read.UserProfile* | An envelope for the result of and action taken on a resource.|
|*Envelope-Variant.Models.Read.Variant-* | An envelope for the result of and action taken on a resource.|
|*Envelope-Variant.Models.Read.VariantGroup* | An envelope for the result of and action taken on a resource.|
|*Market.Models.Market* | |
|*Order.Capture* | |
|*Order.CaptureRow* | |
|*Order.CheckoutOrder* | |
|*Order.CheckoutOrderRow* | |
|*Order.FreightClass* | |
|*Order.Models.Address* | Data carrier for an address|
|*Order.Models.Order* | Data carrier for an order.|
|*Order.Models.OrderQuery* | Data carrying class for order queries|
|*Order.Models.OrderRow* | Data carrier for an order row|
|*Order.Models.OrderStatus* | Data carrier for an order status|
|*Order.Models.OrderUpdate* | Data carrier for update operation on an order.|
|*Order.Models.PaymentDetail* | Data carrier for a payment detail|
|*Order.Models.Refund* | Data carrier for a refund|
|*Order.Models.ShippingDetail* | Data carrier for a shipping detail|
|*Order.ProcessedCapture* | |
|*Order.ProcessedRefund* | |
|*Order.Refund* | |
|*Order.RefundRow* | |
|*Order.ValidateOrderCreationRequest* | |
|*Order.ValidateOrderCreationRequest.StockItem* | |
|*PageArea.Models.Read.PageArea* | The API-version of the PageArea class|
|*PageArea.Models.Read.PageAreaFamily* | |
|*PageArea.Models.Read.PageWidget* | The API-representation of page widgets|
|*PageArea.Models.Read.PageWidgetContainer* | This class represents a collection of widgets, and defines how they should be layouted in the area they are rendered in.|
|*PageArea.Models.Write.PageArea* | The API-version of the PageArea class|
|*PageArea.Models.Write.PageAreaFamily* | |
|*PageResult* | Contains pagination information for paged operations, i.e. PageSize and PageCount.|
|*PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration* | |
|*PageWidget.LazyLoadSetup.LazyLoadConfiguration* | |
|*Payment.Models.PaymentOption* | |
|*Payment.Models.PaymentOptionQuery* | |
|*PriceList.Models.PriceList* | A price list definition.|
|*PriceList.Models.PriceListPriceResponse* | The response of a PriceListPrice request.|
|*PriceList.Models.Read.PriceListPrice* | A price for a product on a specific price list.|
|*PriceList.Models.Write.PriceListPrice* | A price for a product on a specific price list.|
|*Product.Models.MonitorSku* | |
|*Product.Models.ProductCategory* | |
|*Product.Models.ProductQuery* | A prroduct query.|
|*Product.Models.Read.Feed* | A product feed.|
|*Product.Models.Read.FeedMembership* | A product feed membership.|
|*Product.Models.Read.Image* | |
|*Product.Models.Read.Product* | A product.|
|*Product.Models.Read.ProductItem* | A product item belonging to a product.|
|*Product.Models.Read.ProductItemStock* | A stock value for a product item|
|*Product.Models.Read.ProductUrl* | A canonical product url for a specific market and language.|
|*Product.Models.Read.RelatedProduct* | A related product.|
|*Product.Models.Read.RelationType* | |
|*Product.Models.Read.ShippingFee* | A shipping fee for a product item.|
|*Product.Models.RelatedProductEnvelope* | The response of a related products request.|
|*Product.Models.StockEnvelope* | The response of a Stock request.|
|*Product.Models.Write.Product* | A product.|
|*Product.Models.Write.ProductItem* | A product item belonging to a product.|
|*Product.Models.Write.ProductItemStock* | A stock value for a product item|
|*Product.Models.Write.RelatedProduct* | A related product.|
|*Product.ProductItemEnvelope* | An envelope for the result of and action taken on a product item.|
|*ProductParameter.Models.Read.ProductParameter* | An existing product parameter.|
|*ProductParameter.Models.Read.ProductParameterGroup* | An existing product parameter group.|
|*ProductParameter.Models.Read.ProductParameterPredefinedValue* | A predefined value for a product parameter.|
|*ProductParameter.Models.Read.ProductParameterValue* | A parameter value for a product.|
|*ProductParameter.Models.Write.ProductParameter* | A product parameter to create or update.|
|*ProductParameter.Models.Write.ProductParameterGroup* | A product parameter group to create or update.|
|*ProductParameter.Models.Write.ProductParameterPredefinedValue* | A predefined value for a product parameter.|
|*ProductParameter.Models.Write.ProductParameterValue* | A parameter value for a product.|
|*ProductParameter.Models.Write.ProductParameterValueBatch* | |
|*Shared.Models.LocalizableContent* | A piece of localized content.|
|*Shipping.Models.ParcelGroupOptions* | Creation options for new parcel groups.|
|*Shipping.Models.ShippingOption* | |
|*Shipping.Models.ShippingQuery* | A query to filter shipping options by.|
|*Shipping.Models.ShippingSubOption* | |
|*Supplier.Models.Read.Supplier* | A product supplier.|
|*Supplier.Models.SupplierQuery* | A supplier query.|
|*Supplier.Models.Write.Supplier* | A product supplier.|
|*System.Nullable-ValidationConfiguration* | |
|*User.Models.Read.UserProfile* | |
|*User.Models.UserProfileQuery* | |
|*User.Models.Write.UserProfile* | |
|*Variant.Models.Read.Variant* | A variant of a product.|
|*Variant.Models.Read.VariantGroup* | A variant group for a collection of related variants.|
|*Variant.Models.Write.Variant* | A variant of a product.|
|*Variant.Models.Write.VariantGroup* | A variant group for a collection of related variants.|
|*WidgetRestrictionSetup.WidgetRestrictionConfiguration* | |

