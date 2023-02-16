
#include "Product.Models.Read.FeedMembership.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.FeedMembership_feedId_is_assigned_from_json()
{
    bourne::json input =
    {
        "feedId", 1
    };

    Product.Models.Read.FeedMembership obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getFeedId());








}


void test_Product.Models.Read.FeedMembership_allowSale_is_assigned_from_json()
{




    bourne::json input =
    {
        "allowSale", true
    };

    Product.Models.Read.FeedMembership obj(input.dump());

    TEST_ASSERT(true == obj.isAllowSale());




}



void test_Product.Models.Read.FeedMembership_feedId_is_converted_to_json()
{
    bourne::json input =
    {
        "feedId", 1
    };

    Product.Models.Read.FeedMembership obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["feedId"] == output["feedId"]);




}


void test_Product.Models.Read.FeedMembership_allowSale_is_converted_to_json()
{


    bourne::json input =
    {
        "allowSale", true
    };

    Product.Models.Read.FeedMembership obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["allowSale"] == output["allowSale"]);


}


