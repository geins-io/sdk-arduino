
#include "Variant.Models.Read.Variant.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Variant.Models.Read.Variant_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Variant.Models.Read.Variant obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_Variant.Models.Read.Variant_groupId_is_assigned_from_json()
{
    bourne::json input =
    {
        "groupId", 1
    };

    Variant.Models.Read.Variant obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getGroupId());








}


void test_Variant.Models.Read.Variant_label_is_assigned_from_json()
{


    bourne::json input =
    {
        "label", "hello"
    };

    Variant.Models.Read.Variant obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLabel().c_str());






}


void test_Variant.Models.Read.Variant_value_is_assigned_from_json()
{


    bourne::json input =
    {
        "value", "hello"
    };

    Variant.Models.Read.Variant obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getValue().c_str());






}



void test_Variant.Models.Read.Variant_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Variant.Models.Read.Variant obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_Variant.Models.Read.Variant_groupId_is_converted_to_json()
{
    bourne::json input =
    {
        "groupId", 1
    };

    Variant.Models.Read.Variant obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["groupId"] == output["groupId"]);




}


void test_Variant.Models.Read.Variant_label_is_converted_to_json()
{

    bourne::json input =
    {
        "label", "hello"
    };

    Variant.Models.Read.Variant obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["label"] == output["label"]);



}


void test_Variant.Models.Read.Variant_value_is_converted_to_json()
{

    bourne::json input =
    {
        "value", "hello"
    };

    Variant.Models.Read.Variant obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["value"] == output["value"]);



}


