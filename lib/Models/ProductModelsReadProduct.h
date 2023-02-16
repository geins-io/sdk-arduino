
/*
 * Product.Models.Read.Product.h
 *
 * A product.
 */

#ifndef TINY_CPP_CLIENT_Product.Models.Read.Product_H_
#define TINY_CPP_CLIENT_Product.Models.Read.Product_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Category.Models.Read.Category.h"
#include "Market.Models.Market.h"
#include "PriceList.Models.Read.PriceListPrice.h"
#include "Product.Models.Read.FeedMembership.h"
#include "Product.Models.Read.Image.h"
#include "Product.Models.Read.ProductItem.h"
#include "Product.Models.Read.ProductUrl.h"
#include "Product.Models.Read.RelatedProduct.h"
#include "ProductParameter.Models.Read.ProductParameterValue.h"
#include "Shared.Models.LocalizableContent.h"
#include "Variant.Models.Read.Variant.h"
#include <list>

namespace Tiny {


/*! \brief A product.
 *
 *  \ingroup Models
 *
 */

class Product.Models.Read.Product{
public:

    /*! \brief Constructor.
	 */
    Product.Models.Read.Product();
    Product.Models.Read.Product(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Product.Models.Read.Product();


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
	/*! \brief Get The date the product was created.
	 */
	std::string getDateCreated();

	/*! \brief Set The date the product was created.
	 */
	void setDateCreated(std::string  dateCreated);
	/*! \brief Get The date the product was last updated.
	 */
	std::string getDateUpdated();

	/*! \brief Set The date the product was last updated.
	 */
	void setDateUpdated(std::string  dateUpdated);
	/*! \brief Get The current state of the product.
	 */
	bool isActive();

	/*! \brief Set The current state of the product.
	 */
	void setActive(bool  active);
	/*! \brief Get The purchase price in the currency defined in {Product.Models.Read.Product.PurchasePriceCurrency}.
	 */
	double getPurchasePrice();

	/*! \brief Set The purchase price in the currency defined in {Product.Models.Read.Product.PurchasePriceCurrency}.
	 */
	void setPurchasePrice(double  purchasePrice);
	/*! \brief Get The 3-letter ISO 4217 currency code for the amount given in {Product.Models.Read.Product.PurchasePrice}.
	 */
	std::string getPurchasePriceCurrency();

	/*! \brief Set The 3-letter ISO 4217 currency code for the amount given in {Product.Models.Read.Product.PurchasePrice}.
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
	/*! \brief Get The items belonging to the product.
	 */
	std::list<Product.Models.Read.ProductItem> getItems();

	/*! \brief Set The items belonging to the product.
	 */
	void setItems(std::list <Product.Models.Read.ProductItem> items);
	/*! \brief Get The current prices of the product.
	 */
	std::list<PriceList.Models.Read.PriceListPrice> getPrices();

	/*! \brief Set The current prices of the product.
	 */
	void setPrices(std::list <PriceList.Models.Read.PriceListPrice> prices);
	/*! \brief Get The categories the product belongs to.
	 */
	std::list<Category.Models.Read.Category> getCategories();

	/*! \brief Set The categories the product belongs to.
	 */
	void setCategories(std::list <Category.Models.Read.Category> categories);
	/*! \brief Get The images for the product
	 */
	std::list<Product.Models.Read.Image> getImages();

	/*! \brief Set The images for the product
	 */
	void setImages(std::list <Product.Models.Read.Image> images);
	/*! \brief Get The brand id of the product.
	 */
	int getBrandId();

	/*! \brief Set The brand id of the product.
	 */
	void setBrandId(int  brandId);
	/*! \brief Get The brand name of the product.
	 */
	std::string getBrandName();

	/*! \brief Set The brand name of the product.
	 */
	void setBrandName(std::string  brandName);
	/*! \brief Get The supplier id of the product.
	 */
	int getSupplierId();

	/*! \brief Set The supplier id of the product.
	 */
	void setSupplierId(int  supplierId);
	/*! \brief Get The supplier name of the product.
	 */
	std::string getSupplierName();

	/*! \brief Set The supplier name of the product.
	 */
	void setSupplierName(std::string  supplierName);
	/*! \brief Get The parameter values associated with the product.
	 */
	std::list<ProductParameter.Models.Read.ProductParameterValue> getParameterValues();

	/*! \brief Set The parameter values associated with the product.
	 */
	void setParameterValues(std::list <ProductParameter.Models.Read.ProductParameterValue> parameterValues);
	/*! \brief Get The variants for this product.
	 */
	std::list<Variant.Models.Read.Variant> getVariants();

	/*! \brief Set The variants for this product.
	 */
	void setVariants(std::list <Variant.Models.Read.Variant> variants);
	/*! \brief Get The markets for this product
	 */
	std::list<Market.Models.Market> getMarkets();

	/*! \brief Set The markets for this product
	 */
	void setMarkets(std::list <Market.Models.Market> markets);
	/*! \brief Get The vat percent for this product. Eg) 0.25 meaning 25% VAT.
	 */
	double getVat();

	/*! \brief Set The vat percent for this product. Eg) 0.25 meaning 25% VAT.
	 */
	void setVat(double  vat);
	/*! \brief Get The filename of this products primary image.
	 */
	std::string getPrimaryImage();

	/*! \brief Set The filename of this products primary image.
	 */
	void setPrimaryImage(std::string  primaryImage);
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
	/*! \brief Get ID of Variant Group to which the product is associated
	 */
	int getVariantGroupId();

	/*! \brief Set ID of Variant Group to which the product is associated
	 */
	void setVariantGroupId(int  variantGroupId);
	/*! \brief Get ID of Vat
	 */
	int getVatId();

	/*! \brief Set ID of Vat
	 */
	void setVatId(int  vatId);
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
	/*! \brief Get The feeds the product is a member of
	 */
	std::list<Product.Models.Read.FeedMembership> getFeeds();

	/*! \brief Set The feeds the product is a member of
	 */
	void setFeeds(std::list <Product.Models.Read.FeedMembership> feeds);
	/*! \brief Get All canonical urls for the product
	 */
	std::list<Product.Models.Read.ProductUrl> getUrls();

	/*! \brief Set All canonical urls for the product
	 */
	void setUrls(std::list <Product.Models.Read.ProductUrl> urls);
	/*! \brief Get The main category id for the product.
	 */
	int getMainCategoryId();

	/*! \brief Set The main category id for the product.
	 */
	void setMainCategoryId(int  mainCategoryId);
	/*! \brief Get The related products for the product.
	 */
	std::list<Product.Models.Read.RelatedProduct> getRelatedProducts();

	/*! \brief Set The related products for the product.
	 */
	void setRelatedProducts(std::list <Product.Models.Read.RelatedProduct> relatedProducts);


    private:
    int productId{};
    std::string articleNumber{};
    std::list<Shared.Models.LocalizableContent> names;
    std::string dateCreated{};
    std::string dateUpdated{};
    bool active{};
    double purchasePrice{};
    std::string purchasePriceCurrency{};
    std::list<Shared.Models.LocalizableContent> shortTexts;
    std::list<Shared.Models.LocalizableContent> longTexts;
    std::list<Shared.Models.LocalizableContent> techTexts;
    std::list<Product.Models.Read.ProductItem> items;
    std::list<PriceList.Models.Read.PriceListPrice> prices;
    std::list<Category.Models.Read.Category> categories;
    std::list<Product.Models.Read.Image> images;
    int brandId{};
    std::string brandName{};
    int supplierId{};
    std::string supplierName{};
    std::list<ProductParameter.Models.Read.ProductParameterValue> parameterValues;
    std::list<Variant.Models.Read.Variant> variants;
    std::list<Market.Models.Market> markets;
    double vat{};
    std::string primaryImage{};
    int freightClassId{};
    std::string intrastatCode{};
    std::string countryOfOrigin{};
    int variantGroupId{};
    int vatId{};
    std::string externalId{};
    std::string activationDate{};
    std::list<Product.Models.Read.FeedMembership> feeds;
    std::list<Product.Models.Read.ProductUrl> urls;
    int mainCategoryId{};
    std::list<Product.Models.Read.RelatedProduct> relatedProducts;
};
}

#endif /* TINY_CPP_CLIENT_Product.Models.Read.Product_H_ */
