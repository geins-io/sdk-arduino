
#include "Payment.Models.PaymentOption.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Payment.Models.PaymentOption_paymentId_is_assigned_from_json()
{
    bourne::json input =
    {
        "paymentId", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPaymentId());








}


void test_Payment.Models.PaymentOption_paymentGroupId_is_assigned_from_json()
{
    bourne::json input =
    {
        "paymentGroupId", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPaymentGroupId());








}


void test_Payment.Models.PaymentOption_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Payment.Models.PaymentOption_displayName_is_assigned_from_json()
{


    bourne::json input =
    {
        "displayName", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDisplayName().c_str());






}


void test_Payment.Models.PaymentOption_fee_is_assigned_from_json()
{








}


void test_Payment.Models.PaymentOption_icon_is_assigned_from_json()
{


    bourne::json input =
    {
        "icon", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getIcon().c_str());






}


void test_Payment.Models.PaymentOption_sort_is_assigned_from_json()
{
    bourne::json input =
    {
        "sort", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSort());








}


void test_Payment.Models.PaymentOption_period_is_assigned_from_json()
{
    bourne::json input =
    {
        "period", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getPeriod());








}


void test_Payment.Models.PaymentOption_termsLink_is_assigned_from_json()
{


    bourne::json input =
    {
        "termsLink", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getTermsLink().c_str());






}


void test_Payment.Models.PaymentOption_infoLink_is_assigned_from_json()
{


    bourne::json input =
    {
        "infoLink", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getInfoLink().c_str());






}


void test_Payment.Models.PaymentOption_personalIdRequired_is_assigned_from_json()
{




    bourne::json input =
    {
        "personalIdRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT(true == obj.isPersonalIdRequired());




}


void test_Payment.Models.PaymentOption_registeredAddressRequired_is_assigned_from_json()
{




    bourne::json input =
    {
        "registeredAddressRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT(true == obj.isRegisteredAddressRequired());




}


void test_Payment.Models.PaymentOption_houseNumberRequired_is_assigned_from_json()
{




    bourne::json input =
    {
        "houseNumberRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT(true == obj.isHouseNumberRequired());




}


void test_Payment.Models.PaymentOption_houseExtensionShown_is_assigned_from_json()
{




    bourne::json input =
    {
        "houseExtensionShown", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT(true == obj.isHouseExtensionShown());




}


void test_Payment.Models.PaymentOption_genderRequired_is_assigned_from_json()
{




    bourne::json input =
    {
        "genderRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT(true == obj.isGenderRequired());




}


void test_Payment.Models.PaymentOption_birthdateRequired_is_assigned_from_json()
{




    bourne::json input =
    {
        "birthdateRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    TEST_ASSERT(true == obj.isBirthdateRequired());




}



void test_Payment.Models.PaymentOption_paymentId_is_converted_to_json()
{
    bourne::json input =
    {
        "paymentId", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentId"] == output["paymentId"]);




}


void test_Payment.Models.PaymentOption_paymentGroupId_is_converted_to_json()
{
    bourne::json input =
    {
        "paymentGroupId", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["paymentGroupId"] == output["paymentGroupId"]);




}


void test_Payment.Models.PaymentOption_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Payment.Models.PaymentOption_displayName_is_converted_to_json()
{

    bourne::json input =
    {
        "displayName", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["displayName"] == output["displayName"]);



}


void test_Payment.Models.PaymentOption_fee_is_converted_to_json()
{




}


void test_Payment.Models.PaymentOption_icon_is_converted_to_json()
{

    bourne::json input =
    {
        "icon", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["icon"] == output["icon"]);



}


void test_Payment.Models.PaymentOption_sort_is_converted_to_json()
{
    bourne::json input =
    {
        "sort", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["sort"] == output["sort"]);




}


void test_Payment.Models.PaymentOption_period_is_converted_to_json()
{
    bourne::json input =
    {
        "period", 1
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["period"] == output["period"]);




}


void test_Payment.Models.PaymentOption_termsLink_is_converted_to_json()
{

    bourne::json input =
    {
        "termsLink", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["termsLink"] == output["termsLink"]);



}


void test_Payment.Models.PaymentOption_infoLink_is_converted_to_json()
{

    bourne::json input =
    {
        "infoLink", "hello"
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["infoLink"] == output["infoLink"]);



}


void test_Payment.Models.PaymentOption_personalIdRequired_is_converted_to_json()
{


    bourne::json input =
    {
        "personalIdRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["personalIdRequired"] == output["personalIdRequired"]);


}


void test_Payment.Models.PaymentOption_registeredAddressRequired_is_converted_to_json()
{


    bourne::json input =
    {
        "registeredAddressRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["registeredAddressRequired"] == output["registeredAddressRequired"]);


}


void test_Payment.Models.PaymentOption_houseNumberRequired_is_converted_to_json()
{


    bourne::json input =
    {
        "houseNumberRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["houseNumberRequired"] == output["houseNumberRequired"]);


}


void test_Payment.Models.PaymentOption_houseExtensionShown_is_converted_to_json()
{


    bourne::json input =
    {
        "houseExtensionShown", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["houseExtensionShown"] == output["houseExtensionShown"]);


}


void test_Payment.Models.PaymentOption_genderRequired_is_converted_to_json()
{


    bourne::json input =
    {
        "genderRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["genderRequired"] == output["genderRequired"]);


}


void test_Payment.Models.PaymentOption_birthdateRequired_is_converted_to_json()
{


    bourne::json input =
    {
        "birthdateRequired", true
    };

    Payment.Models.PaymentOption obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["birthdateRequired"] == output["birthdateRequired"]);


}


