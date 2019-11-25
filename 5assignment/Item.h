#include <string>

namespace Assignment5
{
    class Item {
        public:
            Item(std::string t, double uPrice, int nUnit);
            Item(std::string t, double uPrice, int nUnit, bool bogo);
            void setTitle(std::string t);
            void setUnitPrice(double uPrice);
            void setNumUnit(int nUnit);
            void setBogo(bool bogo);
            std::string getTitle(void);
            double getItemTotal(void);
            int getNumUnit(void);
            bool getBogo(void);

        private:
            std::string title;
            double unitPrice;
            int numUnit;
            bool isBogo;
    };
}
