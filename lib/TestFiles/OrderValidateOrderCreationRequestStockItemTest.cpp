
#include "Order.ValidateOrderCreationRequest.StockItem.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.ValidateOrderCreationRequest.StockItem_itemId_is_assigned_from_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Order.ValidateOrderCreationRequest.StockItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getItemId());








}


void test_Order.ValidateOrderCreationRequest.StockItem_quantity_is_assigned_from_json()
{
    bourne::json input =
    {
        "quantity", 1
    };

    Order.ValidateOrderCreationRequest.StockItem obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getQuantity());








}



void test_Order.ValidateOrderCreationRequest.StockItem_itemId_is_converted_to_json()
{
    bourne::json input =
    {
        "itemId", 1
    };

    Order.ValidateOrderCreationRequest.StockItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["itemId"] == output["itemId"]);




}


void test_Order.ValidateOrderCreationRequest.StockItem_quantity_is_converted_to_json()
{
    bourne::json input =
    {
        "quantity", 1
    };

    Order.ValidateOrderCreationRequest.StockItem obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["quantity"] == output["quantity"]);




}


