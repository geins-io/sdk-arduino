
#include "Order.ValidateOrderCreationRequest.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.ValidateOrderCreationRequest_orderId_is_assigned_from_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getOrderId());








}


void test_Order.ValidateOrderCreationRequest_userId_is_assigned_from_json()
{
    bourne::json input =
    {
        "userId", 1
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUserId());








}


void test_Order.ValidateOrderCreationRequest_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_Order.ValidateOrderCreationRequest_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone", "hello"
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone().c_str());






}


void test_Order.ValidateOrderCreationRequest_currency_is_assigned_from_json()
{


    bourne::json input =
    {
        "currency", "hello"
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCurrency().c_str());






}


void test_Order.ValidateOrderCreationRequest_sumIncVat_is_assigned_from_json()
{








}


void test_Order.ValidateOrderCreationRequest_balanceIncVat_is_assigned_from_json()
{








}




void test_Order.ValidateOrderCreationRequest_orderId_is_converted_to_json()
{
    bourne::json input =
    {
        "orderId", 1
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["orderId"] == output["orderId"]);




}


void test_Order.ValidateOrderCreationRequest_userId_is_converted_to_json()
{
    bourne::json input =
    {
        "userId", 1
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["userId"] == output["userId"]);




}


void test_Order.ValidateOrderCreationRequest_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_Order.ValidateOrderCreationRequest_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "phone", "hello"
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone"] == output["phone"]);



}


void test_Order.ValidateOrderCreationRequest_currency_is_converted_to_json()
{

    bourne::json input =
    {
        "currency", "hello"
    };

    Order.ValidateOrderCreationRequest obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["currency"] == output["currency"]);



}


void test_Order.ValidateOrderCreationRequest_sumIncVat_is_converted_to_json()
{




}


void test_Order.ValidateOrderCreationRequest_balanceIncVat_is_converted_to_json()
{




}



