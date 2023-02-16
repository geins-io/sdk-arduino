
#include "Category.Models.Write.Category.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Category.Models.Write.Category_parentCategoryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parentCategoryId", 1
    };

    Category.Models.Write.Category obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParentCategoryId());








}





void test_Category.Models.Write.Category_parentCategoryId_is_converted_to_json()
{
    bourne::json input =
    {
        "parentCategoryId", 1
    };

    Category.Models.Write.Category obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parentCategoryId"] == output["parentCategoryId"]);




}




