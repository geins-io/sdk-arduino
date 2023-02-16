
/*
 * Product.Models.Read.RelationType.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.RelationType_H_
#define TINY_CPP_CLIENT_Product.Models.Read.RelationType_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.RelationType{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.RelationType();
    Product.Models.Read.RelationType(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.RelationType();


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
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	int getOrder();

	/*! \brief Set 
	 */
	void setOrder(int  order);


    private:
    int id{};
    std::string name{};
    int order{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.RelationType_H_ */
