
#include "Order.Models.Address.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Order.Models.Address_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "company", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCompany().c_str());






}


void test_Order.Models.Address_careOf_is_assigned_from_json()
{


    bourne::json input =
    {
        "careOf", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCareOf().c_str());






}


void test_Order.Models.Address_state_is_assigned_from_json()
{


    bourne::json input =
    {
        "state", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getState().c_str());






}


void test_Order.Models.Address_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_Order.Models.Address_firstName_is_assigned_from_json()
{


    bourne::json input =
    {
        "firstName", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFirstName().c_str());






}


void test_Order.Models.Address_lastName_is_assigned_from_json()
{


    bourne::json input =
    {
        "lastName", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastName().c_str());






}


void test_Order.Models.Address_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_Order.Models.Address_addressLine1_is_assigned_from_json()
{


    bourne::json input =
    {
        "addressLine1", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddressLine1().c_str());






}


void test_Order.Models.Address_addressLine2_is_assigned_from_json()
{


    bourne::json input =
    {
        "addressLine2", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddressLine2().c_str());






}


void test_Order.Models.Address_addressLine3_is_assigned_from_json()
{


    bourne::json input =
    {
        "addressLine3", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddressLine3().c_str());






}


void test_Order.Models.Address_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_Order.Models.Address_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_Order.Models.Address_phone_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone().c_str());






}


void test_Order.Models.Address_mobile_is_assigned_from_json()
{


    bourne::json input =
    {
        "mobile", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMobile().c_str());






}


void test_Order.Models.Address_entryCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "entryCode", "hello"
    };

    Order.Models.Address obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEntryCode().c_str());






}



void test_Order.Models.Address_company_is_converted_to_json()
{

    bourne::json input =
    {
        "company", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["company"] == output["company"]);



}


void test_Order.Models.Address_careOf_is_converted_to_json()
{

    bourne::json input =
    {
        "careOf", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["careOf"] == output["careOf"]);



}


void test_Order.Models.Address_state_is_converted_to_json()
{

    bourne::json input =
    {
        "state", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["state"] == output["state"]);



}


void test_Order.Models.Address_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_Order.Models.Address_firstName_is_converted_to_json()
{

    bourne::json input =
    {
        "firstName", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["firstName"] == output["firstName"]);



}


void test_Order.Models.Address_lastName_is_converted_to_json()
{

    bourne::json input =
    {
        "lastName", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lastName"] == output["lastName"]);



}


void test_Order.Models.Address_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_Order.Models.Address_addressLine1_is_converted_to_json()
{

    bourne::json input =
    {
        "addressLine1", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["addressLine1"] == output["addressLine1"]);



}


void test_Order.Models.Address_addressLine2_is_converted_to_json()
{

    bourne::json input =
    {
        "addressLine2", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["addressLine2"] == output["addressLine2"]);



}


void test_Order.Models.Address_addressLine3_is_converted_to_json()
{

    bourne::json input =
    {
        "addressLine3", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["addressLine3"] == output["addressLine3"]);



}


void test_Order.Models.Address_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_Order.Models.Address_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_Order.Models.Address_phone_is_converted_to_json()
{

    bourne::json input =
    {
        "phone", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone"] == output["phone"]);



}


void test_Order.Models.Address_mobile_is_converted_to_json()
{

    bourne::json input =
    {
        "mobile", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mobile"] == output["mobile"]);



}


void test_Order.Models.Address_entryCode_is_converted_to_json()
{

    bourne::json input =
    {
        "entryCode", "hello"
    };

    Order.Models.Address obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["entryCode"] == output["entryCode"]);



}


