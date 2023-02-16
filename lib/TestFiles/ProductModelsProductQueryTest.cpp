
#include "Product.Models.ProductQuery.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.ProductQuery_updatedAfter_is_assigned_from_json()
{








}




void test_Product.Models.ProductQuery_onlySellable_is_assigned_from_json()
{




    bourne::json input =
    {
        "onlySellable", true
    };

    Product.Models.ProductQuery obj(input.dump());

    TEST_ASSERT(true == obj.isOnlySellable());




}


void test_Product.Models.ProductQuery_feedId_is_assigned_from_json()
{
    bourne::json input =
    {
        "feedId", 1
    };

    Product.Models.ProductQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getFeedId());








}


void test_Product.Models.ProductQuery_batchId_is_assigned_from_json()
{


    bourne::json input =
    {
        "batchId", "hello"
    };

    Product.Models.ProductQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBatchId().c_str());






}



void test_Product.Models.ProductQuery_updatedAfter_is_converted_to_json()
{




}




void test_Product.Models.ProductQuery_onlySellable_is_converted_to_json()
{


    bourne::json input =
    {
        "onlySellable", true
    };

    Product.Models.ProductQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["onlySellable"] == output["onlySellable"]);


}


void test_Product.Models.ProductQuery_feedId_is_converted_to_json()
{
    bourne::json input =
    {
        "feedId", 1
    };

    Product.Models.ProductQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["feedId"] == output["feedId"]);




}


void test_Product.Models.ProductQuery_batchId_is_converted_to_json()
{

    bourne::json input =
    {
        "batchId", "hello"
    };

    Product.Models.ProductQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["batchId"] == output["batchId"]);



}


