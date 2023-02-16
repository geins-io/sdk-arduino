
#include "Order.Models.OrderQuery.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.OrderQuery_updated_is_assigned_from_json()
{








}


void test_Order.Models.OrderQuery_statusList_is_assigned_from_json()
{


    bourne::json input =
    {
        "statusList", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getStatusList().c_str());






}


void test_Order.Models.OrderQuery_marketId_is_assigned_from_json()
{
    bourne::json input =
    {
        "marketId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMarketId());








}


void test_Order.Models.OrderQuery_paymentName_is_assigned_from_json()
{


    bourne::json input =
    {
        "paymentName", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPaymentName().c_str());






}


void test_Order.Models.OrderQuery_parcelGroupId_is_assigned_from_json()
{
    bourne::json input =
    {
        "parcelGroupId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getParcelGroupId());








}


void test_Order.Models.OrderQuery_customerId_is_assigned_from_json()
{
    bourne::json input =
    {
        "customerId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCustomerId());








}


void test_Order.Models.OrderQuery_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_Order.Models.OrderQuery_include_is_assigned_from_json()
{


    bourne::json input =
    {
        "include", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInclude().c_str());






}


void test_Order.Models.OrderQuery_externalOrderStatus_is_assigned_from_json()
{
    bourne::json input =
    {
        "externalOrderStatus", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getExternalOrderStatus());








}


void test_Order.Models.OrderQuery_combineProductContainerRows_is_assigned_from_json()
{




    bourne::json input =
    {
        "combineProductContainerRows", true
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT(true == obj.isCombineProductContainerRows());




}


void test_Order.Models.OrderQuery_packingLocationId_is_assigned_from_json()
{
    bourne::json input =
    {
        "packingLocationId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPackingLocationId());








}



void test_Order.Models.OrderQuery_updated_is_converted_to_json()
{




}


void test_Order.Models.OrderQuery_statusList_is_converted_to_json()
{

    bourne::json input =
    {
        "statusList", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["statusList"] == output["statusList"]);



}


void test_Order.Models.OrderQuery_marketId_is_converted_to_json()
{
    bourne::json input =
    {
        "marketId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["marketId"] == output["marketId"]);




}


void test_Order.Models.OrderQuery_paymentName_is_converted_to_json()
{

    bourne::json input =
    {
        "paymentName", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentName"] == output["paymentName"]);



}


void test_Order.Models.OrderQuery_parcelGroupId_is_converted_to_json()
{
    bourne::json input =
    {
        "parcelGroupId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parcelGroupId"] == output["parcelGroupId"]);




}


void test_Order.Models.OrderQuery_customerId_is_converted_to_json()
{
    bourne::json input =
    {
        "customerId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customerId"] == output["customerId"]);




}


void test_Order.Models.OrderQuery_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_Order.Models.OrderQuery_include_is_converted_to_json()
{

    bourne::json input =
    {
        "include", "hello"
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["include"] == output["include"]);



}


void test_Order.Models.OrderQuery_externalOrderStatus_is_converted_to_json()
{
    bourne::json input =
    {
        "externalOrderStatus", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalOrderStatus"] == output["externalOrderStatus"]);




}


void test_Order.Models.OrderQuery_combineProductContainerRows_is_converted_to_json()
{


    bourne::json input =
    {
        "combineProductContainerRows", true
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["combineProductContainerRows"] == output["combineProductContainerRows"]);


}


void test_Order.Models.OrderQuery_packingLocationId_is_converted_to_json()
{
    bourne::json input =
    {
        "packingLocationId", 1
    };

    Order.Models.OrderQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["packingLocationId"] == output["packingLocationId"]);




}


