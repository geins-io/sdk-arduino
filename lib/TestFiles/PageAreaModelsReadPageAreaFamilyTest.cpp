
#include "PageArea.Models.Read.PageAreaFamily.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PageArea.Models.Read.PageAreaFamily_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    PageArea.Models.Read.PageAreaFamily obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_PageArea.Models.Read.PageAreaFamily_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Read.PageAreaFamily obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_PageArea.Models.Read.PageAreaFamily_filterableProperties_is_assigned_from_json()
{


    bourne::json input =
    {
        "filterableProperties", "hello"
    };

    PageArea.Models.Read.PageAreaFamily obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFilterableProperties().c_str());






}




void test_PageArea.Models.Read.PageAreaFamily_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    PageArea.Models.Read.PageAreaFamily obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_PageArea.Models.Read.PageAreaFamily_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Read.PageAreaFamily obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_PageArea.Models.Read.PageAreaFamily_filterableProperties_is_converted_to_json()
{

    bourne::json input =
    {
        "filterableProperties", "hello"
    };

    PageArea.Models.Read.PageAreaFamily obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["filterableProperties"] == output["filterableProperties"]);



}



