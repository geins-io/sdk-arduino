
#include "API.Order.OrderCommentTest.cpp"

#include "API.Order.TransactionDataTest.cpp"

#include "Brand.Models.BrandQueryTest.cpp"

#include "Brand.Models.Read.BrandTest.cpp"

#include "Brand.Models.Write.BrandTest.cpp"

#include "Category.Models.CategoryQueryTest.cpp"

#include "Category.Models.Read.CategoryTest.cpp"

#include "Category.Models.Write.CategoryTest.cpp"

#include "ContainerRestrictionSetup.ContainerRestrictionConfigurationTest.cpp"

#include "EnvelopeTest.cpp"

#include "Envelope-Brand.Models.Read.BrandTest.cpp"

#include "Envelope-Category.Models.Read.CategoryTest.cpp"

#include "Envelope-IntTest.cpp"

#include "Envelope-List-Product.Models.Read.FeedTest.cpp"

#include "Envelope-List-Product.Models.Read.ProductTest.cpp"

#include "Envelope-List-Product.Models.Read.ProductItemTest.cpp"

#include "Envelope-List-Product.Models.Read.RelationTypeTest.cpp"

#include "Envelope-Market.Models.MarketTest.cpp"

#include "Envelope-PageArea.Models.Read.PageAreaTest.cpp"

#include "Envelope-PageArea.Models.Read.PageAreaFamilyTest.cpp"

#include "Envelope-Product.Models.Read.ProductTest.cpp"

#include "Envelope-Product.Models.Read.ProductItemTest.cpp"

#include "Envelope-ProductParameter.Models.Read.ProductParameterTest.cpp"

#include "Envelope-ProductParameter.Models.Read.ProductParameterGroupTest.cpp"

#include "Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValueTest.cpp"

#include "Envelope-ProductParameter.Models.Read.ProductParameterValueTest.cpp"

#include "Envelope-StringTest.cpp"

#include "Envelope-Supplier.Models.Read.SupplierTest.cpp"

#include "Envelope-User.Models.Read.UserProfileTest.cpp"

#include "Envelope-Variant.Models.Read.Variant-Test.cpp"

#include "Envelope-Variant.Models.Read.VariantGroupTest.cpp"

#include "Market.Models.MarketTest.cpp"

#include "Order.CaptureTest.cpp"

#include "Order.CaptureRowTest.cpp"

#include "Order.CheckoutOrderTest.cpp"

#include "Order.CheckoutOrderRowTest.cpp"

#include "Order.FreightClassTest.cpp"

#include "Order.Models.AddressTest.cpp"

#include "Order.Models.OrderTest.cpp"

#include "Order.Models.OrderQueryTest.cpp"

#include "Order.Models.OrderRowTest.cpp"

#include "Order.Models.OrderStatusTest.cpp"

#include "Order.Models.OrderUpdateTest.cpp"

#include "Order.Models.PaymentDetailTest.cpp"

#include "Order.Models.RefundTest.cpp"

#include "Order.Models.ShippingDetailTest.cpp"

#include "Order.ProcessedCaptureTest.cpp"

#include "Order.ProcessedRefundTest.cpp"

#include "Order.RefundTest.cpp"

#include "Order.RefundRowTest.cpp"

#include "Order.ValidateOrderCreationRequestTest.cpp"

#include "Order.ValidateOrderCreationRequest.StockItemTest.cpp"

#include "PageArea.Models.Read.PageAreaTest.cpp"

#include "PageArea.Models.Read.PageAreaFamilyTest.cpp"

#include "PageArea.Models.Read.PageWidgetTest.cpp"

#include "PageArea.Models.Read.PageWidgetContainerTest.cpp"

#include "PageArea.Models.Write.PageAreaTest.cpp"

#include "PageArea.Models.Write.PageAreaFamilyTest.cpp"

#include "PageResultTest.cpp"

#include "PageWidget.LazyLoadSetup.LazyLoadCollectionConfigurationTest.cpp"

#include "PageWidget.LazyLoadSetup.LazyLoadConfigurationTest.cpp"

#include "Payment.Models.PaymentOptionTest.cpp"

#include "Payment.Models.PaymentOptionQueryTest.cpp"

#include "PriceList.Models.PriceListTest.cpp"

#include "PriceList.Models.PriceListPriceResponseTest.cpp"

#include "PriceList.Models.Read.PriceListPriceTest.cpp"

#include "PriceList.Models.Write.PriceListPriceTest.cpp"

#include "Product.Models.MonitorSkuTest.cpp"

#include "Product.Models.ProductCategoryTest.cpp"

#include "Product.Models.ProductQueryTest.cpp"

#include "Product.Models.Read.FeedTest.cpp"

#include "Product.Models.Read.FeedMembershipTest.cpp"

#include "Product.Models.Read.ImageTest.cpp"

#include "Product.Models.Read.ProductTest.cpp"

#include "Product.Models.Read.ProductItemTest.cpp"

#include "Product.Models.Read.ProductItemStockTest.cpp"

#include "Product.Models.Read.ProductUrlTest.cpp"

