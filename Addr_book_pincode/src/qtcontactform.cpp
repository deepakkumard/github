#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        pincodeField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow("<font color = 'red'>First Name",firstNameField);
  addRow("<font color = 'blue'>Last Name",lastNameField);
    addRow("<font color = 'orange'>Address",addressField);
      addRow("<font color = 'purple'>PhoneNumber",phoneNumberField);
        addRow("<font color = 'violet'> Email",emailField);
          addRow("<font color = ' brown'>Pincode ",pincodeField);


}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    pincodeField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
