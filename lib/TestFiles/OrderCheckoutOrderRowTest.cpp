
#include "Order.CheckoutOrderRow.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.CheckoutOrderRow_sku_is_assigned_from_json()
{


    bourne::json input =
    {
        "sku", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSku().c_str());






}


void test_Order.CheckoutOrderRow_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_Order.CheckoutOrderRow_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Order.CheckoutOrderRow_discountRate_is_assigned_from_json()
{








}


void test_Order.CheckoutOrderRow_cartRowId_is_assigned_from_json()
{
    bourne::json input =
    {
        "cartRowId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCartRowId());








}


void test_Order.CheckoutOrderRow_productContainerBuildId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productContainerBuildId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductContainerBuildId());








}


void test_Order.CheckoutOrderRow_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}


void test_Order.CheckoutOrderRow_articleNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getArticleNumber().c_str());






}


void test_Order.CheckoutOrderRow_gtin_is_assigned_from_json()
{


    bourne::json input =
    {
        "gtin", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGtin().c_str());






}


void test_Order.CheckoutOrderRow_brand_is_assigned_from_json()
{


    bourne::json input =
    {
        "brand", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBrand().c_str());






}



void test_Order.CheckoutOrderRow_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Order.CheckoutOrderRow_variant_is_assigned_from_json()
{


    bourne::json input =
    {
        "variant", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getVariant().c_str());






}


void test_Order.CheckoutOrderRow_quantity_is_assigned_from_json()
{
    bourne::json input =
    {
        "quantity", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getQuantity());








}


void test_Order.CheckoutOrderRow_priceIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrderRow_priceExVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrderRow_expectedTotalPriceIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrderRow_discountIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrderRow_discountExVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrderRow_expectedTotalDiscountIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrderRow_productUrl_is_assigned_from_json()
{


    bourne::json input =
    {
        "productUrl", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProductUrl().c_str());






}


void test_Order.CheckoutOrderRow_imageUrl_is_assigned_from_json()
{


    bourne::json input =
    {
        "imageUrl", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getImageUrl().c_str());






}


void test_Order.CheckoutOrderRow_weight_is_assigned_from_json()
{
    bourne::json input =
    {
        "weight", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getWeight());








}


void test_Order.CheckoutOrderRow_height_is_assigned_from_json()
{
    bourne::json input =
    {
        "height", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getHeight());








}


void test_Order.CheckoutOrderRow_width_is_assigned_from_json()
{
    bourne::json input =
    {
        "width", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getWidth());








}


void test_Order.CheckoutOrderRow_length_is_assigned_from_json()
{
    bourne::json input =
    {
        "length", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLength());








}



void test_Order.CheckoutOrderRow_campaignGroupData_is_assigned_from_json()
{


    bourne::json input =
    {
        "campaignGroupData", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCampaignGroupData().c_str());






}



void test_Order.CheckoutOrderRow_productPriceCampaignId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productPriceCampaignId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductPriceCampaignId());








}


void test_Order.CheckoutOrderRow_productPriceListId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productPriceListId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductPriceListId());








}



void test_Order.CheckoutOrderRow_sku_is_converted_to_json()
{

    bourne::json input =
    {
        "sku", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sku"] == output["sku"]);



}


void test_Order.CheckoutOrderRow_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_Order.CheckoutOrderRow_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Order.CheckoutOrderRow_discountRate_is_converted_to_json()
{




}


void test_Order.CheckoutOrderRow_cartRowId_is_converted_to_json()
{
    bourne::json input =
    {
        "cartRowId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cartRowId"] == output["cartRowId"]);




}


void test_Order.CheckoutOrderRow_productContainerBuildId_is_converted_to_json()
{
    bourne::json input =
    {
        "productContainerBuildId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productContainerBuildId"] == output["productContainerBuildId"]);




}


void test_Order.CheckoutOrderRow_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}


void test_Order.CheckoutOrderRow_articleNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["articleNumber"] == output["articleNumber"]);



}


void test_Order.CheckoutOrderRow_gtin_is_converted_to_json()
{

    bourne::json input =
    {
        "gtin", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gtin"] == output["gtin"]);



}


void test_Order.CheckoutOrderRow_brand_is_converted_to_json()
{

    bourne::json input =
    {
        "brand", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["brand"] == output["brand"]);



}



void test_Order.CheckoutOrderRow_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Order.CheckoutOrderRow_variant_is_converted_to_json()
{

    bourne::json input =
    {
        "variant", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["variant"] == output["variant"]);



}


void test_Order.CheckoutOrderRow_quantity_is_converted_to_json()
{
    bourne::json input =
    {
        "quantity", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["quantity"] == output["quantity"]);




}


void test_Order.CheckoutOrderRow_priceIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrderRow_priceExVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrderRow_expectedTotalPriceIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrderRow_discountIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrderRow_discountExVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrderRow_expectedTotalDiscountIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrderRow_productUrl_is_converted_to_json()
{

    bourne::json input =
    {
        "productUrl", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productUrl"] == output["productUrl"]);



}


void test_Order.CheckoutOrderRow_imageUrl_is_converted_to_json()
{

    bourne::json input =
    {
        "imageUrl", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["imageUrl"] == output["imageUrl"]);



}


void test_Order.CheckoutOrderRow_weight_is_converted_to_json()
{
    bourne::json input =
    {
        "weight", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["weight"] == output["weight"]);




}


void test_Order.CheckoutOrderRow_height_is_converted_to_json()
{
    bourne::json input =
    {
        "height", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["height"] == output["height"]);




}


void test_Order.CheckoutOrderRow_width_is_converted_to_json()
{
    bourne::json input =
    {
        "width", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["width"] == output["width"]);




}


void test_Order.CheckoutOrderRow_length_is_converted_to_json()
{
    bourne::json input =
    {
        "length", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["length"] == output["length"]);




}



void test_Order.CheckoutOrderRow_campaignGroupData_is_converted_to_json()
{

    bourne::json input =
    {
        "campaignGroupData", "hello"
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["campaignGroupData"] == output["campaignGroupData"]);



}



void test_Order.CheckoutOrderRow_productPriceCampaignId_is_converted_to_json()
{
    bourne::json input =
    {
        "productPriceCampaignId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productPriceCampaignId"] == output["productPriceCampaignId"]);




}


void test_Order.CheckoutOrderRow_productPriceListId_is_converted_to_json()
{
    bourne::json input =
    {
        "productPriceListId", 1
    };

    Order.CheckoutOrderRow obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productPriceListId"] == output["productPriceListId"]);




}


