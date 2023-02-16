
#include "Brand.Models.Write.Brand.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Brand.Models.Write.Brand_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Brand.Models.Write.Brand obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Brand.Models.Write.Brand_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Brand.Models.Write.Brand obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}




void test_Brand.Models.Write.Brand_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Brand.Models.Write.Brand obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Brand.Models.Write.Brand_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Brand.Models.Write.Brand obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}



