
/*
 * Payment.Models.PaymentOption.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Payment.Models.PaymentOption_H_
#define TINY_CPP_CLIENT_Payment.Models.PaymentOption_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Payment.Models.PaymentOption{
public:

    /*! \brief Constructor.
	 */
    Payment.Models.PaymentOption();
    Payment.Models.PaymentOption(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Payment.Models.PaymentOption();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getPaymentId();

	/*! \brief Set 
	 */
	void setPaymentId(int  paymentId);
	/*! \brief Get 
	 */
	int getPaymentGroupId();

	/*! \brief Set 
	 */
	void setPaymentGroupId(int  paymentGroupId);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getDisplayName();

	/*! \brief Set 
	 */
	void setDisplayName(std::string  displayName);
	/*! \brief Get 
	 */
	double getFee();

	/*! \brief Set 
	 */
	void setFee(double  fee);
	/*! \brief Get 
	 */
	std::string getIcon();

	/*! \brief Set 
	 */
	void setIcon(std::string  icon);
	/*! \brief Get 
	 */
	int getSort();

	/*! \brief Set 
	 */
	void setSort(int  sort);
	/*! \brief Get 
	 */
	int getPeriod();

	/*! \brief Set 
	 */
	void setPeriod(int  period);
	/*! \brief Get 
	 */
	std::string getTermsLink();

	/*! \brief Set 
	 */
	void setTermsLink(std::string  termsLink);
	/*! \brief Get 
	 */
	std::string getInfoLink();

	/*! \brief Set 
	 */
	void setInfoLink(std::string  infoLink);
	/*! \brief Get 
	 */
	bool isPersonalIdRequired();

	/*! \brief Set 
	 */
	void setPersonalIdRequired(bool  personalIdRequired);
	/*! \brief Get 
	 */
	bool isRegisteredAddressRequired();

	/*! \brief Set 
	 */
	void setRegisteredAddressRequired(bool  registeredAddressRequired);
	/*! \brief Get 
	 */
	bool isHouseNumberRequired();

	/*! \brief Set 
	 */
	void setHouseNumberRequired(bool  houseNumberRequired);
	/*! \brief Get 
	 */
	bool isHouseExtensionShown();

	/*! \brief Set 
	 */
	void setHouseExtensionShown(bool  houseExtensionShown);
	/*! \brief Get 
	 */
	bool isGenderRequired();

	/*! \brief Set 
	 */
	void setGenderRequired(bool  genderRequired);
	/*! \brief Get 
	 */
	bool isBirthdateRequired();

	/*! \brief Set 
	 */
	void setBirthdateRequired(bool  birthdateRequired);


    private:
    int paymentId{};
    int paymentGroupId{};
    std::string name{};
    std::string displayName{};
    double fee{};
    std::string icon{};
    int sort{};
    int period{};
    std::string termsLink{};
    std::string infoLink{};
    bool personalIdRequired{};
    bool registeredAddressRequired{};
    bool houseNumberRequired{};
    bool houseExtensionShown{};
    bool genderRequired{};
    bool birthdateRequired{};
};
}

#endif /* TINY_CPP_CLIENT_Payment.Models.PaymentOption_H_ */
