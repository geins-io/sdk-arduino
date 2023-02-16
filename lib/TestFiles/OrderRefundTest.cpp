
#include "Order.Refund.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Refund_refundId_is_assigned_from_json()
{


    bourne::json input =
    {
        "refundId", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRefundId().c_str());






}


void test_Order.Refund_refundInstanceId_is_assigned_from_json()
{
    bourne::json input =
    {
        "refundInstanceId", 1
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRefundInstanceId());








}


void test_Order.Refund_orderId_is_assigned_from_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrderId());








}


void test_Order.Refund_externalOrderId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalOrderId", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalOrderId().c_str());






}


void test_Order.Refund_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Order.Refund_reference_is_assigned_from_json()
{


    bourne::json input =
    {
        "reference", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReference().c_str());






}


void test_Order.Refund_description_is_assigned_from_json()
{


    bourne::json input =
    {
        "description", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDescription().c_str());






}


void test_Order.Refund_processedOn_is_assigned_from_json()
{








}


void test_Order.Refund_refundedItemTotal_is_assigned_from_json()
{








}


void test_Order.Refund_refundedShippingFee_is_assigned_from_json()
{








}


void test_Order.Refund_refundedPaymentFee_is_assigned_from_json()
{








}


void test_Order.Refund_refundedDiscount_is_assigned_from_json()
{








}


void test_Order.Refund_refundedBalance_is_assigned_from_json()
{








}


void test_Order.Refund_vatRate_is_assigned_from_json()
{








}


void test_Order.Refund_paymentName_is_assigned_from_json()
{


    bourne::json input =
    {
        "paymentName", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPaymentName().c_str());






}


void test_Order.Refund_locale_is_assigned_from_json()
{


    bourne::json input =
    {
        "locale", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLocale().c_str());






}



void test_Order.Refund_orderTransactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "orderTransactionId", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getOrderTransactionId().c_str());






}


void test_Order.Refund_secondaryOrderTransactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "secondaryOrderTransactionId", "hello"
    };

    Order.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSecondaryOrderTransactionId().c_str());






}



void test_Order.Refund_refundId_is_converted_to_json()
{

    bourne::json input =
    {
        "refundId", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["refundId"] == output["refundId"]);



}


void test_Order.Refund_refundInstanceId_is_converted_to_json()
{
    bourne::json input =
    {
        "refundInstanceId", 1
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["refundInstanceId"] == output["refundInstanceId"]);




}


void test_Order.Refund_orderId_is_converted_to_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderId"] == output["orderId"]);




}


void test_Order.Refund_externalOrderId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalOrderId", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalOrderId"] == output["externalOrderId"]);



}


void test_Order.Refund_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Order.Refund_reference_is_converted_to_json()
{

    bourne::json input =
    {
        "reference", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reference"] == output["reference"]);



}


void test_Order.Refund_description_is_converted_to_json()
{

    bourne::json input =
    {
        "description", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["description"] == output["description"]);



}


void test_Order.Refund_processedOn_is_converted_to_json()
{




}


void test_Order.Refund_refundedItemTotal_is_converted_to_json()
{




}


void test_Order.Refund_refundedShippingFee_is_converted_to_json()
{




}


void test_Order.Refund_refundedPaymentFee_is_converted_to_json()
{




}


void test_Order.Refund_refundedDiscount_is_converted_to_json()
{




}


void test_Order.Refund_refundedBalance_is_converted_to_json()
{




}


void test_Order.Refund_vatRate_is_converted_to_json()
{




}


void test_Order.Refund_paymentName_is_converted_to_json()
{

    bourne::json input =
    {
        "paymentName", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentName"] == output["paymentName"]);



}


void test_Order.Refund_locale_is_converted_to_json()
{

    bourne::json input =
    {
        "locale", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["locale"] == output["locale"]);



}



void test_Order.Refund_orderTransactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "orderTransactionId", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderTransactionId"] == output["orderTransactionId"]);



}


void test_Order.Refund_secondaryOrderTransactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "secondaryOrderTransactionId", "hello"
    };

    Order.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["secondaryOrderTransactionId"] == output["secondaryOrderTransactionId"]);



}


