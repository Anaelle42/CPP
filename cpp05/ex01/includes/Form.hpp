#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;

    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

    	std::string getName() const;
		bool getIsSigned() const;
        int getGradeToSigned() const;
        int getGradeToExecute() const;

		void beSigned(Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, const Form& other);

#endif