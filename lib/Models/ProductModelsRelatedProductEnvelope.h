
/*
 * Product.Models.RelatedProductEnvelope.h
 *
 * The response of a related products request.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.RelatedProductEnvelope_H_
#define TINY_CPP_CLIENT_Product.Models.RelatedProductEnvelope_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Product.Models.Write.RelatedProduct.h"
#include <list>

namespace Tiny {


/*! \brief The response of a related products request.
 *
 *  \ingroup Models
 *
 */

class Product.Models.RelatedProductEnvelope{
public:

    /*! \brief Constructor.
	 */
    Product.Models.RelatedProductEnvelope();
    Product.Models.RelatedProductEnvelope(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.RelatedProductEnvelope();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Information about the outcome of the request.
	 */
	std::string getMessage();

	/*! \brief Set Information about the outcome of the request.
	 */
	void setMessage(std::string  message);
	/*! \brief Get Supplied relatedProducts that failed validation.
	 */
	std::list<Product.Models.Write.RelatedProduct> getInvalid();

	/*! \brief Set Supplied relatedProducts that failed validation.
	 */
	void setInvalid(std::list <Product.Models.Write.RelatedProduct> invalid);
	/*! \brief Get Supplied relatedProducts that were technically valid, but couldn't be found.
	 */
	std::list<Product.Models.Write.RelatedProduct> getNotFound();

	/*! \brief Set Supplied relatedProducts that were technically valid, but couldn't be found.
	 */
	void setNotFound(std::list <Product.Models.Write.RelatedProduct> notFound);
	/*! \brief Get Number of related product updates resulting from the request.
	 */
	int getUpdateCount();

	/*! \brief Set Number of related product updates resulting from the request.
	 */
	void setUpdateCount(int  updateCount);


    private:
    std::string message{};
    std::list<Product.Models.Write.RelatedProduct> invalid;
    std::list<Product.Models.Write.RelatedProduct> notFound;
    int updateCount{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.RelatedProductEnvelope_H_ */
