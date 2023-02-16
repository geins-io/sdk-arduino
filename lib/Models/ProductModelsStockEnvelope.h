
/*
 * Product.Models.StockEnvelope.h
 *
 * The response of a Stock request.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.StockEnvelope_H_
#define TINY_CPP_CLIENT_Product.Models.StockEnvelope_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Product.Models.Write.ProductItemStock.h"
#include <list>

namespace Tiny {


/*! \brief The response of a Stock request.
 *
 *  \ingroup Models
 *
 */

class Product.Models.StockEnvelope{
public:

    /*! \brief Constructor.
	 */
    Product.Models.StockEnvelope();
    Product.Models.StockEnvelope(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.StockEnvelope();


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
	/*! \brief Get Supplied productItemStocks that failed validation.
	 */
	std::list<Product.Models.Write.ProductItemStock> getInvalid();

	/*! \brief Set Supplied productItemStocks that failed validation.
	 */
	void setInvalid(std::list <Product.Models.Write.ProductItemStock> invalid);
	/*! \brief Get Supplied productItemStocks that were technically valid, but couldn't be found.
	 */
	std::list<Product.Models.Write.ProductItemStock> getNotFound();

	/*! \brief Set Supplied productItemStocks that were technically valid, but couldn't be found.
	 */
	void setNotFound(std::list <Product.Models.Write.ProductItemStock> notFound);
	/*! \brief Get Number of stock updates resulting from the request.
	 */
	int getUpdateCount();

	/*! \brief Set Number of stock updates resulting from the request.
	 */
	void setUpdateCount(int  updateCount);


    private:
    std::string message{};
    std::list<Product.Models.Write.ProductItemStock> invalid;
    std::list<Product.Models.Write.ProductItemStock> notFound;
    int updateCount{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.StockEnvelope_H_ */
