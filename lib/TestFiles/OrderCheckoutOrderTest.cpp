
#include "Order.CheckoutOrder.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.CheckoutOrder_orderId_is_assigned_from_json()
{


    bourne::json input =
    {
        "orderId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderId().c_str());






}


void test_Order.CheckoutOrder_externalOrderId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalOrderId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalOrderId().c_str());






}


void test_Order.CheckoutOrder_cartId_is_assigned_from_json()
{


    bourne::json input =
    {
        "cartId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCartId().c_str());






}


void test_Order.CheckoutOrder_sessionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "sessionId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSessionId().c_str());






}


void test_Order.CheckoutOrder_siteId_is_assigned_from_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSiteId());








}


void test_Order.CheckoutOrder_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_Order.CheckoutOrder_status_is_assigned_from_json()
{


    bourne::json input =
    {
        "status", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatus().c_str());






}


void test_Order.CheckoutOrder_ipAddress_is_assigned_from_json()
{


    bourne::json input =
    {
        "ipAddress", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIpAddress().c_str());






}


void test_Order.CheckoutOrder_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}


void test_Order.CheckoutOrder_internalMessage_is_assigned_from_json()
{


    bourne::json input =
    {
        "internalMessage", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInternalMessage().c_str());






}


void test_Order.CheckoutOrder_locale_is_assigned_from_json()
{


    bourne::json input =
    {
        "locale", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocale().c_str());






}



void test_Order.CheckoutOrder_campaignId_is_assigned_from_json()
{
    bourne::json input =
    {
        "campaignId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCampaignId());








}


void test_Order.CheckoutOrder_campaignCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "campaignCode", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCampaignCode().c_str());






}


void test_Order.CheckoutOrder_campaignName_is_assigned_from_json()
{


    bourne::json input =
    {
        "campaignName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCampaignName().c_str());






}




void test_Order.CheckoutOrder_customerId_is_assigned_from_json()
{
    bourne::json input =
    {
        "customerId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCustomerId());








}


void test_Order.CheckoutOrder_customerTypeId_is_assigned_from_json()
{
    bourne::json input =
    {
        "customerTypeId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCustomerTypeId());








}


void test_Order.CheckoutOrder_gender_is_assigned_from_json()
{
    bourne::json input =
    {
        "gender", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getGender());








}


void test_Order.CheckoutOrder_dateOfBirth_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_personalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "personalId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPersonalId().c_str());






}


void test_Order.CheckoutOrder_userAgent_is_assigned_from_json()
{


    bourne::json input =
    {
        "userAgent", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getUserAgent().c_str());






}


void test_Order.CheckoutOrder_metaData_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_paymentId_is_assigned_from_json()
{
    bourne::json input =
    {
        "paymentId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPaymentId());








}


void test_Order.CheckoutOrder_transactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "transactionId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTransactionId().c_str());






}


void test_Order.CheckoutOrder_secondaryTransactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "secondaryTransactionId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSecondaryTransactionId().c_str());






}


void test_Order.CheckoutOrder_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_Order.CheckoutOrder_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "company", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCompany().c_str());






}


void test_Order.CheckoutOrder_organizationNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "organizationNumber", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrganizationNumber().c_str());






}


void test_Order.CheckoutOrder_firstName_is_assigned_from_json()
{


    bourne::json input =
    {
        "firstName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFirstName().c_str());






}


void test_Order.CheckoutOrder_lastName_is_assigned_from_json()
{


    bourne::json input =
    {
        "lastName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastName().c_str());






}


void test_Order.CheckoutOrder_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_Order.CheckoutOrder_address1_is_assigned_from_json()
{


    bourne::json input =
    {
        "address1", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress1().c_str());






}


void test_Order.CheckoutOrder_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "address2", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress2().c_str());






}


void test_Order.CheckoutOrder_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_Order.CheckoutOrder_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_Order.CheckoutOrder_region_is_assigned_from_json()
{


    bourne::json input =
    {
        "region", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRegion().c_str());






}


void test_Order.CheckoutOrder_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone().c_str());






}


void test_Order.CheckoutOrder_mobilePhone_is_assigned_from_json()
{


    bourne::json input =
    {
        "mobilePhone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMobilePhone().c_str());






}


void test_Order.CheckoutOrder_careOf_is_assigned_from_json()
{


    bourne::json input =
    {
        "careOf", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCareOf().c_str());






}


void test_Order.CheckoutOrder_shippingId_is_assigned_from_json()
{
    bourne::json input =
    {
        "shippingId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getShippingId());








}


void test_Order.CheckoutOrder_shippingCountry_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingCountry", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingCountry().c_str());






}


void test_Order.CheckoutOrder_shippingCompany_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingCompany", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingCompany().c_str());






}


void test_Order.CheckoutOrder_shippingOrganizationNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingOrganizationNumber", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingOrganizationNumber().c_str());






}


void test_Order.CheckoutOrder_shippingFirstName_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingFirstName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingFirstName().c_str());






}


