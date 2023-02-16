
#include "Product.Models.Read.ShippingFee.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.ShippingFee_market_is_assigned_from_json()
{
    bourne::json input =
    {
        "market", 1
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMarket());








}


void test_Product.Models.Read.ShippingFee_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_Product.Models.Read.ShippingFee_service_is_assigned_from_json()
{


    bourne::json input =
    {
        "service", "hello"
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getService().c_str());






}


void test_Product.Models.Read.ShippingFee_serviceId_is_assigned_from_json()
{
    bourne::json input =
    {
        "serviceId", 1
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getServiceId());








}


void test_Product.Models.Read.ShippingFee_fee_is_assigned_from_json()
{








}



void test_Product.Models.Read.ShippingFee_market_is_converted_to_json()
{
    bourne::json input =
    {
        "market", 1
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["market"] == output["market"]);




}


void test_Product.Models.Read.ShippingFee_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_Product.Models.Read.ShippingFee_service_is_converted_to_json()
{

    bourne::json input =
    {
        "service", "hello"
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["service"] == output["service"]);



}


void test_Product.Models.Read.ShippingFee_serviceId_is_converted_to_json()
{
    bourne::json input =
    {
        "serviceId", 1
    };

    Product.Models.Read.ShippingFee obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["serviceId"] == output["serviceId"]);




}


void test_Product.Models.Read.ShippingFee_fee_is_converted_to_json()
{




}


