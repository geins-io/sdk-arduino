
#include "Envelope-Int.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Envelope-Int_message_is_assigned_from_json()
{


    bourne::json input =
    {
        "message", "hello"
    };

    Envelope-Int obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMessage().c_str());






}



void test_Envelope-Int_resource_is_assigned_from_json()
{
    bourne::json input =
    {
        "resource", 1
    };

    Envelope-Int obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getResource());








}




void test_Envelope-Int_message_is_converted_to_json()
{

    bourne::json input =
    {
        "message", "hello"
    };

    Envelope-Int obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["message"] == output["message"]);



}



void test_Envelope-Int_resource_is_converted_to_json()
{
    bourne::json input =
    {
        "resource", 1
    };

    Envelope-Int obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["resource"] == output["resource"]);




}