void test_Order.CheckoutOrder_shippingLastName_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingLastName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingLastName().c_str());






}


void test_Order.CheckoutOrder_shippingEmail_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingEmail", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingEmail().c_str());






}


void test_Order.CheckoutOrder_shippingAddress1_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingAddress1", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingAddress1().c_str());






}


void test_Order.CheckoutOrder_shippingAddress2_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingAddress2", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingAddress2().c_str());






}


void test_Order.CheckoutOrder_shippingZip_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingZip", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingZip().c_str());






}


void test_Order.CheckoutOrder_shippingCity_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingCity", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingCity().c_str());






}


void test_Order.CheckoutOrder_shippingRegion_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingRegion", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingRegion().c_str());






}


void test_Order.CheckoutOrder_shippingPhone_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingPhone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingPhone().c_str());






}


void test_Order.CheckoutOrder_shippingMobilePhone_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingMobilePhone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingMobilePhone().c_str());






}


void test_Order.CheckoutOrder_shippingCareOf_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingCareOf", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingCareOf().c_str());






}


void test_Order.CheckoutOrder_pickupPoint_is_assigned_from_json()
{


    bourne::json input =
    {
        "pickupPoint", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPickupPoint().c_str());






}


void test_Order.CheckoutOrder_desiredDeliveryDate_is_assigned_from_json()
{








}



void test_Order.CheckoutOrder_sum_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_expectedSum_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_orderValueIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_orderValueExVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_itemValueIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_itemValueExVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_discountIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_discountExVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_percentDiscount_is_assigned_from_json()
{
    bourne::json input =
    {
        "percentDiscount", 1
    };

    Order.CheckoutOrder obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPercentDiscount());








}


void test_Order.CheckoutOrder_balance_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_shippingFeeIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_shippingFeeExVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_paymentFeeIncVat_is_assigned_from_json()
{








}


void test_Order.CheckoutOrder_paymentFeeExVat_is_assigned_from_json()
{








}



void test_Order.CheckoutOrder_orderId_is_converted_to_json()
{

    bourne::json input =
    {
        "orderId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderId"] == output["orderId"]);



}


void test_Order.CheckoutOrder_externalOrderId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalOrderId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalOrderId"] == output["externalOrderId"]);



}


void test_Order.CheckoutOrder_cartId_is_converted_to_json()
{

    bourne::json input =
    {
        "cartId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["cartId"] == output["cartId"]);



}


void test_Order.CheckoutOrder_sessionId_is_converted_to_json()
{

    bourne::json input =
    {
        "sessionId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sessionId"] == output["sessionId"]);



}


void test_Order.CheckoutOrder_siteId_is_converted_to_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["siteId"] == output["siteId"]);




}


void test_Order.CheckoutOrder_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_Order.CheckoutOrder_status_is_converted_to_json()
{

    bourne::json input =
    {
        "status", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["status"] == output["status"]);



}


void test_Order.CheckoutOrder_ipAddress_is_converted_to_json()
{

    bourne::json input =
    {
        "ipAddress", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["ipAddress"] == output["ipAddress"]);



}


void test_Order.CheckoutOrder_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}


void test_Order.CheckoutOrder_internalMessage_is_converted_to_json()
{

    bourne::json input =
    {
        "internalMessage", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["internalMessage"] == output["internalMessage"]);



}


void test_Order.CheckoutOrder_locale_is_converted_to_json()
{

    bourne::json input =
    {
        "locale", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["locale"] == output["locale"]);



}



void test_Order.CheckoutOrder_campaignId_is_converted_to_json()
{
    bourne::json input =
    {
        "campaignId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["campaignId"] == output["campaignId"]);




}


void test_Order.CheckoutOrder_campaignCode_is_converted_to_json()
{

    bourne::json input =
    {
        "campaignCode", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["campaignCode"] == output["campaignCode"]);



}


void test_Order.CheckoutOrder_campaignName_is_converted_to_json()
{

    bourne::json input =
    {
        "campaignName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["campaignName"] == output["campaignName"]);



}




void test_Order.CheckoutOrder_customerId_is_converted_to_json()
{
    bourne::json input =
    {
        "customerId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customerId"] == output["customerId"]);




}


void test_Order.CheckoutOrder_customerTypeId_is_converted_to_json()
{
    bourne::json input =
    {
        "customerTypeId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customerTypeId"] == output["customerTypeId"]);




}


void test_Order.CheckoutOrder_gender_is_converted_to_json()
{
    bourne::json input =
    {
        "gender", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gender"] == output["gender"]);




}


void test_Order.CheckoutOrder_dateOfBirth_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_personalId_is_converted_to_json()
{

    bourne::json input =
    {
        "personalId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["personalId"] == output["personalId"]);



}


void test_Order.CheckoutOrder_userAgent_is_converted_to_json()
{

    bourne::json input =
    {
        "userAgent", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["userAgent"] == output["userAgent"]);



}


void test_Order.CheckoutOrder_metaData_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_paymentId_is_converted_to_json()
{
    bourne::json input =
    {
        "paymentId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentId"] == output["paymentId"]);




}


void test_Order.CheckoutOrder_transactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "transactionId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["transactionId"] == output["transactionId"]);



}


