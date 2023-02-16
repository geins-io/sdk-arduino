
#include "Order.Models.OrderStatus.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.OrderStatus_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Order.Models.OrderStatus obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Order.Models.OrderStatus_displayName_is_assigned_from_json()
{


    bourne::json input =
    {
        "displayName", "hello"
    };

    Order.Models.OrderStatus obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisplayName().c_str());






}



void test_Order.Models.OrderStatus_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Order.Models.OrderStatus obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Order.Models.OrderStatus_displayName_is_converted_to_json()
{

    bourne::json input =
    {
        "displayName", "hello"
    };

    Order.Models.OrderStatus obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["displayName"] == output["displayName"]);



}


