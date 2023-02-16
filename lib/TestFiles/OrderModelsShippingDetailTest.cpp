
#include "Order.Models.ShippingDetail.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.ShippingDetail_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Order.Models.ShippingDetail_shippingId_is_assigned_from_json()
{
    bourne::json input =
    {
        "shippingId", 1
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getShippingId());








}


void test_Order.Models.ShippingDetail_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Order.Models.ShippingDetail_parcelNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "parcelNumber", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getParcelNumber().c_str());






}


void test_Order.Models.ShippingDetail_shippingDate_is_assigned_from_json()
{








}


void test_Order.Models.ShippingDetail_trackingUrl_is_assigned_from_json()
{


    bourne::json input =
    {
        "trackingUrl", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTrackingUrl().c_str());






}


void test_Order.Models.ShippingDetail_externalDeliveryOptionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalDeliveryOptionId", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalDeliveryOptionId().c_str());






}


void test_Order.Models.ShippingDetail_externalServiceId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalServiceId", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalServiceId().c_str());






}


void test_Order.Models.ShippingDetail_externalCarrierId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalCarrierId", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalCarrierId().c_str());






}


void test_Order.Models.ShippingDetail_pickupPoint_is_assigned_from_json()
{


    bourne::json input =
    {
        "pickupPoint", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPickupPoint().c_str());






}



void test_Order.Models.ShippingDetail_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Order.Models.ShippingDetail_shippingId_is_converted_to_json()
{
    bourne::json input =
    {
        "shippingId", 1
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["shippingId"] == output["shippingId"]);




}


void test_Order.Models.ShippingDetail_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Order.Models.ShippingDetail_parcelNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "parcelNumber", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["parcelNumber"] == output["parcelNumber"]);



}


void test_Order.Models.ShippingDetail_shippingDate_is_converted_to_json()
{




}


void test_Order.Models.ShippingDetail_trackingUrl_is_converted_to_json()
{

    bourne::json input =
    {
        "trackingUrl", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["trackingUrl"] == output["trackingUrl"]);



}


void test_Order.Models.ShippingDetail_externalDeliveryOptionId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalDeliveryOptionId", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalDeliveryOptionId"] == output["externalDeliveryOptionId"]);



}


void test_Order.Models.ShippingDetail_externalServiceId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalServiceId", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalServiceId"] == output["externalServiceId"]);



}


void test_Order.Models.ShippingDetail_externalCarrierId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalCarrierId", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalCarrierId"] == output["externalCarrierId"]);



}


void test_Order.Models.ShippingDetail_pickupPoint_is_converted_to_json()
{

    bourne::json input =
    {
        "pickupPoint", "hello"
    };

    Order.Models.ShippingDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["pickupPoint"] == output["pickupPoint"]);



}


