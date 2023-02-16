
#include "Category.Models.Read.Category.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Category.Models.Read.Category_categoryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "categoryId", 1
    };

    Category.Models.Read.Category obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCategoryId());








}


void test_Category.Models.Read.Category_parentCategoryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parentCategoryId", 1
    };

    Category.Models.Read.Category obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParentCategoryId());








}




void test_Category.Models.Read.Category_googleCategoryPath_is_assigned_from_json()
{


    bourne::json input =
    {
        "googleCategoryPath", "hello"
    };

    Category.Models.Read.Category obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getGoogleCategoryPath().c_str());






}



void test_Category.Models.Read.Category_categoryId_is_converted_to_json()
{
    bourne::json input =
    {
        "categoryId", 1
    };

    Category.Models.Read.Category obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["categoryId"] == output["categoryId"]);




}


void test_Category.Models.Read.Category_parentCategoryId_is_converted_to_json()
{
    bourne::json input =
    {
        "parentCategoryId", 1
    };

    Category.Models.Read.Category obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parentCategoryId"] == output["parentCategoryId"]);




}




void test_Category.Models.Read.Category_googleCategoryPath_is_converted_to_json()
{

    bourne::json input =
    {
        "googleCategoryPath", "hello"
    };

    Category.Models.Read.Category obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["googleCategoryPath"] == output["googleCategoryPath"]);



}