void test_Order.CheckoutOrder_secondaryTransactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "secondaryTransactionId", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["secondaryTransactionId"] == output["secondaryTransactionId"]);



}


void test_Order.CheckoutOrder_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_Order.CheckoutOrder_company_is_converted_to_json()
{

    bourne::json input =
    {
        "company", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["company"] == output["company"]);



}


void test_Order.CheckoutOrder_organizationNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "organizationNumber", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["organizationNumber"] == output["organizationNumber"]);



}


void test_Order.CheckoutOrder_firstName_is_converted_to_json()
{

    bourne::json input =
    {
        "firstName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["firstName"] == output["firstName"]);



}


void test_Order.CheckoutOrder_lastName_is_converted_to_json()
{

    bourne::json input =
    {
        "lastName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lastName"] == output["lastName"]);



}


void test_Order.CheckoutOrder_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_Order.CheckoutOrder_address1_is_converted_to_json()
{

    bourne::json input =
    {
        "address1", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address1"] == output["address1"]);



}


void test_Order.CheckoutOrder_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "address2", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address2"] == output["address2"]);



}


void test_Order.CheckoutOrder_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_Order.CheckoutOrder_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_Order.CheckoutOrder_region_is_converted_to_json()
{

    bourne::json input =
    {
        "region", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["region"] == output["region"]);



}


void test_Order.CheckoutOrder_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "phone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone"] == output["phone"]);



}


void test_Order.CheckoutOrder_mobilePhone_is_converted_to_json()
{

    bourne::json input =
    {
        "mobilePhone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mobilePhone"] == output["mobilePhone"]);



}


void test_Order.CheckoutOrder_careOf_is_converted_to_json()
{

    bourne::json input =
    {
        "careOf", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["careOf"] == output["careOf"]);



}


void test_Order.CheckoutOrder_shippingId_is_converted_to_json()
{
    bourne::json input =
    {
        "shippingId", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingId"] == output["shippingId"]);




}


void test_Order.CheckoutOrder_shippingCountry_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingCountry", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingCountry"] == output["shippingCountry"]);



}


void test_Order.CheckoutOrder_shippingCompany_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingCompany", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingCompany"] == output["shippingCompany"]);



}


void test_Order.CheckoutOrder_shippingOrganizationNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingOrganizationNumber", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingOrganizationNumber"] == output["shippingOrganizationNumber"]);



}


void test_Order.CheckoutOrder_shippingFirstName_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingFirstName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingFirstName"] == output["shippingFirstName"]);



}


void test_Order.CheckoutOrder_shippingLastName_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingLastName", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingLastName"] == output["shippingLastName"]);



}


void test_Order.CheckoutOrder_shippingEmail_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingEmail", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingEmail"] == output["shippingEmail"]);



}


void test_Order.CheckoutOrder_shippingAddress1_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingAddress1", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingAddress1"] == output["shippingAddress1"]);



}


void test_Order.CheckoutOrder_shippingAddress2_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingAddress2", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingAddress2"] == output["shippingAddress2"]);



}


void test_Order.CheckoutOrder_shippingZip_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingZip", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingZip"] == output["shippingZip"]);



}


void test_Order.CheckoutOrder_shippingCity_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingCity", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingCity"] == output["shippingCity"]);



}


void test_Order.CheckoutOrder_shippingRegion_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingRegion", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingRegion"] == output["shippingRegion"]);



}


void test_Order.CheckoutOrder_shippingPhone_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingPhone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingPhone"] == output["shippingPhone"]);



}


void test_Order.CheckoutOrder_shippingMobilePhone_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingMobilePhone", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingMobilePhone"] == output["shippingMobilePhone"]);



}


void test_Order.CheckoutOrder_shippingCareOf_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingCareOf", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingCareOf"] == output["shippingCareOf"]);



}


void test_Order.CheckoutOrder_pickupPoint_is_converted_to_json()
{

    bourne::json input =
    {
        "pickupPoint", "hello"
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pickupPoint"] == output["pickupPoint"]);



}


void test_Order.CheckoutOrder_desiredDeliveryDate_is_converted_to_json()
{




}



void test_Order.CheckoutOrder_sum_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_expectedSum_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_orderValueIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_orderValueExVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_itemValueIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_itemValueExVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_discountIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_discountExVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_percentDiscount_is_converted_to_json()
{
    bourne::json input =
    {
        "percentDiscount", 1
    };

    Order.CheckoutOrder obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["percentDiscount"] == output["percentDiscount"]);




}


void test_Order.CheckoutOrder_balance_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_shippingFeeIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_shippingFeeExVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_paymentFeeIncVat_is_converted_to_json()
{




}


void test_Order.CheckoutOrder_paymentFeeExVat_is_converted_to_json()
{




}


