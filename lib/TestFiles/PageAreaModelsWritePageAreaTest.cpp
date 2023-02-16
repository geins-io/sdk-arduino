
#include "PageArea.Models.Write.PageArea.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PageArea.Models.Write.PageArea_index_is_assigned_from_json()
{
    bourne::json input =
    {
        "index", 1
    };

    PageArea.Models.Write.PageArea obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getIndex());








}


void test_PageArea.Models.Write.PageArea_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Write.PageArea obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_PageArea.Models.Write.PageArea_familyId_is_assigned_from_json()
{
    bourne::json input =
    {
        "familyId", 1
    };

    PageArea.Models.Write.PageArea obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getFamilyId());








}




void test_PageArea.Models.Write.PageArea_index_is_converted_to_json()
{
    bourne::json input =
    {
        "index", 1
    };

    PageArea.Models.Write.PageArea obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["index"] == output["index"]);




}


void test_PageArea.Models.Write.PageArea_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    PageArea.Models.Write.PageArea obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_PageArea.Models.Write.PageArea_familyId_is_converted_to_json()
{
    bourne::json input =
    {
        "familyId", 1
    };

    PageArea.Models.Write.PageArea obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["familyId"] == output["familyId"]);




}



