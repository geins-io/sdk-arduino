
#include "Market.Models.Market.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Market.Models.Market_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Market.Models.Market_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Market.Models.Market_displayName_is_assigned_from_json()
{


    bourne::json input =
    {
        "displayName", "hello"
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisplayName().c_str());






}


void test_Market.Models.Market_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_Market.Models.Market_vatRate_is_assigned_from_json()
{








}


void test_Market.Models.Market_marketPrefix_is_assigned_from_json()
{


    bourne::json input =
    {
        "marketPrefix", "hello"
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMarketPrefix().c_str());






}


void test_Market.Models.Market_countryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCountryId());








}


void test_Market.Models.Market_currencyId_is_assigned_from_json()
{
    bourne::json input =
    {
        "currencyId", 1
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCurrencyId());








}


void test_Market.Models.Market_currencyRate_is_assigned_from_json()
{








}


void test_Market.Models.Market_languageId_is_assigned_from_json()
{
    bourne::json input =
    {
        "languageId", 1
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getLanguageId());








}


void test_Market.Models.Market_language_is_assigned_from_json()
{


    bourne::json input =
    {
        "language", "hello"
    };

    Market.Models.Market obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLanguage().c_str());






}



void test_Market.Models.Market_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Market.Models.Market_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Market.Models.Market_displayName_is_converted_to_json()
{

    bourne::json input =
    {
        "displayName", "hello"
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["displayName"] == output["displayName"]);



}


void test_Market.Models.Market_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_Market.Models.Market_vatRate_is_converted_to_json()
{




}


void test_Market.Models.Market_marketPrefix_is_converted_to_json()
{

    bourne::json input =
    {
        "marketPrefix", "hello"
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["marketPrefix"] == output["marketPrefix"]);



}


void test_Market.Models.Market_countryId_is_converted_to_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryId"] == output["countryId"]);




}


void test_Market.Models.Market_currencyId_is_converted_to_json()
{
    bourne::json input =
    {
        "currencyId", 1
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currencyId"] == output["currencyId"]);




}


void test_Market.Models.Market_currencyRate_is_converted_to_json()
{




}


void test_Market.Models.Market_languageId_is_converted_to_json()
{
    bourne::json input =
    {
        "languageId", 1
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["languageId"] == output["languageId"]);




}


void test_Market.Models.Market_language_is_converted_to_json()
{

    bourne::json input =
    {
        "language", "hello"
    };

    Market.Models.Market obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["language"] == output["language"]);



}


