
#include "Order.Models.PaymentDetail.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.PaymentDetail_id_is_assigned_from_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getId());








}


void test_Order.Models.PaymentDetail_paymentId_is_assigned_from_json()
{
    bourne::json input =
    {
        "paymentId", 1
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPaymentId());








}


void test_Order.Models.PaymentDetail_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Order.Models.PaymentDetail_displayName_is_assigned_from_json()
{


    bourne::json input =
    {
        "displayName", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisplayName().c_str());






}


void test_Order.Models.PaymentDetail_transactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "transactionId", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTransactionId().c_str());






}


void test_Order.Models.PaymentDetail_secondaryTransactionId_is_assigned_from_json()
{


    bourne::json input =
    {
        "secondaryTransactionId", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getSecondaryTransactionId().c_str());






}


void test_Order.Models.PaymentDetail_reservationNumber_is_assigned_from_json()
{


    bourne::json input =
    {
        "reservationNumber", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getReservationNumber().c_str());






}


void test_Order.Models.PaymentDetail_reservationDate_is_assigned_from_json()
{








}


void test_Order.Models.PaymentDetail_paymentDate_is_assigned_from_json()
{








}


void test_Order.Models.PaymentDetail_total_is_assigned_from_json()
{








}


void test_Order.Models.PaymentDetail_payed_is_assigned_from_json()
{




    bourne::json input =
    {
        "payed", true
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT(true == obj.isPayed());




}


void test_Order.Models.PaymentDetail_paymentFee_is_assigned_from_json()
{








}


void test_Order.Models.PaymentDetail_shippingFee_is_assigned_from_json()
{








}


void test_Order.Models.PaymentDetail_paymentOption_is_assigned_from_json()
{


    bourne::json input =
    {
        "paymentOption", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPaymentOption().c_str());






}



void test_Order.Models.PaymentDetail_id_is_converted_to_json()
{
    bourne::json input =
    {
        "id", 1
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["id"] == output["id"]);




}


void test_Order.Models.PaymentDetail_paymentId_is_converted_to_json()
{
    bourne::json input =
    {
        "paymentId", 1
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentId"] == output["paymentId"]);




}


void test_Order.Models.PaymentDetail_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Order.Models.PaymentDetail_displayName_is_converted_to_json()
{

    bourne::json input =
    {
        "displayName", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["displayName"] == output["displayName"]);



}


void test_Order.Models.PaymentDetail_transactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "transactionId", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["transactionId"] == output["transactionId"]);



}


void test_Order.Models.PaymentDetail_secondaryTransactionId_is_converted_to_json()
{

    bourne::json input =
    {
        "secondaryTransactionId", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["secondaryTransactionId"] == output["secondaryTransactionId"]);



}


void test_Order.Models.PaymentDetail_reservationNumber_is_converted_to_json()
{

    bourne::json input =
    {
        "reservationNumber", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["reservationNumber"] == output["reservationNumber"]);



}


void test_Order.Models.PaymentDetail_reservationDate_is_converted_to_json()
{




}


void test_Order.Models.PaymentDetail_paymentDate_is_converted_to_json()
{




}


void test_Order.Models.PaymentDetail_total_is_converted_to_json()
{




}


void test_Order.Models.PaymentDetail_payed_is_converted_to_json()
{


    bourne::json input =
    {
        "payed", true
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["payed"] == output["payed"]);


}


void test_Order.Models.PaymentDetail_paymentFee_is_converted_to_json()
{




}


void test_Order.Models.PaymentDetail_shippingFee_is_converted_to_json()
{




}


void test_Order.Models.PaymentDetail_paymentOption_is_converted_to_json()
{

    bourne::json input =
    {
        "paymentOption", "hello"
    };

    Order.Models.PaymentDetail obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentOption"] == output["paymentOption"]);



}


