#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

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
		int getSigned() const;
        int getGradeSigned() const;
        int getGradeExecute() const;

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

std::ostream &operator<<(std::ostream& os, const Bureaucrat& other);

#endif