#include "Product.Models.Read.RelatedProductTest.cpp"

#include "Product.Models.Read.RelationTypeTest.cpp"

#include "Product.Models.Read.ShippingFeeTest.cpp"

#include "Product.Models.RelatedProductEnvelopeTest.cpp"

#include "Product.Models.StockEnvelopeTest.cpp"

#include "Product.Models.Write.ProductTest.cpp"

#include "Product.Models.Write.ProductItemTest.cpp"

#include "Product.Models.Write.ProductItemStockTest.cpp"

#include "Product.Models.Write.RelatedProductTest.cpp"

#include "Product.ProductItemEnvelopeTest.cpp"

#include "ProductParameter.Models.Read.ProductParameterTest.cpp"

#include "ProductParameter.Models.Read.ProductParameterGroupTest.cpp"

#include "ProductParameter.Models.Read.ProductParameterPredefinedValueTest.cpp"

#include "ProductParameter.Models.Read.ProductParameterValueTest.cpp"

#include "ProductParameter.Models.Write.ProductParameterTest.cpp"

#include "ProductParameter.Models.Write.ProductParameterGroupTest.cpp"

#include "ProductParameter.Models.Write.ProductParameterPredefinedValueTest.cpp"

#include "ProductParameter.Models.Write.ProductParameterValueTest.cpp"

#include "ProductParameter.Models.Write.ProductParameterValueBatchTest.cpp"

#include "Shared.Models.LocalizableContentTest.cpp"

#include "Shipping.Models.ParcelGroupOptionsTest.cpp"

#include "Shipping.Models.ShippingOptionTest.cpp"

#include "Shipping.Models.ShippingQueryTest.cpp"

#include "Shipping.Models.ShippingSubOptionTest.cpp"

#include "Supplier.Models.Read.SupplierTest.cpp"

#include "Supplier.Models.SupplierQueryTest.cpp"

#include "Supplier.Models.Write.SupplierTest.cpp"

#include "System.Nullable-ValidationConfigurationTest.cpp"

#include "User.Models.Read.UserProfileTest.cpp"

#include "User.Models.UserProfileQueryTest.cpp"

#include "User.Models.Write.UserProfileTest.cpp"

#include "Variant.Models.Read.VariantTest.cpp"

#include "Variant.Models.Read.VariantGroupTest.cpp"

#include "Variant.Models.Write.VariantTest.cpp"

#include "Variant.Models.Write.VariantGroupTest.cpp"

#include "WidgetRestrictionSetup.WidgetRestrictionConfigurationTest.cpp"



void setUp(){}

void tearDown(){}

