
#include "Product.Models.Write.ProductItemStock.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Product.Models.Write.ProductItemStock_id_is_assigned_from_json()
{


    bourne::json input =
    {
        "id", "hello"
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getId().c_str());






}


void test_Product.Models.Write.ProductItemStock_stock_is_assigned_from_json()
{
    bourne::json input =
    {
        "stock", 1
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStock());








}


void test_Product.Models.Write.ProductItemStock_stockSellable_is_assigned_from_json()
{
    bourne::json input =
    {
        "stockSellable", 1
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStockSellable());








}


void test_Product.Models.Write.ProductItemStock_stockType_is_assigned_from_json()
{
    bourne::json input =
    {
        "stockType", 1
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getStockType());








}



void test_Product.Models.Write.ProductItemStock_id_is_converted_to_json()
{

    bourne::json input =
    {
        "id", "hello"
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);



}


void test_Product.Models.Write.ProductItemStock_stock_is_converted_to_json()
{
    bourne::json input =
    {
        "stock", 1
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["stock"] == output["stock"]);




}


void test_Product.Models.Write.ProductItemStock_stockSellable_is_converted_to_json()
{
    bourne::json input =
    {
        "stockSellable", 1
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["stockSellable"] == output["stockSellable"]);




}


void test_Product.Models.Write.ProductItemStock_stockType_is_converted_to_json()
{
    bourne::json input =
    {
        "stockType", 1
    };

    Product.Models.Write.ProductItemStock obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["stockType"] == output["stockType"]);




}


