#include <iostream>
#include <string>
using namespace std;

// Abstract Base Class
class TaxPayer
{
protected:
    string PayerName;
    string PayerType;
    double taxRate;

public:
    TaxPayer(string name, string type, double rate)
    {
        PayerName = name;
        PayerType = type;
        taxRate = rate;
    }

    virtual double CalcWithHoldingTax(double propertyCost) = 0;
    virtual void DetailInfo(double propertyCost) = 0;

    virtual ~TaxPayer() {}
};

// Filer Tax Payer
class FilerTaxPayer : public TaxPayer
{
private:
    string ntn;
    int nFilerYears;

public:
    FilerTaxPayer(string name, string type,
                  double rate, string ntnNo,
                  int years)
        : TaxPayer(name, type, rate)
    {
        ntn = ntnNo;
        nFilerYears = years;
    }

    double CalcWithHoldingTax(double propertyCost)
    {
        return propertyCost * (taxRate / 100);
    }

    void DetailInfo(double propertyCost)
    {
        cout << "\n====== Filer Tax Payer ======\n";
        cout << "Payer Name      : " << PayerName << endl;
        cout << "Payer Type      : " << PayerType << endl;
        cout << "National Tax Number    : " << ntn << endl;
        cout << "Property Cost: " << propertyCost << endl;
        cout << "Tax Rate       : " << taxRate << "%" << endl;
        cout << "Withholding Tax: "
             << CalcWithHoldingTax(propertyCost) << endl;
        cout << "Number of Years from which the Payer is filer: "
             << nFilerYears << endl;
        cout << "*********************************************\n";
    }

    ~FilerTaxPayer()
    {
        cout << "\nDestructor of FilerTaxPayer called for "
             << PayerName << endl;
    }
};

// Non-Filer Tax Payer
class NonFilerTaxPayer : public TaxPayer
{
private:
    bool IsEligible;

public:
    NonFilerTaxPayer(string name, string type,
                     double rate)
        : TaxPayer(name, type, rate)
    {
        IsEligible = false;
    }

    double CalcWithHoldingTax(double propertyCost)
    {
        if (propertyCost <= 3000000)
        {
            IsEligible = true;
            return propertyCost * (taxRate / 100);
        }

        IsEligible = false;
        return 0;
    }

    void DetailInfo(double propertyCost)
    {
        CalcWithHoldingTax(propertyCost);

        cout << "\n====== Non-Filer Tax Payer ======\n";
        cout << "Payer Name   : " << PayerName << endl;
        cout << "Payer Type   : " << PayerType << endl;

        if (IsEligible)
            cout << "Eligible     : YES" << endl;
        else
            cout << "Eligible     : NO" << endl;

        cout << "Property Cost: " << propertyCost << endl;
        cout << "Tax Rate     : " << taxRate << "%" << endl;

        if (IsEligible)
        {
            cout << "Withholding Tax: "
                 << CalcWithHoldingTax(propertyCost)
                 << endl;
        }
        else
        {
            cout << "Not eligible to buy property above 30 lac."
                 << endl;
        }

        cout << "*********************************************\n";
    }

    ~NonFilerTaxPayer()
    {
        cout << "\nDestructor of NonFilerTaxPayer called for "
             << PayerName << endl;
    }
};

int main()
{
    double propertyCost;

    cout << "Enter the cost of property to buy: ";
    cin >> propertyCost;

    cout << "\n\n****** FBR Tax Paying Management System ******\n";

    TaxPayer *ptr;

    // Filer
    ptr = new FilerTaxPayer(
        "Umar",
        "Filer",
        2.5,
        "17301507",
        3);

    ptr->DetailInfo(propertyCost);

    delete ptr;

    cout << endl;

    // Non-Filer
    ptr = new NonFilerTaxPayer(
        "Ahmed",
        "Non-Filer",
        5.0);

    ptr->DetailInfo(propertyCost);

    delete ptr;

    return 0;
}

