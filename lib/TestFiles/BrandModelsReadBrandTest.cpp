
#include "Brand.Models.Read.Brand.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Brand.Models.Read.Brand_brandId_is_assigned_from_json()
{
    bourne::json input =
    {
        "brandId", 1
    };

    Brand.Models.Read.Brand obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getBrandId());








}


void test_Brand.Models.Read.Brand_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Brand.Models.Read.Brand obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Brand.Models.Read.Brand_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Brand.Models.Read.Brand obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}




void test_Brand.Models.Read.Brand_brandId_is_converted_to_json()
{
    bourne::json input =
    {
        "brandId", 1
    };

    Brand.Models.Read.Brand obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["brandId"] == output["brandId"]);




}


void test_Brand.Models.Read.Brand_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Brand.Models.Read.Brand obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Brand.Models.Read.Brand_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Brand.Models.Read.Brand obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}



