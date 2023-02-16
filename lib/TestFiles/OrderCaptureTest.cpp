
#include "Order.Capture.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Capture_captureId_is_assigned_from_json()
{


    bourne::json input =
    {
        "captureId", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCaptureId().c_str());






}


void test_Order.Capture_orderPaymentId_is_assigned_from_json()
{


    bourne::json input =
    {
        "orderPaymentId", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderPaymentId().c_str());






}


void test_Order.Capture_orderId_is_assigned_from_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrderId());








}


void test_Order.Capture_externalOrderId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalOrderId", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalOrderId().c_str());






}


void test_Order.Capture_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Order.Capture_reference_is_assigned_from_json()
{


    bourne::json input =
    {
        "reference", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReference().c_str());






}


void test_Order.Capture_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "description", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDescription().c_str());






}


void test_Order.Capture_processedOn_is_assigned_from_json()
{








}


void test_Order.Capture_capturedItemTotal_is_assigned_from_json()
{








}


void test_Order.Capture_capturedShippingFee_is_assigned_from_json()
{








}


void test_Order.Capture_capturedPaymentFee_is_assigned_from_json()
{








}


void test_Order.Capture_capturedDiscount_is_assigned_from_json()
{








}


void test_Order.Capture_capturedBalance_is_assigned_from_json()
{








}


void test_Order.Capture_vatRate_is_assigned_from_json()
{








}


void test_Order.Capture_trackingNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "trackingNumber", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrackingNumber().c_str());






}


void test_Order.Capture_shippingName_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingName", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingName().c_str());






}


void test_Order.Capture_trackingUri_is_assigned_from_json()
{


    bourne::json input =
    {
        "trackingUri", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrackingUri().c_str());






}


void test_Order.Capture_shippingMethod_is_assigned_from_json()
{


    bourne::json input =
    {
        "shippingMethod", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getShippingMethod().c_str());






}


void test_Order.Capture_paymentName_is_assigned_from_json()
{


    bourne::json input =
    {
        "paymentName", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPaymentName().c_str());






}


void test_Order.Capture_locale_is_assigned_from_json()
{


    bourne::json input =
    {
        "locale", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocale().c_str());






}



void test_Order.Capture_orderTransactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "orderTransactionId", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderTransactionId().c_str());






}


void test_Order.Capture_secondaryOrderTransactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "secondaryOrderTransactionId", "hello"
    };

    Order.Capture obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSecondaryOrderTransactionId().c_str());






}



void test_Order.Capture_captureId_is_converted_to_json()
{

    bourne::json input =
    {
        "captureId", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["captureId"] == output["captureId"]);



}


void test_Order.Capture_orderPaymentId_is_converted_to_json()
{

    bourne::json input =
    {
        "orderPaymentId", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderPaymentId"] == output["orderPaymentId"]);



}


void test_Order.Capture_orderId_is_converted_to_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderId"] == output["orderId"]);




}


void test_Order.Capture_externalOrderId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalOrderId", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalOrderId"] == output["externalOrderId"]);



}


void test_Order.Capture_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Order.Capture_reference_is_converted_to_json()
{

    bourne::json input =
    {
        "reference", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reference"] == output["reference"]);



}


void test_Order.Capture_description_is_converted_to_json()
{

    bourne::json input =
    {
        "description", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["description"] == output["description"]);



}


void test_Order.Capture_processedOn_is_converted_to_json()
{




}


void test_Order.Capture_capturedItemTotal_is_converted_to_json()
{




}


void test_Order.Capture_capturedShippingFee_is_converted_to_json()
{




}


void test_Order.Capture_capturedPaymentFee_is_converted_to_json()
{




}


void test_Order.Capture_capturedDiscount_is_converted_to_json()
{




}


void test_Order.Capture_capturedBalance_is_converted_to_json()
{




}


void test_Order.Capture_vatRate_is_converted_to_json()
{




}


void test_Order.Capture_trackingNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "trackingNumber", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["trackingNumber"] == output["trackingNumber"]);



}


void test_Order.Capture_shippingName_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingName", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingName"] == output["shippingName"]);



}


void test_Order.Capture_trackingUri_is_converted_to_json()
{

    bourne::json input =
    {
        "trackingUri", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["trackingUri"] == output["trackingUri"]);



}


void test_Order.Capture_shippingMethod_is_converted_to_json()
{

    bourne::json input =
    {
        "shippingMethod", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingMethod"] == output["shippingMethod"]);



}


void test_Order.Capture_paymentName_is_converted_to_json()
{

    bourne::json input =
    {
        "paymentName", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentName"] == output["paymentName"]);



}


void test_Order.Capture_locale_is_converted_to_json()
{

    bourne::json input =
    {
        "locale", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["locale"] == output["locale"]);



}



void test_Order.Capture_orderTransactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "orderTransactionId", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderTransactionId"] == output["orderTransactionId"]);



}


void test_Order.Capture_secondaryOrderTransactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "secondaryOrderTransactionId", "hello"
    };

    Order.Capture obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["secondaryOrderTransactionId"] == output["secondaryOrderTransactionId"]);



}


