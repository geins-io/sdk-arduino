
#include "Order.Models.Refund.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.Refund_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Order.Models.Refund_orderRowId_is_assigned_from_json()
{
    bourne::json input =
    {
        "orderRowId", 1
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrderRowId());








}


void test_Order.Models.Refund_paymentDetailId_is_assigned_from_json()
{
    bourne::json input =
    {
        "paymentDetailId", 1
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPaymentDetailId());








}


void test_Order.Models.Refund_returnId_is_assigned_from_json()
{
    bourne::json input =
    {
        "returnId", 1
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getReturnId());








}


void test_Order.Models.Refund_articleNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getArticleNumber().c_str());






}


void test_Order.Models.Refund_createdAt_is_assigned_from_json()
{








}


void test_Order.Models.Refund_total_is_assigned_from_json()
{








}


void test_Order.Models.Refund_reasonCode_is_assigned_from_json()
{
    bourne::json input =
    {
        "reasonCode", 1
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getReasonCode());








}


void test_Order.Models.Refund_reason_is_assigned_from_json()
{


    bourne::json input =
    {
        "reason", "hello"
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReason().c_str());






}


void test_Order.Models.Refund_toBalance_is_assigned_from_json()
{




    bourne::json input =
    {
        "toBalance", true
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT(true == obj.isToBalance());




}


void test_Order.Models.Refund_vat_is_assigned_from_json()
{








}


void test_Order.Models.Refund_itemId_is_assigned_from_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getItemId());








}


void test_Order.Models.Refund_refundType_is_assigned_from_json()
{


    bourne::json input =
    {
        "refundType", "hello"
    };

    Order.Models.Refund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRefundType().c_str());






}



void test_Order.Models.Refund_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Order.Models.Refund_orderRowId_is_converted_to_json()
{
    bourne::json input =
    {
        "orderRowId", 1
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderRowId"] == output["orderRowId"]);




}


void test_Order.Models.Refund_paymentDetailId_is_converted_to_json()
{
    bourne::json input =
    {
        "paymentDetailId", 1
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentDetailId"] == output["paymentDetailId"]);




}


void test_Order.Models.Refund_returnId_is_converted_to_json()
{
    bourne::json input =
    {
        "returnId", 1
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["returnId"] == output["returnId"]);




}


void test_Order.Models.Refund_articleNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "articleNumber", "hello"
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["articleNumber"] == output["articleNumber"]);



}


void test_Order.Models.Refund_createdAt_is_converted_to_json()
{




}


void test_Order.Models.Refund_total_is_converted_to_json()
{




}


void test_Order.Models.Refund_reasonCode_is_converted_to_json()
{
    bourne::json input =
    {
        "reasonCode", 1
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reasonCode"] == output["reasonCode"]);




}


void test_Order.Models.Refund_reason_is_converted_to_json()
{

    bourne::json input =
    {
        "reason", "hello"
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reason"] == output["reason"]);



}


void test_Order.Models.Refund_toBalance_is_converted_to_json()
{


    bourne::json input =
    {
        "toBalance", true
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["toBalance"] == output["toBalance"]);


}


void test_Order.Models.Refund_vat_is_converted_to_json()
{




}


void test_Order.Models.Refund_itemId_is_converted_to_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["itemId"] == output["itemId"]);




}


void test_Order.Models.Refund_refundType_is_converted_to_json()
{

    bourne::json input =
    {
        "refundType", "hello"
    };

    Order.Models.Refund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["refundType"] == output["refundType"]);



}


