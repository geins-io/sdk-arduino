
/*
 * Product.Models.MonitorSku.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Product.Models.MonitorSku_H_
#define TINY_CPP_CLIENT_Product.Models.MonitorSku_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Product.Models.MonitorSku{
public:

    /*! \brief Constructor.
	 */
    Product.Models.MonitorSku();
    Product.Models.MonitorSku(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.MonitorSku();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getSiteId();

	/*! \brief Set 
	 */
	void setSiteId(int  siteId);
	/*! \brief Get 
	 */
	std::string getLanguageCode();

	/*! \brief Set 
	 */
	void setLanguageCode(std::string  languageCode);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	int getSkuId();

	/*! \brief Set 
	 */
	void setSkuId(int  skuId);


    private:
    int siteId{};
    std::string languageCode{};
    std::string email{};
    int skuId{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.MonitorSku_H_ */
