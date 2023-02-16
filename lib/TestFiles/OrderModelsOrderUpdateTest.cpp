
#include "Order.Models.OrderUpdate.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.OrderUpdate_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Models.OrderUpdate obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}


void test_Order.Models.OrderUpdate_parcelNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "parcelNumber", "hello"
    };

    Order.Models.OrderUpdate obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getParcelNumber().c_str());






}


void test_Order.Models.OrderUpdate_externalOrderStatus_is_assigned_from_json()
{
    bourne::json input =
    {
        "externalOrderStatus", 1
    };

    Order.Models.OrderUpdate obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getExternalOrderStatus());








}



void test_Order.Models.OrderUpdate_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Order.Models.OrderUpdate obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


void test_Order.Models.OrderUpdate_parcelNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "parcelNumber", "hello"
    };

    Order.Models.OrderUpdate obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parcelNumber"] == output["parcelNumber"]);



}


void test_Order.Models.OrderUpdate_externalOrderStatus_is_converted_to_json()
{
    bourne::json input =
    {
        "externalOrderStatus", 1
    };

    Order.Models.OrderUpdate obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalOrderStatus"] == output["externalOrderStatus"]);




}


