
#include "Product.Models.Write.RelatedProduct.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Write.RelatedProduct_relatedProductId_is_assigned_from_json()
{


    bourne::json input =
    {
        "relatedProductId", "hello"
    };

    Product.Models.Write.RelatedProduct obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getRelatedProductId().c_str());






}


void test_Product.Models.Write.RelatedProduct_relationTypeId_is_assigned_from_json()
{
    bourne::json input =
    {
        "relationTypeId", 1
    };

    Product.Models.Write.RelatedProduct obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRelationTypeId());








}



void test_Product.Models.Write.RelatedProduct_relatedProductId_is_converted_to_json()
{

    bourne::json input =
    {
        "relatedProductId", "hello"
    };

    Product.Models.Write.RelatedProduct obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["relatedProductId"] == output["relatedProductId"]);



}


void test_Product.Models.Write.RelatedProduct_relationTypeId_is_converted_to_json()
{
    bourne::json input =
    {
        "relationTypeId", 1
    };

    Product.Models.Write.RelatedProduct obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["relationTypeId"] == output["relationTypeId"]);




}


