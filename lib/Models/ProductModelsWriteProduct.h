
/*
 * Product.Models.Write.Product.h
 *
 * A product.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Write.Product_H_
#define TINY_CPP_CLIENT_Product.Models.Write.Product_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Market.Models.Market.h"
#include "Product.Models.Write.ProductItem.h"
#include "ProductParameter.Models.Write.ProductParameterValue.h"
#include "Shared.Models.LocalizableContent.h"
#include "Variant.Models.Write.Variant.h"
#include <list>

namespace Tiny {


/*! \brief A product.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Write.Product{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Write.Product();
    Product.Models.Write.Product(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Write.Product();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The article number of the product.
	 */
	std::string getArticleNumber();

	/*! \brief Set The article number of the product.
	 */
	void setArticleNumber(std::string  articleNumber);
	/*! \brief Get The localized names of the product.
	 */
	std::list<Shared.Models.LocalizableContent> getNames();

	/*! \brief Set The localized names of the product.
	 */
	void setNames(std::list <Shared.Models.LocalizableContent> names);
	/*! \brief Get The current state of the product.
	 */
	bool isActive();

	/*! \brief Set The current state of the product.
	 */
	void setActive(bool  active);
	/*! \brief Get The purchase price in the currency defined in {Product.Models.Write.Product.PurchasePriceCurrency}.
	 */
	double getPurchasePrice();

	/*! \brief Set The purchase price in the currency defined in {Product.Models.Write.Product.PurchasePriceCurrency}.
	 */
	void setPurchasePrice(double  purchasePrice);
	/*! \brief Get The 3-letter ISO 4217 currency code for the amount given in {Product.Models.Write.Product.PurchasePrice}.
	 */
	std::string getPurchasePriceCurrency();

	/*! \brief Set The 3-letter ISO 4217 currency code for the amount given in {Product.Models.Write.Product.PurchasePrice}.
	 */
	void setPurchasePriceCurrency(std::string  purchasePriceCurrency);
	/*! \brief Get Localized short texts for the product.
	 */
	std::list<Shared.Models.LocalizableContent> getShortTexts();

	/*! \brief Set Localized short texts for the product.
	 */
	void setShortTexts(std::list <Shared.Models.LocalizableContent> shortTexts);
	/*! \brief Get Localized long texts for the product.
	 */
	std::list<Shared.Models.LocalizableContent> getLongTexts();

	/*! \brief Set Localized long texts for the product.
	 */
	void setLongTexts(std::list <Shared.Models.LocalizableContent> longTexts);
	/*! \brief Get Localized tech texts for the product.
	 */
	std::list<Shared.Models.LocalizableContent> getTechTexts();

	/*! \brief Set Localized tech texts for the product.
	 */
	void setTechTexts(std::list <Shared.Models.LocalizableContent> techTexts);
	/*! \brief Get The brand of the product.
	 */
	int getBrandId();

	/*! \brief Set The brand of the product.
	 */
	void setBrandId(int  brandId);
	/*! \brief Get The supplier id of the product.
	 */
	int getSupplierId();

	/*! \brief Set The supplier id of the product.
	 */
	void setSupplierId(int  supplierId);
	/*! \brief Get The items belonging to the product.
	 */
	std::list<Product.Models.Write.ProductItem> getItems();

	/*! \brief Set The items belonging to the product.
	 */
	void setItems(std::list <Product.Models.Write.ProductItem> items);
	/*! \brief Get The category ids the product belongs to.
	 */
	std::list<int> getCategoryIds();

	/*! \brief Set The category ids the product belongs to.
	 */
	void setCategoryIds(std::list <int> categoryIds);
	/*! \brief Get The parameter values associated with the product.
	 */
	std::list<ProductParameter.Models.Write.ProductParameterValue> getParameterValues();

	/*! \brief Set The parameter values associated with the product.
	 */
	void setParameterValues(std::list <ProductParameter.Models.Write.ProductParameterValue> parameterValues);
	/*! \brief Get The variants for this product.
	 */
	std::list<Variant.Models.Write.Variant> getVariants();

	/*! \brief Set The variants for this product.
	 */
	void setVariants(std::list <Variant.Models.Write.Variant> variants);
	/*! \brief Get The markets for this product
	 */
	std::list<Market.Models.Market> getMarkets();

	/*! \brief Set The markets for this product
	 */
	void setMarkets(std::list <Market.Models.Market> markets);
	/*! \brief Get ID of freight class
	 */
	int getFreightClassId();

	/*! \brief Set ID of freight class
	 */
	void setFreightClassId(int  freightClassId);
	/*! \brief Get Intrastat code of the product
	 */
	std::string getIntrastatCode();

	/*! \brief Set Intrastat code of the product
	 */
	void setIntrastatCode(std::string  intrastatCode);
	/*! \brief Get Country of orgin of product
	 */
	std::string getCountryOfOrigin();

	/*! \brief Set Country of orgin of product
	 */
	void setCountryOfOrigin(std::string  countryOfOrigin);
	/*! \brief Get ID of Variant Group to whom the product should be associated
	 */
	int getVariantGroupId();

	/*! \brief Set ID of Variant Group to whom the product should be associated
	 */
	void setVariantGroupId(int  variantGroupId);
	/*! \brief Get ID or rate of VAT (On create and if no VAT is provided then default VAT will be used)
	 */
	int getVat();

	/*! \brief Set ID or rate of VAT (On create and if no VAT is provided then default VAT will be used)
	 */
	void setVat(int  vat);
	/*! \brief Get Defines how VAT parameter should be interpreted  Actual = VAT parameter is interpreted as VAT rate  VatId = VAT parameter is interpreted as VAT Id
	 */
	std::string getVatType();

	/*! \brief Set Defines how VAT parameter should be interpreted  Actual = VAT parameter is interpreted as VAT rate  VatId = VAT parameter is interpreted as VAT Id
	 */
	void setVatType(std::string  vatType);
	/*! \brief Get External Id of the product.
	 */
	std::string getExternalId();

	/*! \brief Set External Id of the product.
	 */
	void setExternalId(std::string  externalId);
	/*! \brief Get Activation date for the product.
	 */
	std::string getActivationDate();

	/*! \brief Set Activation date for the product.
	 */
	void setActivationDate(std::string  activationDate);


    private:
    std::string articleNumber{};
    std::list<Shared.Models.LocalizableContent> names;
    bool active{};
    double purchasePrice{};
    std::string purchasePriceCurrency{};
    std::list<Shared.Models.LocalizableContent> shortTexts;
    std::list<Shared.Models.LocalizableContent> longTexts;
    std::list<Shared.Models.LocalizableContent> techTexts;
    int brandId{};
    int supplierId{};
    std::list<Product.Models.Write.ProductItem> items;
    std::list<int> categoryIds;
    std::list<ProductParameter.Models.Write.ProductParameterValue> parameterValues;
    std::list<Variant.Models.Write.Variant> variants;
    std::list<Market.Models.Market> markets;
    int freightClassId{};
    std::string intrastatCode{};
    std::string countryOfOrigin{};
    int variantGroupId{};
    int vat{};
    std::string vatType{};
    std::string externalId{};
    std::string activationDate{};
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Write.Product_H_ */
