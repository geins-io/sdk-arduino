
#include "Envelope-ProductParameter.Models.Read.ProductParameter.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Envelope-ProductParameter.Models.Read.ProductParameter_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    Envelope-ProductParameter.Models.Read.ProductParameter obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}






void test_Envelope-ProductParameter.Models.Read.ProductParameter_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    Envelope-ProductParameter.Models.Read.ProductParameter obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}





