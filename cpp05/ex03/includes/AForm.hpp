#ifndef AFORM_HPP
# define AFORM_HPP

class AForm;
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
		std::string _target;

    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

    	std::string getName() const;
		bool getSigned() const;
        int getGradeSigned() const;
        int getGradeExecute() const;
		std::string getTarget() const;
		void setSign(int sign);
		void setTarget(std::string target);

		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, const AForm& other);

#endif