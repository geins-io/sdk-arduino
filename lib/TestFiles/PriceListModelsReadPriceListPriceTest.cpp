
#include "PriceList.Models.Read.PriceListPrice.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_PriceList.Models.Read.PriceListPrice_productId_is_assigned_from_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getProductId());








}


void test_PriceList.Models.Read.PriceListPrice_priceListId_is_assigned_from_json()
{
    bourne::json input =
    {
        "priceListId", 1
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPriceListId());








}


void test_PriceList.Models.Read.PriceListPrice_priceListName_is_assigned_from_json()
{


    bourne::json input =
    {
        "priceListName", "hello"
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPriceListName().c_str());






}


void test_PriceList.Models.Read.PriceListPrice_priceIncVat_is_assigned_from_json()
{








}


void test_PriceList.Models.Read.PriceListPrice_priceExVat_is_assigned_from_json()
{








}


void test_PriceList.Models.Read.PriceListPrice_vatRate_is_assigned_from_json()
{








}


void test_PriceList.Models.Read.PriceListPrice_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_PriceList.Models.Read.PriceListPrice_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_PriceList.Models.Read.PriceListPrice_staggeredCount_is_assigned_from_json()
{
    bourne::json input =
    {
        "staggeredCount", 1
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStaggeredCount());








}


void test_PriceList.Models.Read.PriceListPrice_validFrom_is_assigned_from_json()
{








}


void test_PriceList.Models.Read.PriceListPrice_validTo_is_assigned_from_json()
{








}



void test_PriceList.Models.Read.PriceListPrice_productId_is_converted_to_json()
{
    bourne::json input =
    {
        "productId", 1
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["productId"] == output["productId"]);




}


void test_PriceList.Models.Read.PriceListPrice_priceListId_is_converted_to_json()
{
    bourne::json input =
    {
        "priceListId", 1
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["priceListId"] == output["priceListId"]);




}


void test_PriceList.Models.Read.PriceListPrice_priceListName_is_converted_to_json()
{

    bourne::json input =
    {
        "priceListName", "hello"
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["priceListName"] == output["priceListName"]);



}


void test_PriceList.Models.Read.PriceListPrice_priceIncVat_is_converted_to_json()
{




}


void test_PriceList.Models.Read.PriceListPrice_priceExVat_is_converted_to_json()
{




}


void test_PriceList.Models.Read.PriceListPrice_vatRate_is_converted_to_json()
{




}


void test_PriceList.Models.Read.PriceListPrice_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_PriceList.Models.Read.PriceListPrice_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_PriceList.Models.Read.PriceListPrice_staggeredCount_is_converted_to_json()
{
    bourne::json input =
    {
        "staggeredCount", 1
    };

    PriceList.Models.Read.PriceListPrice obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["staggeredCount"] == output["staggeredCount"]);




}


void test_PriceList.Models.Read.PriceListPrice_validFrom_is_converted_to_json()
{




}


void test_PriceList.Models.Read.PriceListPrice_validTo_is_converted_to_json()
{




}


