
#include "API.Order.TransactionData.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_API.Order.TransactionData_orderId_is_assigned_from_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    API.Order.TransactionData obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrderId());








}


void test_API.Order.TransactionData_transactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "transactionId", "hello"
    };

    API.Order.TransactionData obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTransactionId().c_str());






}



void test_API.Order.TransactionData_orderId_is_converted_to_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    API.Order.TransactionData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderId"] == output["orderId"]);




}


void test_API.Order.TransactionData_transactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "transactionId", "hello"
    };

    API.Order.TransactionData obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["transactionId"] == output["transactionId"]);



}


