#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <ostream>
#include <istream>

class Person
{
	std::string d_name;			// name of person
	std::string d_address;		// address field
	std::string d_phone;		// telephone number
	size_t		d_mass;			// the mass in kg.


	size_t const n_member = 4;		// total number of data members

	public:						// member functions
		inline void setName(std::string const &name)
		{
			d_name = name;
		}

		inline void setAddress(std::string const &address)
		{
			d_address = address;
		}

		inline void setMass(size_t mass)
		{
			d_mass = mass;
		}

		inline void setPhone(std::string const &phone)
		{
    		d_phone = verifyPhone(phone) ? phone : "";
		}

		inline std::string const &name() const
		{
			return d_name;
		}

		inline std::string const &address() const
		{
			return d_address;
		}

		inline std::string const &phone() const
		{
			return d_phone;
		}

		inline size_t mass() const
		{
			return d_mass;
		}

		void insert(std::ostream &op_stream);

		void extract(std::istream &ip_stream);

	private:
		bool verifyPhone(std::string const &phone);			// verify phone number


};
#endif
