
#include "Shipping.Models.ShippingQuery.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Shipping.Models.ShippingQuery_siteId_is_assigned_from_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSiteId());








}


void test_Shipping.Models.ShippingQuery_countryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCountryId());








}


void test_Shipping.Models.ShippingQuery_shippingId_is_assigned_from_json()
{
    bourne::json input =
    {
        "shippingId", 1
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getShippingId());








}


void test_Shipping.Models.ShippingQuery_deliveryOptionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "deliveryOptionId", "hello"
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDeliveryOptionId().c_str());






}



void test_Shipping.Models.ShippingQuery_minimumFreeShippingLimit_is_assigned_from_json()
{








}



void test_Shipping.Models.ShippingQuery_siteId_is_converted_to_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["siteId"] == output["siteId"]);




}


void test_Shipping.Models.ShippingQuery_countryId_is_converted_to_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryId"] == output["countryId"]);




}


void test_Shipping.Models.ShippingQuery_shippingId_is_converted_to_json()
{
    bourne::json input =
    {
        "shippingId", 1
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingId"] == output["shippingId"]);




}


void test_Shipping.Models.ShippingQuery_deliveryOptionId_is_converted_to_json()
{

    bourne::json input =
    {
        "deliveryOptionId", "hello"
    };

    Shipping.Models.ShippingQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["deliveryOptionId"] == output["deliveryOptionId"]);



}



void test_Shipping.Models.ShippingQuery_minimumFreeShippingLimit_is_converted_to_json()
{




}


