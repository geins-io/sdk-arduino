
/*
 * Order.FreightClass.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Order.FreightClass_H_
#define TINY_CPP_CLIENT_Order.FreightClass_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Order.FreightClass{
public:

    /*! \brief Constructor.
	 */
    Order.FreightClass();
    Order.FreightClass(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Order.FreightClass();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	int getType();

	/*! \brief Set 
	 */
	void setType(int  type);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	int getTypeAsEnum();

	/*! \brief Set 
	 */
	void setTypeAsEnum(int  typeAsEnum);


    private:
    int id{};
    int type{};
    std::string name{};
    int typeAsEnum{};
};
}

#endif /* TINY_CPP_CLIENT_Order.FreightClass_H_ */
