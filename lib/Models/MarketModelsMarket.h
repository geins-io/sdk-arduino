
/*
 * Market.Models.Market.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Market.Models.Market_H_
#define TINY_CPP_CLIENT_Market.Models.Market_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Market.Models.Market{
public:

    /*! \brief Constructor.
	 */
    Market.Models.Market();
    Market.Models.Market(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Market.Models.Market();


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
	std::string getDisplayName();

	/*! \brief Set 
	 */
	void setDisplayName(std::string  displayName);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get 
	 */
	double getVatRate();

	/*! \brief Set 
	 */
	void setVatRate(double  vatRate);
	/*! \brief Get 
	 */
	std::string getMarketPrefix();

	/*! \brief Set 
	 */
	void setMarketPrefix(std::string  marketPrefix);
	/*! \brief Get 
	 */
	int getCountryId();

	/*! \brief Set 
	 */
	void setCountryId(int  countryId);
	/*! \brief Get 
	 */
	int getCurrencyId();

	/*! \brief Set 
	 */
	void setCurrencyId(int  currencyId);
	/*! \brief Get 
	 */
	double getCurrencyRate();

	/*! \brief Set 
	 */
	void setCurrencyRate(double  currencyRate);
	/*! \brief Get 
	 */
	int getLanguageId();

	/*! \brief Set 
	 */
	void setLanguageId(int  languageId);
	/*! \brief Get 
	 */
	std::string getLanguage();

	/*! \brief Set 
	 */
	void setLanguage(std::string  language);


    private:
    int id{};
    std::string name{};
    std::string displayName{};
    std::string currency{};
    double vatRate{};
    std::string marketPrefix{};
    int countryId{};
    int currencyId{};
    double currencyRate{};
    int languageId{};
    std::string language{};
};
}

#endif /* TINY_CPP_CLIENT_Market.Models.Market_H_ */
