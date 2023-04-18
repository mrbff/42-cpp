#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
  public:
    Contact(void);
    ~Contact(void);
    
    std::string getFname(void);
    std::string getLname(void);
    std::string getNname(void);
    std::string getPhone(void);
    std::string getSecret(void);

    void setFname(std::string);
    void setLname(std::string);
    void setNname(std::string);
    void setPhone(std::string);
    void setSecret(std::string);

  private:
    std::string fname;
    std::string lname;
    std::string nname;
    std::string phone;
    std::string secret;
};

#endif