
/*
 * Product.Models.Read.RelatedProduct.h
 *
 * A related product.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.RelatedProduct_H_
#define TINY_CPP_CLIENT_Product.Models.Read.RelatedProduct_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A related product.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.RelatedProduct{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.RelatedProduct();
    Product.Models.Read.RelatedProduct(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.RelatedProduct();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The unique identifier for the product.
	 */
	int getProductId();

	/*! \brief Set The unique identifier for the product.
	 */
	void setProductId(int  productId);
	/*! \brief Get The unique identifier for the related product.
	 */
	int getRelatedProductId();

	/*! \brief Set The unique identifier for the related product.
	 */
	void setRelatedProductId(int  relatedProductId);
	/*! \brief Get The product relation type id.
	 */
	int getRelationTypeId();

	/*! \brief Set The product relation type id.
	 */
	void setRelationTypeId(int  relationTypeId);


    private:
    int productId{};
    int relatedProductId{};
    int relationTypeId{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.RelatedProduct_H_ */
