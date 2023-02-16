
#include "PriceList.Models.Write.PriceListPrice.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PriceList.Models.Write.PriceListPrice_priceListId_is_assigned_from_json()
{
    bourne::json input =
    {
        "priceListId", 1
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPriceListId());








}


void test_PriceList.Models.Write.PriceListPrice_price_is_assigned_from_json()
{








}


void test_PriceList.Models.Write.PriceListPrice_productId_is_assigned_from_json()
{


    bourne::json input =
    {
        "productId", "hello"
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getProductId().c_str());






}


void test_PriceList.Models.Write.PriceListPrice_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_PriceList.Models.Write.PriceListPrice_staggeredCount_is_assigned_from_json()
{
    bourne::json input =
    {
        "staggeredCount", 1
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStaggeredCount());








}



void test_PriceList.Models.Write.PriceListPrice_priceListId_is_converted_to_json()
{
    bourne::json input =
    {
        "priceListId", 1
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["priceListId"] == output["priceListId"]);




}


void test_PriceList.Models.Write.PriceListPrice_price_is_converted_to_json()
{




}


void test_PriceList.Models.Write.PriceListPrice_productId_is_converted_to_json()
{

    bourne::json input =
    {
        "productId", "hello"
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);



}


void test_PriceList.Models.Write.PriceListPrice_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_PriceList.Models.Write.PriceListPrice_staggeredCount_is_converted_to_json()
{
    bourne::json input =
    {
        "staggeredCount", 1
    };

    PriceList.Models.Write.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["staggeredCount"] == output["staggeredCount"]);




}


