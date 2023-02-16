
#include "Order.Models.Order.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.Order_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Order.Models.Order_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Order.Models.Order_personalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "personalId", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPersonalId().c_str());






}


void test_Order.Models.Order_customerId_is_assigned_from_json()
{
    bourne::json input =
    {
        "customerId", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCustomerId());








}


void test_Order.Models.Order_customerTypeId_is_assigned_from_json()
{
    bourne::json input =
    {
        "customerTypeId", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCustomerTypeId());








}


void test_Order.Models.Order_createdAt_is_assigned_from_json()
{








}


void test_Order.Models.Order_updatedAt_is_assigned_from_json()
{








}


void test_Order.Models.Order_completedAt_is_assigned_from_json()
{








}


void test_Order.Models.Order_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_Order.Models.Order_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_Order.Models.Order_currencyRate_is_assigned_from_json()
{








}


void test_Order.Models.Order_marketId_is_assigned_from_json()
{
    bourne::json input =
    {
        "marketId", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMarketId());








}


void test_Order.Models.Order_marketName_is_assigned_from_json()
{


    bourne::json input =
    {
        "marketName", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMarketName().c_str());






}


void test_Order.Models.Order_language_is_assigned_from_json()
{


    bourne::json input =
    {
        "language", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguage().c_str());






}


void test_Order.Models.Order_orderTotal_is_assigned_from_json()
{








}


void test_Order.Models.Order_expectedSum_is_assigned_from_json()
{








}


void test_Order.Models.Order_vATTotal_is_assigned_from_json()
{








}


void test_Order.Models.Order_orderValueIncVat_is_assigned_from_json()
{








}


void test_Order.Models.Order_orderValueExVat_is_assigned_from_json()
{








}


void test_Order.Models.Order_itemValueIncVat_is_assigned_from_json()
{








}


void test_Order.Models.Order_itemValueExVat_is_assigned_from_json()
{








}


void test_Order.Models.Order_discount_is_assigned_from_json()
{








}


void test_Order.Models.Order_discountExVat_is_assigned_from_json()
{








}


void test_Order.Models.Order_fromBalance_is_assigned_from_json()
{








}


void test_Order.Models.Order_shippingFee_is_assigned_from_json()
{








}


void test_Order.Models.Order_shippingFeeExVat_is_assigned_from_json()
{








}


void test_Order.Models.Order_paymentFee_is_assigned_from_json()
{








}


void test_Order.Models.Order_paymentFeeExVat_is_assigned_from_json()
{








}


void test_Order.Models.Order_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}









void test_Order.Models.Order_ip_is_assigned_from_json()
{


    bourne::json input =
    {
        "ip", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIp().c_str());






}


void test_Order.Models.Order_userAgent_is_assigned_from_json()
{


    bourne::json input =
    {
        "userAgent", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUserAgent().c_str());






}


void test_Order.Models.Order_serviceLocation_is_assigned_from_json()
{


    bourne::json input =
    {
        "serviceLocation", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getServiceLocation().c_str());






}


void test_Order.Models.Order_campaignCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "campaignCode", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCampaignCode().c_str());






}


void test_Order.Models.Order_campaignCodeId_is_assigned_from_json()
{
    bourne::json input =
    {
        "campaignCodeId", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCampaignCodeId());








}


void test_Order.Models.Order_percent_is_assigned_from_json()
{
    bourne::json input =
    {
        "percent", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPercent());








}


void test_Order.Models.Order_desiredDeliveryDate_is_assigned_from_json()
{








}


void test_Order.Models.Order_gender_is_assigned_from_json()
{




    bourne::json input =
    {
        "gender", true
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT(true == obj.isGender());




}


void test_Order.Models.Order_cartId_is_assigned_from_json()
{
    bourne::json input =
    {
        "cartId", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCartId());








}


void test_Order.Models.Order_sessionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "sessionId", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSessionId().c_str());






}


void test_Order.Models.Order_externalOrderStatus_is_assigned_from_json()
{
    bourne::json input =
    {
        "externalOrderStatus", 1
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getExternalOrderStatus());








}




void test_Order.Models.Order_metaData_is_assigned_from_json()
{








}


void test_Order.Models.Order_publicId_is_assigned_from_json()
{


    bourne::json input =
    {
        "publicId", "hello"
    };

    Order.Models.Order obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPublicId().c_str());






}



void test_Order.Models.Order_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Order.Models.Order_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Order.Models.Order_personalId_is_converted_to_json()
{

    bourne::json input =
    {
        "personalId", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["personalId"] == output["personalId"]);



}


