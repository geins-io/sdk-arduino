
/*
 * Product.ProductItemEnvelope.h
 *
 * An envelope for the result of and action taken on a product item.
 */

#ifndef TINY_CPP_CLIENT_Product.ProductItemEnvelope_H_
#define TINY_CPP_CLIENT_Product.ProductItemEnvelope_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Product.Models.Read.ProductItem.h"

namespace Tiny {


/*! \brief An envelope for the result of and action taken on a product item.
 *
 *  \ingroup Models
 *
 */

class Product.ProductItemEnvelope{
public:

    /*! \brief Constructor.
	 */
    Product.ProductItemEnvelope();
    Product.ProductItemEnvelope(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.ProductItemEnvelope();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get A status message for the action taken.
	 */
	std::string getMessage();

	/*! \brief Set A status message for the action taken.
	 */
	void setMessage(std::string  message);
	/*! \brief Get 
	 */
	Product.Models.Read.ProductItem getItem();

	/*! \brief Set 
	 */
	void setItem(Product.Models.Read.ProductItem  item);


    private:
    std::string message{};
    Product.Models.Read.ProductItem item;
};
}

#endif /* TINY_CPP_CLIENT_Product.ProductItemEnvelope_H_ */
