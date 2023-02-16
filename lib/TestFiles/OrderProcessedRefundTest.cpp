
#include "Order.ProcessedRefund.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.ProcessedRefund_refundId_is_assigned_from_json()
{


    bourne::json input =
    {
        "refundId", "hello"
    };

    Order.ProcessedRefund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRefundId().c_str());






}


void test_Order.ProcessedRefund_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.ProcessedRefund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Order.ProcessedRefund_reference_is_assigned_from_json()
{


    bourne::json input =
    {
        "reference", "hello"
    };

    Order.ProcessedRefund obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReference().c_str());






}


void test_Order.ProcessedRefund_processedOn_is_assigned_from_json()
{








}



void test_Order.ProcessedRefund_refundId_is_converted_to_json()
{

    bourne::json input =
    {
        "refundId", "hello"
    };

    Order.ProcessedRefund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["refundId"] == output["refundId"]);



}


void test_Order.ProcessedRefund_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.ProcessedRefund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Order.ProcessedRefund_reference_is_converted_to_json()
{

    bourne::json input =
    {
        "reference", "hello"
    };

    Order.ProcessedRefund obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reference"] == output["reference"]);



}


void test_Order.ProcessedRefund_processedOn_is_converted_to_json()
{




}


