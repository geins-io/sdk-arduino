
/*
 * Product.Models.Read.ProductUrl.h
 *
 * A canonical product url for a specific market and language.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.ProductUrl_H_
#define TINY_CPP_CLIENT_Product.Models.Read.ProductUrl_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A canonical product url for a specific market and language.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.ProductUrl{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.ProductUrl();
    Product.Models.Read.ProductUrl(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.ProductUrl();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The canonical url to the product.
	 */
	std::string getUrl();

	/*! \brief Set The canonical url to the product.
	 */
	void setUrl(std::string  url);
	/*! \brief Get The market of the url.
	 */
	int getMarket();

	/*! \brief Set The market of the url.
	 */
	void setMarket(int  market);
	/*! \brief Get The language code of the url.
	 */
	std::string getLanguage();

	/*! \brief Set The language code of the url.
	 */
	void setLanguage(std::string  language);


    private:
    std::string url{};
    int market{};
    std::string language{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.ProductUrl_H_ */
