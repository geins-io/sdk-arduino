
#include "Supplier.Models.Write.Supplier.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_Supplier.Models.Write.Supplier_name_is_assigned_from_json()
{


    bourne::json input =
    {
        "name", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getName().c_str());






}


void test_Supplier.Models.Write.Supplier_address1_is_assigned_from_json()
{


    bourne::json input =
    {
        "address1", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress1().c_str());






}


void test_Supplier.Models.Write.Supplier_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "address2", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress2().c_str());






}


void test_Supplier.Models.Write.Supplier_address3_is_assigned_from_json()
{


    bourne::json input =
    {
        "address3", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress3().c_str());






}


void test_Supplier.Models.Write.Supplier_zipCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "zipCode", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZipCode().c_str());






}


void test_Supplier.Models.Write.Supplier_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_Supplier.Models.Write.Supplier_contactPerson_is_assigned_from_json()
{


    bourne::json input =
    {
        "contactPerson", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getContactPerson().c_str());






}


void test_Supplier.Models.Write.Supplier_phone1_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone1", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone1().c_str());






}


void test_Supplier.Models.Write.Supplier_phone2_is_assigned_from_json()
{


    bourne::json input =
    {
        "phone2", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhone2().c_str());






}


void test_Supplier.Models.Write.Supplier_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_Supplier.Models.Write.Supplier_externalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "externalId", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getExternalId().c_str());






}



void test_Supplier.Models.Write.Supplier_name_is_converted_to_json()
{

    bourne::json input =
    {
        "name", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["name"] == output["name"]);



}


void test_Supplier.Models.Write.Supplier_address1_is_converted_to_json()
{

    bourne::json input =
    {
        "address1", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address1"] == output["address1"]);



}


void test_Supplier.Models.Write.Supplier_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "address2", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address2"] == output["address2"]);



}


void test_Supplier.Models.Write.Supplier_address3_is_converted_to_json()
{

    bourne::json input =
    {
        "address3", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address3"] == output["address3"]);



}


void test_Supplier.Models.Write.Supplier_zipCode_is_converted_to_json()
{

    bourne::json input =
    {
        "zipCode", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zipCode"] == output["zipCode"]);



}


void test_Supplier.Models.Write.Supplier_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_Supplier.Models.Write.Supplier_contactPerson_is_converted_to_json()
{

    bourne::json input =
    {
        "contactPerson", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["contactPerson"] == output["contactPerson"]);



}


void test_Supplier.Models.Write.Supplier_phone1_is_converted_to_json()
{

    bourne::json input =
    {
        "phone1", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone1"] == output["phone1"]);



}


void test_Supplier.Models.Write.Supplier_phone2_is_converted_to_json()
{

    bourne::json input =
    {
        "phone2", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phone2"] == output["phone2"]);



}


void test_Supplier.Models.Write.Supplier_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_Supplier.Models.Write.Supplier_externalId_is_converted_to_json()
{

    bourne::json input =
    {
        "externalId", "hello"
    };

    Supplier.Models.Write.Supplier obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["externalId"] == output["externalId"]);



}


