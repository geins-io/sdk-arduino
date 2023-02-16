
/*
 * User.Models.UserProfileQuery.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_User.Models.UserProfileQuery_H_
#define TINY_CPP_CLIENT_User.Models.UserProfileQuery_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class User.Models.UserProfileQuery{
public:

    /*! \brief Constructor.
	 */
    User.Models.UserProfileQuery();
    User.Models.UserProfileQuery(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~User.Models.UserProfileQuery();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getUserId();

	/*! \brief Set 
	 */
	void setUserId(int  userId);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);


    private:
    int userId{};
    std::string email{};
};
}

#endif /* TINY_CPP_CLIENT_User.Models.UserProfileQuery_H_ */
