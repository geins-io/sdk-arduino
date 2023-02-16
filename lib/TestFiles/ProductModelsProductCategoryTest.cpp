
#include "Product.Models.ProductCategory.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.ProductCategory_categoryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "categoryId", 1
    };

    Product.Models.ProductCategory obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCategoryId());








}



void test_Product.Models.ProductCategory_categoryId_is_converted_to_json()
{
    bourne::json input =
    {
        "categoryId", 1
    };

    Product.Models.ProductCategory obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["categoryId"] == output["categoryId"]);




}