void runTests(){
    
    
    RUN_TEST(test_API.Order.OrderComment_orderId_is_assigned_from_json);
    
    
    RUN_TEST(test_API.Order.OrderComment_comment_is_assigned_from_json);
    
    
    RUN_TEST(test_API.Order.OrderComment_system_is_assigned_from_json);
    
    
    
    RUN_TEST(test_API.Order.TransactionData_orderId_is_assigned_from_json);
    
    
    RUN_TEST(test_API.Order.TransactionData_transactionId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Brand.Models.BrandQuery_createdAfter_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_Brand.Models.Read.Brand_brandId_is_assigned_from_json);
    
    
    RUN_TEST(test_Brand.Models.Read.Brand_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Brand.Models.Read.Brand_externalId_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Brand.Models.Write.Brand_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Brand.Models.Write.Brand_externalId_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Category.Models.CategoryQuery_createdAfter_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Category.Models.Read.Category_categoryId_is_assigned_from_json);
    
    
    RUN_TEST(test_Category.Models.Read.Category_parentCategoryId_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Category.Models.Read.Category_googleCategoryPath_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Category.Models.Write.Category_parentCategoryId_is_assigned_from_json);
    
    
    
    
    
    
    
    
    RUN_TEST(test_Envelope_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Brand.Models.Read.Brand_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Category.Models.Read.Category_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Int_message_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Envelope-Int_resource_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.Feed_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.Product_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.ProductItem_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.RelationType_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Market.Models.Market_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-PageArea.Models.Read.PageArea_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-PageArea.Models.Read.PageAreaFamily_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Product.Models.Read.Product_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Product.Models.Read.ProductItem_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameter_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameterGroup_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameterValue_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-String_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Supplier.Models.Read.Supplier_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-User.Models.Read.UserProfile_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Variant.Models.Read.Variant-_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Variant.Models.Read.VariantGroup_message_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Market.Models.Market_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_displayName_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_currency_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_vatRate_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_marketPrefix_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_countryId_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_currencyId_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_currencyRate_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_languageId_is_assigned_from_json);
    
    
    RUN_TEST(test_Market.Models.Market_language_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Capture_captureId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_orderPaymentId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_orderId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_externalOrderId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_reference_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_description_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_processedOn_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_capturedItemTotal_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_capturedShippingFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_capturedPaymentFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_capturedDiscount_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_capturedBalance_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_vatRate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_trackingNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_shippingName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_trackingUri_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_shippingMethod_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_paymentName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_locale_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Capture_orderTransactionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Capture_secondaryOrderTransactionId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CaptureRow_orderRowId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_itemId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_price_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_priceExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_productName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_variant_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CaptureRow_brand_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_orderId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_externalOrderId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_cartId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_sessionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_siteId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_currency_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_status_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_ipAddress_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_message_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_internalMessage_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_locale_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_campaignId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_campaignCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_campaignName_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_customerId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_customerTypeId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_gender_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_dateOfBirth_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_personalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_userAgent_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_metaData_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_paymentId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_transactionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_secondaryTransactionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_country_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_company_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_organizationNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_firstName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_lastName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_address1_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_address2_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_zip_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_city_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_region_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_phone_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_mobilePhone_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_careOf_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCountry_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCompany_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingOrganizationNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingFirstName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingLastName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingEmail_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingAddress1_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingAddress2_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingZip_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCity_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingRegion_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingPhone_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingMobilePhone_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCareOf_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_pickupPoint_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_desiredDeliveryDate_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_sum_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_expectedSum_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_orderValueIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_orderValueExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_itemValueIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_itemValueExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_discountIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_discountExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_percentDiscount_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_balance_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingFeeIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingFeeExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_paymentFeeIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_paymentFeeExVat_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_sku_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_discountRate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_cartRowId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productContainerBuildId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_message_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_articleNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_gtin_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_brand_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_variant_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_quantity_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_priceIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_priceExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_expectedTotalPriceIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_discountIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_discountExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_expectedTotalDiscountIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productUrl_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_imageUrl_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_weight_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_height_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_width_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_length_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_campaignGroupData_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productPriceCampaignId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productPriceListId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.FreightClass_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.FreightClass_type_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.FreightClass_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.FreightClass_typeAsEnum_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.Address_company_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_careOf_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_state_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_country_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_firstName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_lastName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_addressLine1_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_addressLine2_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_addressLine3_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_zip_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_city_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_phone_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_mobile_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Address_entryCode_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.Order_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_personalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_customerId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_customerTypeId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_createdAt_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_updatedAt_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_completedAt_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_status_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_currency_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_currencyRate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_marketId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_marketName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_language_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_orderTotal_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_expectedSum_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_vATTotal_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_orderValueIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_orderValueExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_itemValueIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_itemValueExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_discount_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_discountExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_fromBalance_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_shippingFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_shippingFeeExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_paymentFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_paymentFeeExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_message_is_assigned_from_json);
    
    
    
    
    
    
    
    
    
    RUN_TEST(test_Order.Models.Order_ip_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_userAgent_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_serviceLocation_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_campaignCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_campaignCodeId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_percent_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_desiredDeliveryDate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_gender_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_cartId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_sessionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_externalOrderStatus_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Order.Models.Order_metaData_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Order_publicId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderQuery_updated_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_statusList_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_marketId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_paymentName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_parcelGroupId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_customerId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_include_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_externalOrderStatus_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_combineProductContainerRows_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_packingLocationId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderRow_id_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderStatus_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderStatus_displayName_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderUpdate_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderUpdate_parcelNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.OrderUpdate_externalOrderStatus_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_displayName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_transactionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_secondaryTransactionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_reservationNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_reservationDate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentDate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_total_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_payed_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_shippingFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentOption_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.Refund_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_orderRowId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_paymentDetailId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_returnId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_articleNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_createdAt_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_total_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_reasonCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_reason_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_toBalance_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_vat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_itemId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.Refund_refundType_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_shippingId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_parcelNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_shippingDate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_trackingUrl_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_externalDeliveryOptionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_externalServiceId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_externalCarrierId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_pickupPoint_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.ProcessedCapture_captureId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ProcessedCapture_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ProcessedCapture_reference_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ProcessedCapture_processedOn_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.ProcessedRefund_refundId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ProcessedRefund_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ProcessedRefund_reference_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ProcessedRefund_processedOn_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Refund_refundId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_refundInstanceId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_orderId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_externalOrderId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_reference_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_description_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_processedOn_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_refundedItemTotal_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_refundedShippingFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_refundedPaymentFee_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_refundedDiscount_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_refundedBalance_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_vatRate_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_paymentName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_locale_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.Refund_orderTransactionId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.Refund_secondaryOrderTransactionId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.RefundRow_orderRowId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_itemId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_price_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_priceExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_productName_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_variant_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.RefundRow_brand_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_orderId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_userId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_phone_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_currency_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_sumIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_balanceIncVat_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest.StockItem_itemId_is_assigned_from_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest.StockItem_quantity_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_index_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_name_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_familyId_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_settings_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageAreaFamily_id_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageAreaFamily_name_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageAreaFamily_filterableProperties_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_id_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_name_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_type_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_active_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_size_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_configuration_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_id_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_name_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_active_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_layout_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_responsiveMode_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_visibility_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_design_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Write.PageArea_index_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Write.PageArea_name_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Write.PageArea_familyId_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Write.PageAreaFamily_id_is_assigned_from_json);
    
    
    RUN_TEST(test_PageArea.Models.Write.PageAreaFamily_name_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_PageResult_batchId_is_assigned_from_json);
    
    
    RUN_TEST(test_PageResult_page_is_assigned_from_json);
    
    
    RUN_TEST(test_PageResult_rowCount_is_assigned_from_json);
    
    
    RUN_TEST(test_PageResult_pageCount_is_assigned_from_json);
    
    
    RUN_TEST(test_PageResult_pageSize_is_assigned_from_json);
    
    
    RUN_TEST(test_PageResult_hasMoreRows_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_collectionName_is_assigned_from_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadMobile_is_assigned_from_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsMobile_is_assigned_from_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadDesktop_is_assigned_from_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsDesktop_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_enableLazyloadMobile_is_assigned_from_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_eagerLoadStepsMobile_is_assigned_from_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_enableLazyloadDesktop_is_assigned_from_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_eagerLoadStepsDesktop_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_paymentId_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_paymentGroupId_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_displayName_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_fee_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_icon_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_sort_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_period_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_termsLink_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_infoLink_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_personalIdRequired_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_registeredAddressRequired_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_houseNumberRequired_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_houseExtensionShown_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_genderRequired_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_birthdateRequired_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_siteId_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_customerTypeId_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_countryId_is_assigned_from_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_sum_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PriceList.Models.PriceList_id_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_name_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_marketId_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_marketPrefix_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_currency_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PriceList.Models.PriceListPriceResponse_message_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_PriceList.Models.PriceListPriceResponse_updateCount_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceListId_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceListName_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceIncVat_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceExVat_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_vatRate_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_country_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_currency_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_staggeredCount_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_validFrom_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_validTo_is_assigned_from_json);
    
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_priceListId_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_price_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_currency_is_assigned_from_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_staggeredCount_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.MonitorSku_siteId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.MonitorSku_languageCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.MonitorSku_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.MonitorSku_skuId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.ProductCategory_categoryId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.ProductQuery_updatedAfter_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Product.Models.ProductQuery_onlySellable_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.ProductQuery_feedId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.ProductQuery_batchId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Feed_feedId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_url_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_layout_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_market_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_language_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_defaultCurrency_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_defaultCountry_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.FeedMembership_feedId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.FeedMembership_allowSale_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Image_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Image_url_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Image_order_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_articleNumber_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_dateCreated_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_dateUpdated_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_active_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_purchasePrice_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_purchasePriceCurrency_is_assigned_from_json);
    
    
    
    
    
    
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_brandId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_brandName_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_supplierId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_supplierName_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_vat_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_primaryImage_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_freightClassId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_intrastatCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_countryOfOrigin_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_variantGroupId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_vatId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_activationDate_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_mainCategoryId_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_itemId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_articleNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_shelf_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_weight_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_length_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_width_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_height_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_gtin_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_dateCreated_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_dateUpdated_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_active_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_externalId_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_itemId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stock_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stockOversellable_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stockStatic_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stockSellable_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.ProductUrl_url_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductUrl_market_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductUrl_language_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.RelatedProduct_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelatedProduct_relatedProductId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelatedProduct_relationTypeId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.RelationType_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelationType_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelationType_order_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_market_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_country_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_service_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_serviceId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_fee_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.RelatedProductEnvelope_message_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Product.Models.RelatedProductEnvelope_updateCount_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.StockEnvelope_message_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Product.Models.StockEnvelope_updateCount_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_articleNumber_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_active_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_purchasePrice_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_purchasePriceCurrency_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_brandId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_supplierId_is_assigned_from_json);
    
    
    
    
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_freightClassId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_intrastatCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_countryOfOrigin_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_variantGroupId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_vat_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_vatType_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_activationDate_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_itemId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_articleNumber_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_shelf_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_weight_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_length_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_width_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_height_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_gtin_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_active_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_externalId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_stock_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_stockSellable_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_stockType_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.RelatedProduct_relatedProductId_is_assigned_from_json);
    
    
    RUN_TEST(test_Product.Models.Write.RelatedProduct_relationTypeId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Product.ProductItemEnvelope_message_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_parameterId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_groupId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_groupName_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_parameterType_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_name_is_assigned_from_json);
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterGroup_groupId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterGroup_name_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterPredefinedValue_parameterId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterPredefinedValue_predefinedValueId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterPredefinedValue_name_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterValueId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterName_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_groupId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_groupName_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterType_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_value_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_description_is_assigned_from_json);
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_internalIdentifier_is_assigned_from_json);
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_parameterId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_groupId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_parameterType_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_name_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterGroup_name_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterPredefinedValue_parameterId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterPredefinedValue_predefinedValueId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterPredefinedValue_name_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterValue_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterValue_parameterId_is_assigned_from_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterValue_value_is_assigned_from_json);
    
    
    
    
    
    
    RUN_TEST(test_Shared.Models.LocalizableContent_languageCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Shared.Models.LocalizableContent_content_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Shipping.Models.ParcelGroupOptions_markAsDelivered_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ParcelGroupOptions_signalCapturesCreated_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_fee_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_logo_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_shippingData_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_siteId_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_countryId_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_shippingId_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_deliveryOptionId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_minimumFreeShippingLimit_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_id_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_externalId_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_fee_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_logo_is_assigned_from_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_shippingData_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_supplierId_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_address1_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_address2_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_address3_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_zipCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_country_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_contactPerson_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_phone1_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_phone2_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_externalId_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Supplier.Models.SupplierQuery_nameContains_is_assigned_from_json);
    
    
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_address1_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_address2_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_address3_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_zipCode_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_country_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_contactPerson_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_phone1_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_phone2_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_email_is_assigned_from_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_externalId_is_assigned_from_json);
    
    
    
    
    
    
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_userId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_siteId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_email_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_firstName_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_lastName_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_phoneNr_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_mobilePhoneNr_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_company_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_address_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_address2_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_address3_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_doorCode_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_personalId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_birthyear_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_zip_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_city_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_careOf_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_country_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_memberId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_memberType_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_countryId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_userTypeId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_gender_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_newsletter_is_assigned_from_json);
    
    
    
    RUN_TEST(test_User.Models.UserProfileQuery_userId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.UserProfileQuery_email_is_assigned_from_json);
    
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_userId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_siteId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_email_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_password_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_firstName_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_lastName_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_phoneNr_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_mobilePhoneNr_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_company_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_userTypeId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_address_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_address2_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_address3_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_doorCode_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_personalId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_birthyear_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_zip_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_city_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_careOf_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_country_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_countryId_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_gender_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_newsletter_is_assigned_from_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_hasExternalAuth_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_productId_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_groupId_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_label_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_value_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_groupId_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_collapseInLists_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_mainProductId_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_Variant.Models.Write.Variant_label_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Write.Variant_value_is_assigned_from_json);
    
    
    
    RUN_TEST(test_Variant.Models.Write.VariantGroup_name_is_assigned_from_json);
    
    
    RUN_TEST(test_Variant.Models.Write.VariantGroup_collapseInLists_is_assigned_from_json);
    
    
    
    
    
    RUN_TEST(test_WidgetRestrictionSetup.WidgetRestrictionConfiguration_forcedResponsiveMode_is_assigned_from_json);
    
    
    

    
    
    RUN_TEST(test_API.Order.OrderComment_orderId_is_converted_to_json);
    
    
    RUN_TEST(test_API.Order.OrderComment_comment_is_converted_to_json);
    
    
    RUN_TEST(test_API.Order.OrderComment_system_is_converted_to_json);
    
    
    
    RUN_TEST(test_API.Order.TransactionData_orderId_is_converted_to_json);
    
    
    RUN_TEST(test_API.Order.TransactionData_transactionId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Brand.Models.BrandQuery_createdAfter_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_Brand.Models.Read.Brand_brandId_is_converted_to_json);
    
    
    RUN_TEST(test_Brand.Models.Read.Brand_name_is_converted_to_json);
    
    
    RUN_TEST(test_Brand.Models.Read.Brand_externalId_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Brand.Models.Write.Brand_name_is_converted_to_json);
    
    
    RUN_TEST(test_Brand.Models.Write.Brand_externalId_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Category.Models.CategoryQuery_createdAfter_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Category.Models.Read.Category_categoryId_is_converted_to_json);
    
    
    RUN_TEST(test_Category.Models.Read.Category_parentCategoryId_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Category.Models.Read.Category_googleCategoryPath_is_converted_to_json);
    
    
    
    RUN_TEST(test_Category.Models.Write.Category_parentCategoryId_is_converted_to_json);
    
    
    
    
    
    
    
    
    RUN_TEST(test_Envelope_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Brand.Models.Read.Brand_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Category.Models.Read.Category_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Int_message_is_converted_to_json);
    
    
    
    RUN_TEST(test_Envelope-Int_resource_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.Feed_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.Product_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.ProductItem_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-List-Product.Models.Read.RelationType_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Market.Models.Market_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-PageArea.Models.Read.PageArea_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-PageArea.Models.Read.PageAreaFamily_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Product.Models.Read.Product_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Product.Models.Read.ProductItem_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameter_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameterGroup_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameterPredefinedValue_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-ProductParameter.Models.Read.ProductParameterValue_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-String_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Supplier.Models.Read.Supplier_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-User.Models.Read.UserProfile_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Variant.Models.Read.Variant-_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Envelope-Variant.Models.Read.VariantGroup_message_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Market.Models.Market_id_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_name_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_displayName_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_currency_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_vatRate_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_marketPrefix_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_countryId_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_currencyId_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_currencyRate_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_languageId_is_converted_to_json);
    
    
    RUN_TEST(test_Market.Models.Market_language_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Capture_captureId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_orderPaymentId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_orderId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_externalOrderId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_reference_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_description_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_processedOn_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_capturedItemTotal_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_capturedShippingFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_capturedPaymentFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_capturedDiscount_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_capturedBalance_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_vatRate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_trackingNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_shippingName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_trackingUri_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_shippingMethod_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_paymentName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_locale_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Capture_orderTransactionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Capture_secondaryOrderTransactionId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CaptureRow_orderRowId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_itemId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_price_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_priceExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_name_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_productName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_variant_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CaptureRow_brand_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_orderId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_externalOrderId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_cartId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_sessionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_siteId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_currency_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_status_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_ipAddress_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_message_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_internalMessage_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_locale_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_campaignId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_campaignCode_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_campaignName_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_customerId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_customerTypeId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_gender_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_dateOfBirth_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_personalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_userAgent_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_metaData_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_paymentId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_transactionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_secondaryTransactionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_country_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_company_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_organizationNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_firstName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_lastName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_email_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_address1_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_address2_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_zip_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_city_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_region_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_phone_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_mobilePhone_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_careOf_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCountry_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCompany_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingOrganizationNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingFirstName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingLastName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingEmail_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingAddress1_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingAddress2_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingZip_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCity_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingRegion_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingPhone_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingMobilePhone_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingCareOf_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_pickupPoint_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_desiredDeliveryDate_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrder_sum_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_expectedSum_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_orderValueIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_orderValueExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_itemValueIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_itemValueExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_discountIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_discountExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_percentDiscount_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_balance_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingFeeIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_shippingFeeExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_paymentFeeIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrder_paymentFeeExVat_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_sku_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_discountRate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_cartRowId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productContainerBuildId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_message_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_articleNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_gtin_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_brand_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_name_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_variant_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_quantity_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_priceIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_priceExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_expectedTotalPriceIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_discountIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_discountExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_expectedTotalDiscountIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productUrl_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_imageUrl_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_weight_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_height_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_width_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_length_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_campaignGroupData_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productPriceCampaignId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.CheckoutOrderRow_productPriceListId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.FreightClass_id_is_converted_to_json);
    
    
    RUN_TEST(test_Order.FreightClass_type_is_converted_to_json);
    
    
    RUN_TEST(test_Order.FreightClass_name_is_converted_to_json);
    
    
    RUN_TEST(test_Order.FreightClass_typeAsEnum_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.Address_company_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_careOf_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_state_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_country_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_firstName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_lastName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_email_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_addressLine1_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_addressLine2_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_addressLine3_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_zip_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_city_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_phone_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_mobile_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Address_entryCode_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.Order_id_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_personalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_customerId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_customerTypeId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_createdAt_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_updatedAt_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_completedAt_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_status_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_currency_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_currencyRate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_marketId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_marketName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_language_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_orderTotal_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_expectedSum_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_vATTotal_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_orderValueIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_orderValueExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_itemValueIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_itemValueExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_discount_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_discountExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_fromBalance_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_shippingFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_shippingFeeExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_paymentFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_paymentFeeExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_message_is_converted_to_json);
    
    
    
    
    
    
    
    
    
    RUN_TEST(test_Order.Models.Order_ip_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_userAgent_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_serviceLocation_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_campaignCode_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_campaignCodeId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_percent_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_desiredDeliveryDate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_gender_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_cartId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_sessionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_externalOrderStatus_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Order.Models.Order_metaData_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Order_publicId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderQuery_updated_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_statusList_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_marketId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_paymentName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_parcelGroupId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_customerId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_email_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_include_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_externalOrderStatus_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_combineProductContainerRows_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderQuery_packingLocationId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderRow_id_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderStatus_name_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderStatus_displayName_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.OrderUpdate_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderUpdate_parcelNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.OrderUpdate_externalOrderStatus_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_id_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_name_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_displayName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_transactionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_secondaryTransactionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_reservationNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_reservationDate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentDate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_total_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_payed_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_shippingFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.PaymentDetail_paymentOption_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.Refund_id_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_orderRowId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_paymentDetailId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_returnId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_articleNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_createdAt_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_total_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_reasonCode_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_reason_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_toBalance_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_vat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_itemId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.Refund_refundType_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_id_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_shippingId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_name_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_parcelNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_shippingDate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_trackingUrl_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_externalDeliveryOptionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_externalServiceId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_externalCarrierId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Models.ShippingDetail_pickupPoint_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.ProcessedCapture_captureId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ProcessedCapture_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ProcessedCapture_reference_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ProcessedCapture_processedOn_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.ProcessedRefund_refundId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ProcessedRefund_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ProcessedRefund_reference_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ProcessedRefund_processedOn_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Refund_refundId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_refundInstanceId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_orderId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_externalOrderId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_reference_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_description_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_processedOn_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_refundedItemTotal_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_refundedShippingFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_refundedPaymentFee_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_refundedDiscount_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_refundedBalance_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_vatRate_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_paymentName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_locale_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.Refund_orderTransactionId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.Refund_secondaryOrderTransactionId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.RefundRow_orderRowId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_itemId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_price_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_priceExVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_name_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_productName_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_variant_is_converted_to_json);
    
    
    RUN_TEST(test_Order.RefundRow_brand_is_converted_to_json);
    
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_orderId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_userId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_email_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_phone_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_currency_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_sumIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest_balanceIncVat_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest.StockItem_itemId_is_converted_to_json);
    
    
    RUN_TEST(test_Order.ValidateOrderCreationRequest.StockItem_quantity_is_converted_to_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_index_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_name_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_familyId_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageArea_settings_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageAreaFamily_id_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageAreaFamily_name_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageAreaFamily_filterableProperties_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_id_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_name_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_type_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_active_is_converted_to_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_size_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidget_configuration_is_converted_to_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_id_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_name_is_converted_to_json);
    
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_active_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_layout_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_responsiveMode_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_visibility_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Read.PageWidgetContainer_design_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Write.PageArea_index_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Write.PageArea_name_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Write.PageArea_familyId_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_PageArea.Models.Write.PageAreaFamily_id_is_converted_to_json);
    
    
    RUN_TEST(test_PageArea.Models.Write.PageAreaFamily_name_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_PageResult_batchId_is_converted_to_json);
    
    
    RUN_TEST(test_PageResult_page_is_converted_to_json);
    
    
    RUN_TEST(test_PageResult_rowCount_is_converted_to_json);
    
    
    RUN_TEST(test_PageResult_pageCount_is_converted_to_json);
    
    
    RUN_TEST(test_PageResult_pageSize_is_converted_to_json);
    
    
    RUN_TEST(test_PageResult_hasMoreRows_is_converted_to_json);
    
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_collectionName_is_converted_to_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadMobile_is_converted_to_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsMobile_is_converted_to_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_enableLazyloadDesktop_is_converted_to_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadCollectionConfiguration_eagerLoadStepsDesktop_is_converted_to_json);
    
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_enableLazyloadMobile_is_converted_to_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_eagerLoadStepsMobile_is_converted_to_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_enableLazyloadDesktop_is_converted_to_json);
    
    
    RUN_TEST(test_PageWidget.LazyLoadSetup.LazyLoadConfiguration_eagerLoadStepsDesktop_is_converted_to_json);
    
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_paymentId_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_paymentGroupId_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_name_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_displayName_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_fee_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_icon_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_sort_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_period_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_termsLink_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_infoLink_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_personalIdRequired_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_registeredAddressRequired_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_houseNumberRequired_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_houseExtensionShown_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_genderRequired_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOption_birthdateRequired_is_converted_to_json);
    
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_siteId_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_email_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_customerTypeId_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_countryId_is_converted_to_json);
    
    
    RUN_TEST(test_Payment.Models.PaymentOptionQuery_sum_is_converted_to_json);
    
    
    
    RUN_TEST(test_PriceList.Models.PriceList_id_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_name_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_marketId_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_marketPrefix_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.PriceList_currency_is_converted_to_json);
    
    
    
    RUN_TEST(test_PriceList.Models.PriceListPriceResponse_message_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_PriceList.Models.PriceListPriceResponse_updateCount_is_converted_to_json);
    
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_productId_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceListId_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceListName_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceIncVat_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_priceExVat_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_vatRate_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_country_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_currency_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_staggeredCount_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_validFrom_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Read.PriceListPrice_validTo_is_converted_to_json);
    
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_priceListId_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_price_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_productId_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_currency_is_converted_to_json);
    
    
    RUN_TEST(test_PriceList.Models.Write.PriceListPrice_staggeredCount_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.MonitorSku_siteId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.MonitorSku_languageCode_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.MonitorSku_email_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.MonitorSku_skuId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.ProductCategory_categoryId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.ProductQuery_updatedAfter_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Product.Models.ProductQuery_onlySellable_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.ProductQuery_feedId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.ProductQuery_batchId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Feed_feedId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_name_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_url_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_layout_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_market_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_language_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_defaultCurrency_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Feed_defaultCountry_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.FeedMembership_feedId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.FeedMembership_allowSale_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Image_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Image_url_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Image_order_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_articleNumber_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_dateCreated_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_dateUpdated_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_active_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_purchasePrice_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_purchasePriceCurrency_is_converted_to_json);
    
    
    
    
    
    
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_brandId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_brandName_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_supplierId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_supplierName_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_vat_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_primaryImage_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_freightClassId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_intrastatCode_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_countryOfOrigin_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_variantGroupId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_vatId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.Product_activationDate_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Product.Models.Read.Product_mainCategoryId_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_itemId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_articleNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_name_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_shelf_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_weight_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_length_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_width_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_height_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_gtin_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_dateCreated_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_dateUpdated_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_active_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItem_externalId_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_itemId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stock_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stockOversellable_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stockStatic_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductItemStock_stockSellable_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.ProductUrl_url_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductUrl_market_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ProductUrl_language_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.RelatedProduct_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelatedProduct_relatedProductId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelatedProduct_relationTypeId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.RelationType_id_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelationType_name_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.RelationType_order_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_market_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_country_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_service_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_serviceId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Read.ShippingFee_fee_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.RelatedProductEnvelope_message_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Product.Models.RelatedProductEnvelope_updateCount_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.StockEnvelope_message_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Product.Models.StockEnvelope_updateCount_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_articleNumber_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_active_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_purchasePrice_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_purchasePriceCurrency_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_brandId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_supplierId_is_converted_to_json);
    
    
    
    
    
    
    
    RUN_TEST(test_Product.Models.Write.Product_freightClassId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_intrastatCode_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_countryOfOrigin_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_variantGroupId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_vat_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_vatType_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.Product_activationDate_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_itemId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_articleNumber_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_name_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_shelf_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_weight_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_length_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_width_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_height_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_gtin_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_active_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItem_externalId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_id_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_stock_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_stockSellable_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.ProductItemStock_stockType_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.Models.Write.RelatedProduct_relatedProductId_is_converted_to_json);
    
    
    RUN_TEST(test_Product.Models.Write.RelatedProduct_relationTypeId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Product.ProductItemEnvelope_message_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_parameterId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_groupId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_groupName_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_parameterType_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameter_name_is_converted_to_json);
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterGroup_groupId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterGroup_name_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterPredefinedValue_parameterId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterPredefinedValue_predefinedValueId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterPredefinedValue_name_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterValueId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_productId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterName_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_groupId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_groupName_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_parameterType_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_value_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_description_is_converted_to_json);
    
    
    
    RUN_TEST(test_ProductParameter.Models.Read.ProductParameterValue_internalIdentifier_is_converted_to_json);
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_parameterId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_groupId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_parameterType_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameter_name_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterGroup_name_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterPredefinedValue_parameterId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterPredefinedValue_predefinedValueId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterPredefinedValue_name_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterValue_productId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterValue_parameterId_is_converted_to_json);
    
    
    RUN_TEST(test_ProductParameter.Models.Write.ProductParameterValue_value_is_converted_to_json);
    
    
    
    
    
    
    RUN_TEST(test_Shared.Models.LocalizableContent_languageCode_is_converted_to_json);
    
    
    RUN_TEST(test_Shared.Models.LocalizableContent_content_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Shipping.Models.ParcelGroupOptions_markAsDelivered_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ParcelGroupOptions_signalCapturesCreated_is_converted_to_json);
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_id_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_name_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_fee_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_logo_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingOption_shippingData_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_siteId_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_countryId_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_shippingId_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_deliveryOptionId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingQuery_minimumFreeShippingLimit_is_converted_to_json);
    
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_id_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_externalId_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_name_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_fee_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_logo_is_converted_to_json);
    
    
    RUN_TEST(test_Shipping.Models.ShippingSubOption_shippingData_is_converted_to_json);
    
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_supplierId_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_name_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_address1_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_address2_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_address3_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_zipCode_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_country_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_contactPerson_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_phone1_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_phone2_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_email_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Read.Supplier_externalId_is_converted_to_json);
    
    
    
    RUN_TEST(test_Supplier.Models.SupplierQuery_nameContains_is_converted_to_json);
    
    
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_name_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_address1_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_address2_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_address3_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_zipCode_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_country_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_contactPerson_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_phone1_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_phone2_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_email_is_converted_to_json);
    
    
    RUN_TEST(test_Supplier.Models.Write.Supplier_externalId_is_converted_to_json);
    
    
    
    
    
    
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_userId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_siteId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_email_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_firstName_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_lastName_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_phoneNr_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_mobilePhoneNr_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_company_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_address_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_address2_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_address3_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_doorCode_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_personalId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_birthyear_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_zip_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_city_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_careOf_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_country_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_memberId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_memberType_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_countryId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_userTypeId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_gender_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Read.UserProfile_newsletter_is_converted_to_json);
    
    
    
    RUN_TEST(test_User.Models.UserProfileQuery_userId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.UserProfileQuery_email_is_converted_to_json);
    
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_userId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_siteId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_email_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_password_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_firstName_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_lastName_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_phoneNr_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_mobilePhoneNr_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_company_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_userTypeId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_address_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_address2_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_address3_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_doorCode_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_personalId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_birthyear_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_zip_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_city_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_careOf_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_country_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_countryId_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_gender_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_newsletter_is_converted_to_json);
    
    
    RUN_TEST(test_User.Models.Write.UserProfile_hasExternalAuth_is_converted_to_json);
    
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_productId_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_groupId_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_label_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Read.Variant_value_is_converted_to_json);
    
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_groupId_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_name_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_collapseInLists_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Read.VariantGroup_mainProductId_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_Variant.Models.Write.Variant_label_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Write.Variant_value_is_converted_to_json);
    
    
    
    RUN_TEST(test_Variant.Models.Write.VariantGroup_name_is_converted_to_json);
    
    
    RUN_TEST(test_Variant.Models.Write.VariantGroup_collapseInLists_is_converted_to_json);
    
    
    
    
    
    RUN_TEST(test_WidgetRestrictionSetup.WidgetRestrictionConfiguration_forcedResponsiveMode_is_converted_to_json);
    
    
    


}

int main(void) {
    UNITY_BEGIN();
    runTests();
    return UNITY_END();
}

void setup() {
    UNITY_BEGIN();
    runTests();
    UNITY_END();
}

void loop() {

}
