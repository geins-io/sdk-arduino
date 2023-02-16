
#include "Product.Models.StockEnvelope.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.StockEnvelope_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    Product.Models.StockEnvelope obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}




void test_Product.Models.StockEnvelope_updateCount_is_assigned_from_json()
{
    bourne::json input =
    {
        "updateCount", 1
    };

    Product.Models.StockEnvelope obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUpdateCount());








}



void test_Product.Models.StockEnvelope_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    Product.Models.StockEnvelope obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}




void test_Product.Models.StockEnvelope_updateCount_is_converted_to_json()
{
    bourne::json input =
    {
        "updateCount", 1
    };

    Product.Models.StockEnvelope obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["updateCount"] == output["updateCount"]);




}


