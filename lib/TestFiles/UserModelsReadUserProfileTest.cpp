
#include "User.Models.Read.UserProfile.h"

using namespace Tiny;

#include <string>
#include <list>
#include <unity.h>
#include "bourne/json.hpp"



void test_User.Models.Read.UserProfile_userId_is_assigned_from_json()
{
    bourne::json input =
    {
        "userId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUserId());








}


void test_User.Models.Read.UserProfile_siteId_is_assigned_from_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getSiteId());








}


void test_User.Models.Read.UserProfile_email_is_assigned_from_json()
{


    bourne::json input =
    {
        "email", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getEmail().c_str());






}


void test_User.Models.Read.UserProfile_firstName_is_assigned_from_json()
{


    bourne::json input =
    {
        "firstName", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getFirstName().c_str());






}


void test_User.Models.Read.UserProfile_lastName_is_assigned_from_json()
{


    bourne::json input =
    {
        "lastName", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getLastName().c_str());






}


void test_User.Models.Read.UserProfile_phoneNr_is_assigned_from_json()
{


    bourne::json input =
    {
        "phoneNr", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPhoneNr().c_str());






}


void test_User.Models.Read.UserProfile_mobilePhoneNr_is_assigned_from_json()
{


    bourne::json input =
    {
        "mobilePhoneNr", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMobilePhoneNr().c_str());






}


void test_User.Models.Read.UserProfile_company_is_assigned_from_json()
{


    bourne::json input =
    {
        "company", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCompany().c_str());






}


void test_User.Models.Read.UserProfile_address_is_assigned_from_json()
{


    bourne::json input =
    {
        "address", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress().c_str());






}


void test_User.Models.Read.UserProfile_address2_is_assigned_from_json()
{


    bourne::json input =
    {
        "address2", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress2().c_str());






}


void test_User.Models.Read.UserProfile_address3_is_assigned_from_json()
{


    bourne::json input =
    {
        "address3", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getAddress3().c_str());






}


void test_User.Models.Read.UserProfile_doorCode_is_assigned_from_json()
{


    bourne::json input =
    {
        "doorCode", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getDoorCode().c_str());






}


void test_User.Models.Read.UserProfile_personalId_is_assigned_from_json()
{


    bourne::json input =
    {
        "personalId", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getPersonalId().c_str());






}


void test_User.Models.Read.UserProfile_birthyear_is_assigned_from_json()
{


    bourne::json input =
    {
        "birthyear", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getBirthyear().c_str());






}


void test_User.Models.Read.UserProfile_zip_is_assigned_from_json()
{


    bourne::json input =
    {
        "zip", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getZip().c_str());






}


void test_User.Models.Read.UserProfile_city_is_assigned_from_json()
{


    bourne::json input =
    {
        "city", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCity().c_str());






}


void test_User.Models.Read.UserProfile_careOf_is_assigned_from_json()
{


    bourne::json input =
    {
        "careOf", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCareOf().c_str());






}


void test_User.Models.Read.UserProfile_country_is_assigned_from_json()
{


    bourne::json input =
    {
        "country", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getCountry().c_str());






}


void test_User.Models.Read.UserProfile_memberId_is_assigned_from_json()
{
    bourne::json input =
    {
        "memberId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getMemberId());








}


void test_User.Models.Read.UserProfile_memberType_is_assigned_from_json()
{


    bourne::json input =
    {
        "memberType", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_STRING("hello", obj.getMemberType().c_str());






}


void test_User.Models.Read.UserProfile_countryId_is_assigned_from_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getCountryId());








}


