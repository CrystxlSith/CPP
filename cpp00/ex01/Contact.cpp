#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getLname() const
{
	return (_lname);
}

std::string Contact::getRname() const
{
	return (_rname);
}
std::string Contact::getPhonenb() const
{
	return (_phonenb);
}
std::string Contact::getSecret() const 
{
	return (_secret);

}
std::string Contact::getNickname() const
{
	return (_nickname);
}

void Contact::setLname(const std::string lname)
{
	_lname = lname;
}

void Contact::setRname(const std::string rname)
{
	_rname = rname;
}

void Contact::setPhonenb(const std::string phonenb)
{
	int i = 0;

	while (phonenb[i])
	{
		if (std::isalpha(phonenb[i]))
		{
			_phonenb = "(none)";
			return ;
		}
		i++;
	}
	_phonenb = phonenb;
}

void Contact::setSecret(const std::string secret)
{
	_secret = secret;
}

void Contact::setNickname(const std::string nickname)
{
	_nickname = nickname;
}