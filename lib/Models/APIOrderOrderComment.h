
/*
 * API.Order.OrderComment.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_API.Order.OrderComment_H_
#define TINY_CPP_CLIENT_API.Order.OrderComment_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class API.Order.OrderComment{
public:

    /*! \brief Constructor.
	 */
    API.Order.OrderComment();
    API.Order.OrderComment(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~API.Order.OrderComment();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getOrderId();

	/*! \brief Set 
	 */
	void setOrderId(int  orderId);
	/*! \brief Get 
	 */
	std::string getComment();

	/*! \brief Set 
	 */
	void setComment(std::string  comment);
	/*! \brief Get 
	 */
	bool isSystem();

	/*! \brief Set 
	 */
	void setSystem(bool  system);


    private:
    int orderId{};
    std::string comment{};
    bool system{};
};
}

#endif /* TINY_CPP_CLIENT_API.Order.OrderComment_H_ */