void test_Order.Models.Order_customerId_is_converted_to_json()
{
    bourne::json input =
    {
        "customerId", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customerId"] == output["customerId"]);




}


void test_Order.Models.Order_customerTypeId_is_converted_to_json()
{
    bourne::json input =
    {
        "customerTypeId", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customerTypeId"] == output["customerTypeId"]);




}


void test_Order.Models.Order_createdAt_is_converted_to_json()
{




}


void test_Order.Models.Order_updatedAt_is_converted_to_json()
{




}


void test_Order.Models.Order_completedAt_is_converted_to_json()
{




}


void test_Order.Models.Order_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_Order.Models.Order_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_Order.Models.Order_currencyRate_is_converted_to_json()
{




}


void test_Order.Models.Order_marketId_is_converted_to_json()
{
    bourne::json input =
    {
        "marketId", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["marketId"] == output["marketId"]);




}


void test_Order.Models.Order_marketName_is_converted_to_json()
{

    bourne::json input =
    {
        "marketName", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["marketName"] == output["marketName"]);



}


void test_Order.Models.Order_language_is_converted_to_json()
{

    bourne::json input =
    {
        "language", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["language"] == output["language"]);



}


void test_Order.Models.Order_orderTotal_is_converted_to_json()
{




}


void test_Order.Models.Order_expectedSum_is_converted_to_json()
{




}


void test_Order.Models.Order_vATTotal_is_converted_to_json()
{




}


void test_Order.Models.Order_orderValueIncVat_is_converted_to_json()
{




}


void test_Order.Models.Order_orderValueExVat_is_converted_to_json()
{




}


void test_Order.Models.Order_itemValueIncVat_is_converted_to_json()
{




}


void test_Order.Models.Order_itemValueExVat_is_converted_to_json()
{




}


void test_Order.Models.Order_discount_is_converted_to_json()
{




}


void test_Order.Models.Order_discountExVat_is_converted_to_json()
{




}


void test_Order.Models.Order_fromBalance_is_converted_to_json()
{




}


void test_Order.Models.Order_shippingFee_is_converted_to_json()
{




}


void test_Order.Models.Order_shippingFeeExVat_is_converted_to_json()
{




}


void test_Order.Models.Order_paymentFee_is_converted_to_json()
{




}


void test_Order.Models.Order_paymentFeeExVat_is_converted_to_json()
{




}


void test_Order.Models.Order_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}









void test_Order.Models.Order_ip_is_converted_to_json()
{

    bourne::json input =
    {
        "ip", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ip"] == output["ip"]);



}


void test_Order.Models.Order_userAgent_is_converted_to_json()
{

    bourne::json input =
    {
        "userAgent", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["userAgent"] == output["userAgent"]);



}


void test_Order.Models.Order_serviceLocation_is_converted_to_json()
{

    bourne::json input =
    {
        "serviceLocation", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceLocation"] == output["serviceLocation"]);



}


void test_Order.Models.Order_campaignCode_is_converted_to_json()
{

    bourne::json input =
    {
        "campaignCode", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["campaignCode"] == output["campaignCode"]);



}


void test_Order.Models.Order_campaignCodeId_is_converted_to_json()
{
    bourne::json input =
    {
        "campaignCodeId", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["campaignCodeId"] == output["campaignCodeId"]);




}


void test_Order.Models.Order_percent_is_converted_to_json()
{
    bourne::json input =
    {
        "percent", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["percent"] == output["percent"]);




}


void test_Order.Models.Order_desiredDeliveryDate_is_converted_to_json()
{




}


void test_Order.Models.Order_gender_is_converted_to_json()
{


    bourne::json input =
    {
        "gender", true
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gender"] == output["gender"]);


}


void test_Order.Models.Order_cartId_is_converted_to_json()
{
    bourne::json input =
    {
        "cartId", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cartId"] == output["cartId"]);




}


void test_Order.Models.Order_sessionId_is_converted_to_json()
{

    bourne::json input =
    {
        "sessionId", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sessionId"] == output["sessionId"]);



}


void test_Order.Models.Order_externalOrderStatus_is_converted_to_json()
{
    bourne::json input =
    {
        "externalOrderStatus", 1
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalOrderStatus"] == output["externalOrderStatus"]);




}




void test_Order.Models.Order_metaData_is_converted_to_json()
{




}


void test_Order.Models.Order_publicId_is_converted_to_json()
{

    bourne::json input =
    {
        "publicId", "hello"
    };

    Order.Models.Order obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["publicId"] == output["publicId"]);



}


