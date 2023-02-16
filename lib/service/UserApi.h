#ifndef TINY_CPP_CLIENT_UserApi_H_
#define TINY_CPP_CLIENT_UserApi_H_


#include "Response.h"
#include "Arduino.h"
#include "Service.h"
#include "Helpers.h"
#include <list>

#include "Envelope-User.Models.Read.UserProfile.h"
#include "Object.h"
#include "User.Models.UserProfileQuery.h"
#include "User.Models.Write.UserProfile.h"

namespace Tiny {

/**
 *  Class 
 * Generated with openapi::tiny-cpp-client
 */

class UserApi : public Service {
public:
    UserApi() = default;

    virtual ~UserApi() = default;

    /**
    * Create user profile.
    *
    * 
    * \param userProfile The user profile *Required*
    */
    Response<
                Envelope-User.Models.Read.UserProfile
        >
    create_user_profile(
            
            User.Models.Write.UserProfile userProfile
            
    );
    /**
    * Delete user profile.
    *
    * 
    * \param email Email address *Required*
    */
    Response<
                Object
        >
    delete_user_profile(
            
            std::string email
            
    );
    /**
    * Get a specific user profile.
    *
    * 
    * \param query The details of the query. *Required*
    */
    Response<
                Envelope-User.Models.Read.UserProfile
        >
    get_user_profile(
            
            User.Models.UserProfileQuery query
            
    );
    /**
    * Update user profile.
    *
    * 
    * \param userProfile The user profile *Required*
    */
    Response<
                Envelope-User.Models.Read.UserProfile
        >
    update_user_profile(
            
            User.Models.Write.UserProfile userProfile
            
    );
}; 

} 

#endif /* TINY_CPP_CLIENT_UserApi_H_ */