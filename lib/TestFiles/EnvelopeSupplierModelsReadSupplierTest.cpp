
#include "Envelope-Supplier.Models.Read.Supplier.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Envelope-Supplier.Models.Read.Supplier_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    Envelope-Supplier.Models.Read.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}






void test_Envelope-Supplier.Models.Read.Supplier_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    Envelope-Supplier.Models.Read.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}





