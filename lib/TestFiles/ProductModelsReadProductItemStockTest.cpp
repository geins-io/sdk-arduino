
#include "Product.Models.Read.ProductItemStock.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Read.ProductItemStock_itemId_is_assigned_from_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getItemId());








}


void test_Product.Models.Read.ProductItemStock_stock_is_assigned_from_json()
{
    bourne::json input =
    {
        "stock", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStock());








}


void test_Product.Models.Read.ProductItemStock_stockOversellable_is_assigned_from_json()
{
    bourne::json input =
    {
        "stockOversellable", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStockOversellable());








}


void test_Product.Models.Read.ProductItemStock_stockStatic_is_assigned_from_json()
{
    bourne::json input =
    {
        "stockStatic", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStockStatic());








}


void test_Product.Models.Read.ProductItemStock_stockSellable_is_assigned_from_json()
{
    bourne::json input =
    {
        "stockSellable", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStockSellable());








}



void test_Product.Models.Read.ProductItemStock_itemId_is_converted_to_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["itemId"] == output["itemId"]);




}


void test_Product.Models.Read.ProductItemStock_stock_is_converted_to_json()
{
    bourne::json input =
    {
        "stock", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["stock"] == output["stock"]);




}


void test_Product.Models.Read.ProductItemStock_stockOversellable_is_converted_to_json()
{
    bourne::json input =
    {
        "stockOversellable", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["stockOversellable"] == output["stockOversellable"]);




}


void test_Product.Models.Read.ProductItemStock_stockStatic_is_converted_to_json()
{
    bourne::json input =
    {
        "stockStatic", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["stockStatic"] == output["stockStatic"]);




}


void test_Product.Models.Read.ProductItemStock_stockSellable_is_converted_to_json()
{
    bourne::json input =
    {
        "stockSellable", 1
    };

    Product.Models.Read.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["stockSellable"] == output["stockSellable"]);




}


