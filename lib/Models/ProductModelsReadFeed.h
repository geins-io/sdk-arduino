
/*
 * Product.Models.Read.Feed.h
 *
 * A product feed.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.Feed_H_
#define TINY_CPP_CLIENT_Product.Models.Read.Feed_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A product feed.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.Feed{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.Feed();
    Product.Models.Read.Feed(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.Feed();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The feed id.
	 */
	int getFeedId();

	/*! \brief Set The feed id.
	 */
	void setFeedId(int  feedId);
	/*! \brief Get The feed name.
	 */
	std::string getName();

	/*! \brief Set The feed name.
	 */
	void setName(std::string  name);
	/*! \brief Get The url to the feed.
	 */
	std::string getUrl();

	/*! \brief Set The url to the feed.
	 */
	void setUrl(std::string  url);
	/*! \brief Get The name of the feed layout.
	 */
	std::string getLayout();

	/*! \brief Set The name of the feed layout.
	 */
	void setLayout(std::string  layout);
	/*! \brief Get The market of the feed.
	 */
	int getMarket();

	/*! \brief Set The market of the feed.
	 */
	void setMarket(int  market);
	/*! \brief Get The language code of the feed.
	 */
	std::string getLanguage();

	/*! \brief Set The language code of the feed.
	 */
	void setLanguage(std::string  language);
	/*! \brief Get The default currency for the market
	 */
	std::string getDefaultCurrency();

	/*! \brief Set The default currency for the market
	 */
	void setDefaultCurrency(std::string  defaultCurrency);
	/*! \brief Get The default country for the market
	 */
	std::string getDefaultCountry();

	/*! \brief Set The default country for the market
	 */
	void setDefaultCountry(std::string  defaultCountry);


    private:
    int feedId{};
    std::string name{};
    std::string url{};
    std::string layout{};
    int market{};
    std::string language{};
    std::string defaultCurrency{};
    std::string defaultCountry{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.Feed_H_ */
