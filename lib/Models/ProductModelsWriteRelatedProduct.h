
/*
 * Product.Models.Write.RelatedProduct.h
 *
 * A related product.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Write.RelatedProduct_H_
#define TINY_CPP_CLIENT_Product.Models.Write.RelatedProduct_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A related product.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Write.RelatedProduct{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Write.RelatedProduct();
    Product.Models.Write.RelatedProduct(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Write.RelatedProduct();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier for the related product.
	 */
	std::string getRelatedProductId();

	/*! \brief Set The unique identifier for the related product.
	 */
	void setRelatedProductId(std::string  relatedProductId);
	/*! \brief Get The product relation type id.
	 */
	int getRelationTypeId();

	/*! \brief Set The product relation type id.
	 */
	void setRelationTypeId(int  relationTypeId);


    private:
    std::string relatedProductId{};
    int relationTypeId{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Write.RelatedProduct_H_ */
