
#include "API.Order.OrderComment.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_API.Order.OrderComment_orderId_is_assigned_from_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    API.Order.OrderComment obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrderId());








}


void test_API.Order.OrderComment_comment_is_assigned_from_json()
{


    bourne::json input =
    {
        "comment", "hello"
    };

    API.Order.OrderComment obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getComment().c_str());






}


void test_API.Order.OrderComment_system_is_assigned_from_json()
{




    bourne::json input =
    {
        "system", true
    };

    API.Order.OrderComment obj(input.dump());

    TEST_ASSERT(true == obj.isSystem());




}



void test_API.Order.OrderComment_orderId_is_converted_to_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    API.Order.OrderComment obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderId"] == output["orderId"]);




}


void test_API.Order.OrderComment_comment_is_converted_to_json()
{

    bourne::json input =
    {
        "comment", "hello"
    };

    API.Order.OrderComment obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["comment"] == output["comment"]);



}


void test_API.Order.OrderComment_system_is_converted_to_json()
{


    bourne::json input =
    {
        "system", true
    };

    API.Order.OrderComment obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["system"] == output["system"]);


}


