
/*
 * Shipping.Models.ShippingOption.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Shipping.Models.ShippingOption_H_
#define TINY_CPP_CLIENT_Shipping.Models.ShippingOption_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Shipping.Models.ShippingSubOption.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Shipping.Models.ShippingOption{
public:

    /*! \brief Constructor.
	 */
    Shipping.Models.ShippingOption();
    Shipping.Models.ShippingOption(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Shipping.Models.ShippingOption();


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
	std::string getExternalId();

	/*! \brief Set 
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	double getFee();

	/*! \brief Set 
	 */
	void setFee(double  fee);
	/*! \brief Get 
	 */
	std::string getLogo();

	/*! \brief Set 
	 */
	void setLogo(std::string  logo);
	/*! \brief Get 
	 */
	std::string getShippingData();

	/*! \brief Set 
	 */
	void setShippingData(std::string  shippingData);
	/*! \brief Get 
	 */
	std::list<Shipping.Models.ShippingSubOption> getOptions();

	/*! \brief Set 
	 */
	void setOptions(std::list <Shipping.Models.ShippingSubOption> options);


    private:
    int id{};
    std::string externalId{};
    std::string name{};
    double fee{};
    std::string logo{};
    std::string shippingData{};
    std::list<Shipping.Models.ShippingSubOption> options;
};
}

#endif /* TINY_CPP_CLIENT_Shipping.Models.ShippingOption_H_ */
