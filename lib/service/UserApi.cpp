#include "UserApi.h"

using namespace Tiny;



        Response<
            Envelope-User.Models.Read.UserProfile
        >
        UserApi::
        create_user_profile(
            
            User.Models.Write.UserProfile userProfile
            
        )
        {
            std::string url = basepath + "/API/User"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | userProfile



            payload = userProfile.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-User.Models.Read.UserProfile obj(output_string);


            Response<Envelope-User.Models.Read.UserProfile> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        UserApi::
        delete_user_profile(
            
            std::string email
            
        )
        {
            std::string url = basepath + "/API/User/email"; //


            // Headers  | 

            // Query    | email 
            addQueryParam("email",email);

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | DELETE
            // Body     | 
            int httpCode = sendRequest(url, "DELETE", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-User.Models.Read.UserProfile
        >
        UserApi::
        get_user_profile(
            
            User.Models.UserProfileQuery query
            
        )
        {
            std::string url = basepath + "/API/User/Query"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | query



            payload = query.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-User.Models.Read.UserProfile obj(output_string);


            Response<Envelope-User.Models.Read.UserProfile> response(obj, httpCode);
            return response;
        }

        Response<
            Envelope-User.Models.Read.UserProfile
        >
        UserApi::
        update_user_profile(
            
            User.Models.Write.UserProfile userProfile
            
        )
        {
            std::string url = basepath + "/API/User"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | userProfile



            payload = userProfile.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Envelope-User.Models.Read.UserProfile obj(output_string);


            Response<Envelope-User.Models.Read.UserProfile> response(obj, httpCode);
            return response;
        }



