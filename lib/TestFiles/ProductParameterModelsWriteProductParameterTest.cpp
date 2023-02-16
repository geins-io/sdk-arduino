
#include "ProductParameter.Models.Write.ProductParameter.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ProductParameter.Models.Write.ProductParameter_parameterId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParameterId());








}


void test_ProductParameter.Models.Write.ProductParameter_groupId_is_assigned_from_json()
{
    bourne::json input =
    {
        "groupId", 1
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getGroupId());








}


void test_ProductParameter.Models.Write.ProductParameter_parameterType_is_assigned_from_json()
{
    bourne::json input =
    {
        "parameterType", 1
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParameterType());








}


void test_ProductParameter.Models.Write.ProductParameter_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}




void test_ProductParameter.Models.Write.ProductParameter_parameterId_is_converted_to_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterId"] == output["parameterId"]);




}


void test_ProductParameter.Models.Write.ProductParameter_groupId_is_converted_to_json()
{
    bourne::json input =
    {
        "groupId", 1
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["groupId"] == output["groupId"]);




}


void test_ProductParameter.Models.Write.ProductParameter_parameterType_is_converted_to_json()
{
    bourne::json input =
    {
        "parameterType", 1
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterType"] == output["parameterType"]);




}


void test_ProductParameter.Models.Write.ProductParameter_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    ProductParameter.Models.Write.ProductParameter obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}



