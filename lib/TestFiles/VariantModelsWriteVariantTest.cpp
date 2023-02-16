
#include "Variant.Models.Write.Variant.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Variant.Models.Write.Variant_label_is_assigned_from_json()
{


    bourne::json input =
    {
        "label", "hello"
    };

    Variant.Models.Write.Variant obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLabel().c_str());






}


void test_Variant.Models.Write.Variant_value_is_assigned_from_json()
{


    bourne::json input =
    {
        "value", "hello"
    };

    Variant.Models.Write.Variant obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getValue().c_str());






}



void test_Variant.Models.Write.Variant_label_is_converted_to_json()
{

    bourne::json input =
    {
        "label", "hello"
    };

    Variant.Models.Write.Variant obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["label"] == output["label"]);



}


void test_Variant.Models.Write.Variant_value_is_converted_to_json()
{

    bourne::json input =
    {
        "value", "hello"
    };

    Variant.Models.Write.Variant obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["value"] == output["value"]);



}


