#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdio>

class Contact
{
    private:
		std::string	_lname;
		std::string	_rname;
		std::string _phonenb;
		std::string _secret;
		std::string _nickname;

    public:
        Contact(/* args */);
        ~Contact();
		// * GETTERS
		std::string getLname() const;
		std::string getRname() const;
		std::string getPhonenb() const;
		std::string getSecret() const;
		std::string getNickname() const;

		// * SETTERS
		void setLname(const std::string);
        void setRname(const std::string);
        void setPhonenb(const std::string);
        void setSecret(const std::string);
        void setNickname(const std::string);
};

#endif