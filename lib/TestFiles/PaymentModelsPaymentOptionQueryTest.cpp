
#include "Payment.Models.PaymentOptionQuery.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Payment.Models.PaymentOptionQuery_siteId_is_assigned_from_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSiteId());








}


void test_Payment.Models.PaymentOptionQuery_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_Payment.Models.PaymentOptionQuery_customerTypeId_is_assigned_from_json()
{
    bourne::json input =
    {
        "customerTypeId", 1
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCustomerTypeId());








}


void test_Payment.Models.PaymentOptionQuery_countryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCountryId());








}


void test_Payment.Models.PaymentOptionQuery_sum_is_assigned_from_json()
{








}



void test_Payment.Models.PaymentOptionQuery_siteId_is_converted_to_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["siteId"] == output["siteId"]);




}


void test_Payment.Models.PaymentOptionQuery_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_Payment.Models.PaymentOptionQuery_customerTypeId_is_converted_to_json()
{
    bourne::json input =
    {
        "customerTypeId", 1
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["customerTypeId"] == output["customerTypeId"]);




}


void test_Payment.Models.PaymentOptionQuery_countryId_is_converted_to_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    Payment.Models.PaymentOptionQuery obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryId"] == output["countryId"]);




}


void test_Payment.Models.PaymentOptionQuery_sum_is_converted_to_json()
{




}


