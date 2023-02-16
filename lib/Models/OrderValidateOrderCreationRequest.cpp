

#include "Order.ValidateOrderCreationRequest.h"

using namespace Tiny;

Order.ValidateOrderCreationRequest::Order.ValidateOrderCreationRequest()
{
	orderId = int(0);
	userId = int(0);
	email = std::string();
	phone = std::string();
	currency = std::string();
	sumIncVat = float(0);
	balanceIncVat = float(0);
	items = std::list<Order.ValidateOrderCreationRequest.StockItem>();
}

Order.ValidateOrderCreationRequest::Order.ValidateOrderCreationRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

Order.ValidateOrderCreationRequest::~Order.ValidateOrderCreationRequest()
{

}

void
Order.ValidateOrderCreationRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *orderIdKey = "OrderId";

    if(object.has_key(orderIdKey))
    {
        bourne::json value = object[orderIdKey];



        jsonToValue(&orderId, value, "int");


    }

    const char *userIdKey = "UserId";

    if(object.has_key(userIdKey))
    {
        bourne::json value = object[userIdKey];



        jsonToValue(&userId, value, "int");


    }

    const char *emailKey = "Email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *phoneKey = "Phone";

    if(object.has_key(phoneKey))
    {
        bourne::json value = object[phoneKey];



        jsonToValue(&phone, value, "std::string");


    }

    const char *currencyKey = "Currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *sumIncVatKey = "SumIncVat";

    if(object.has_key(sumIncVatKey))
    {
        bourne::json value = object[sumIncVatKey];



        jsonToValue(&sumIncVat, value, "double");


    }

    const char *balanceIncVatKey = "BalanceIncVat";

    if(object.has_key(balanceIncVatKey))
    {
        bourne::json value = object[balanceIncVatKey];



        jsonToValue(&balanceIncVat, value, "double");


    }

    const char *itemsKey = "Items";

    if(object.has_key(itemsKey))
    {
        bourne::json value = object[itemsKey];


        std::list<Order.ValidateOrderCreationRequest.StockItem> items_list;
        Order.ValidateOrderCreationRequest.StockItem element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            items_list.push_back(element);
        }
        items = items_list;


    }


}

bourne::json
Order.ValidateOrderCreationRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["orderId"] = getOrderId();






    object["userId"] = getUserId();






    object["email"] = getEmail();






    object["phone"] = getPhone();






    object["currency"] = getCurrency();






    object["sumIncVat"] = getSumIncVat();






    object["balanceIncVat"] = getBalanceIncVat();





    std::list<Order.ValidateOrderCreationRequest.StockItem> items_list = getItems();
    bourne::json items_arr = bourne::json::array();

    for(auto& var : items_list)
    {
        Order.ValidateOrderCreationRequest.StockItem obj = var;
        items_arr.append(obj.toJson());
    }
    object["items"] = items_arr;




    return object;

}

int
Order.ValidateOrderCreationRequest::getOrderId()
{
	return orderId;
}

void
Order.ValidateOrderCreationRequest::setOrderId(int  orderId)
{
	this->orderId = orderId;
}

int
Order.ValidateOrderCreationRequest::getUserId()
{
	return userId;
}

void
Order.ValidateOrderCreationRequest::setUserId(int  userId)
{
	this->userId = userId;
}

std::string
Order.ValidateOrderCreationRequest::getEmail()
{
	return email;
}

void
Order.ValidateOrderCreationRequest::setEmail(std::string  email)
{
	this->email = email;
}

std::string
Order.ValidateOrderCreationRequest::getPhone()
{
	return phone;
}

void
Order.ValidateOrderCreationRequest::setPhone(std::string  phone)
{
	this->phone = phone;
}

std::string
Order.ValidateOrderCreationRequest::getCurrency()
{
	return currency;
}

void
Order.ValidateOrderCreationRequest::setCurrency(std::string  currency)
{
	this->currency = currency;
}

double
Order.ValidateOrderCreationRequest::getSumIncVat()
{
	return sumIncVat;
}

void
Order.ValidateOrderCreationRequest::setSumIncVat(double  sumIncVat)
{
	this->sumIncVat = sumIncVat;
}

double
Order.ValidateOrderCreationRequest::getBalanceIncVat()
{
	return balanceIncVat;
}

void
Order.ValidateOrderCreationRequest::setBalanceIncVat(double  balanceIncVat)
{
	this->balanceIncVat = balanceIncVat;
}

std::list<Order.ValidateOrderCreationRequest.StockItem>
Order.ValidateOrderCreationRequest::getItems()
{
	return items;
}

void
Order.ValidateOrderCreationRequest::setItems(std::list <Order.ValidateOrderCreationRequest.StockItem> items)
{
	this->items = items;
}



