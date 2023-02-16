
#include "Product.Models.Read.RelatedProduct.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.RelatedProduct_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.RelatedProduct obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_Product.Models.Read.RelatedProduct_relatedProductId_is_assigned_from_json()
{
    bourne::json input =
    {
        "relatedProductId", 1
    };

    Product.Models.Read.RelatedProduct obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRelatedProductId());








}


void test_Product.Models.Read.RelatedProduct_relationTypeId_is_assigned_from_json()
{
    bourne::json input =
    {
        "relationTypeId", 1
    };

    Product.Models.Read.RelatedProduct obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getRelationTypeId());








}



void test_Product.Models.Read.RelatedProduct_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    Product.Models.Read.RelatedProduct obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_Product.Models.Read.RelatedProduct_relatedProductId_is_converted_to_json()
{
    bourne::json input =
    {
        "relatedProductId", 1
    };

    Product.Models.Read.RelatedProduct obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["relatedProductId"] == output["relatedProductId"]);




}


void test_Product.Models.Read.RelatedProduct_relationTypeId_is_converted_to_json()
{
    bourne::json input =
    {
        "relationTypeId", 1
    };

    Product.Models.Read.RelatedProduct obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["relationTypeId"] == output["relationTypeId"]);




}


