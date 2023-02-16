
#include "ProductParameter.Models.Write.ProductParameterValue.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ProductParameter.Models.Write.ProductParameterValue_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    ProductParameter.Models.Write.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_ProductParameter.Models.Write.ProductParameterValue_parameterId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Write.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParameterId());








}


void test_ProductParameter.Models.Write.ProductParameterValue_value_is_assigned_from_json()
{


    bourne::json input =
    {
        "value", "hello"
    };

    ProductParameter.Models.Write.ProductParameterValue obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getValue().c_str());






}




void test_ProductParameter.Models.Write.ProductParameterValue_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    ProductParameter.Models.Write.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_ProductParameter.Models.Write.ProductParameterValue_parameterId_is_converted_to_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Write.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterId"] == output["parameterId"]);




}


void test_ProductParameter.Models.Write.ProductParameterValue_value_is_converted_to_json()
{

    bourne::json input =
    {
        "value", "hello"
    };

    ProductParameter.Models.Write.ProductParameterValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["value"] == output["value"]);



}