void test_User.Models.Read.UserProfile_userTypeId_is_assigned_from_json()
{
    bourne::json input =
    {
        "userTypeId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT_EQUAL_INT(1, obj.getUserTypeId());








}


void test_User.Models.Read.UserProfile_gender_is_assigned_from_json()
{




    bourne::json input =
    {
        "gender", true
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT(true == obj.isGender());




}


void test_User.Models.Read.UserProfile_newsletter_is_assigned_from_json()
{




    bourne::json input =
    {
        "newsletter", true
    };

    User.Models.Read.UserProfile obj(input.dump());

    TEST_ASSERT(true == obj.isNewsletter());




}



void test_User.Models.Read.UserProfile_userId_is_converted_to_json()
{
    bourne::json input =
    {
        "userId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["userId"] == output["userId"]);




}


void test_User.Models.Read.UserProfile_siteId_is_converted_to_json()
{
    bourne::json input =
    {
        "siteId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["siteId"] == output["siteId"]);




}


void test_User.Models.Read.UserProfile_email_is_converted_to_json()
{

    bourne::json input =
    {
        "email", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["email"] == output["email"]);



}


void test_User.Models.Read.UserProfile_firstName_is_converted_to_json()
{

    bourne::json input =
    {
        "firstName", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["firstName"] == output["firstName"]);



}


void test_User.Models.Read.UserProfile_lastName_is_converted_to_json()
{

    bourne::json input =
    {
        "lastName", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["lastName"] == output["lastName"]);



}


void test_User.Models.Read.UserProfile_phoneNr_is_converted_to_json()
{

    bourne::json input =
    {
        "phoneNr", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["phoneNr"] == output["phoneNr"]);



}


void test_User.Models.Read.UserProfile_mobilePhoneNr_is_converted_to_json()
{

    bourne::json input =
    {
        "mobilePhoneNr", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["mobilePhoneNr"] == output["mobilePhoneNr"]);



}


void test_User.Models.Read.UserProfile_company_is_converted_to_json()
{

    bourne::json input =
    {
        "company", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["company"] == output["company"]);



}


void test_User.Models.Read.UserProfile_address_is_converted_to_json()
{

    bourne::json input =
    {
        "address", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address"] == output["address"]);



}


void test_User.Models.Read.UserProfile_address2_is_converted_to_json()
{

    bourne::json input =
    {
        "address2", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address2"] == output["address2"]);



}


void test_User.Models.Read.UserProfile_address3_is_converted_to_json()
{

    bourne::json input =
    {
        "address3", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["address3"] == output["address3"]);



}


void test_User.Models.Read.UserProfile_doorCode_is_converted_to_json()
{

    bourne::json input =
    {
        "doorCode", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["doorCode"] == output["doorCode"]);



}


void test_User.Models.Read.UserProfile_personalId_is_converted_to_json()
{

    bourne::json input =
    {
        "personalId", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["personalId"] == output["personalId"]);



}


void test_User.Models.Read.UserProfile_birthyear_is_converted_to_json()
{

    bourne::json input =
    {
        "birthyear", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["birthyear"] == output["birthyear"]);



}


void test_User.Models.Read.UserProfile_zip_is_converted_to_json()
{

    bourne::json input =
    {
        "zip", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["zip"] == output["zip"]);



}


void test_User.Models.Read.UserProfile_city_is_converted_to_json()
{

    bourne::json input =
    {
        "city", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["city"] == output["city"]);



}


void test_User.Models.Read.UserProfile_careOf_is_converted_to_json()
{

    bourne::json input =
    {
        "careOf", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["careOf"] == output["careOf"]);



}


void test_User.Models.Read.UserProfile_country_is_converted_to_json()
{

    bourne::json input =
    {
        "country", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["country"] == output["country"]);



}


void test_User.Models.Read.UserProfile_memberId_is_converted_to_json()
{
    bourne::json input =
    {
        "memberId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["memberId"] == output["memberId"]);




}


void test_User.Models.Read.UserProfile_memberType_is_converted_to_json()
{

    bourne::json input =
    {
        "memberType", "hello"
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["memberType"] == output["memberType"]);



}


void test_User.Models.Read.UserProfile_countryId_is_converted_to_json()
{
    bourne::json input =
    {
        "countryId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["countryId"] == output["countryId"]);




}


void test_User.Models.Read.UserProfile_userTypeId_is_converted_to_json()
{
    bourne::json input =
    {
        "userTypeId", 1
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["userTypeId"] == output["userTypeId"]);




}


void test_User.Models.Read.UserProfile_gender_is_converted_to_json()
{


    bourne::json input =
    {
        "gender", true
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["gender"] == output["gender"]);


}


void test_User.Models.Read.UserProfile_newsletter_is_converted_to_json()
{


    bourne::json input =
    {
        "newsletter", true
    };

    User.Models.Read.UserProfile obj(input.dump());

    bourne::json output = bourne::json::object();

    output = obj.toJson();

    TEST_ASSERT(input["newsletter"] == output["newsletter"]);


}


