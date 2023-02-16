
#include "ProductParameter.Models.Write.ProductParameterPredefinedValue.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_ProductParameter.Models.Write.ProductParameterPredefinedValue_parameterId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Write.ProductParameterPredefinedValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParameterId());








}


void test_ProductParameter.Models.Write.ProductParameterPredefinedValue_predefinedValueId_is_assigned_from_json()
{
    bourne::json input =
    {
        "predefinedValueId", 1
    };

    ProductParameter.Models.Write.ProductParameterPredefinedValue obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPredefinedValueId());








}


void test_ProductParameter.Models.Write.ProductParameterPredefinedValue_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    ProductParameter.Models.Write.ProductParameterPredefinedValue obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}




void test_ProductParameter.Models.Write.ProductParameterPredefinedValue_parameterId_is_converted_to_json()
{
    bourne::json input =
    {
        "parameterId", 1
    };

    ProductParameter.Models.Write.ProductParameterPredefinedValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parameterId"] == output["parameterId"]);




}


void test_ProductParameter.Models.Write.ProductParameterPredefinedValue_predefinedValueId_is_converted_to_json()
{
    bourne::json input =
    {
        "predefinedValueId", 1
    };

    ProductParameter.Models.Write.ProductParameterPredefinedValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["predefinedValueId"] == output["predefinedValueId"]);




}


void test_ProductParameter.Models.Write.ProductParameterPredefinedValue_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    ProductParameter.Models.Write.ProductParameterPredefinedValue obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}



