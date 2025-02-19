#ifndef CAR_H
#define CAR_H
#include <QString>

namespace Car_space {
    class Car;
}
class Car{
public:
    explicit Car();
    QString KmInput;
    QString MaxSeatLine;
    QString ModelLine;
    QString RentalPriceLine;
    QString CarStatus;
    QString filePath;
    QString car_id;
    bool engine;
    bool tire;
    bool battery;
    bool is_rental;

    QString BrandInput;
    void set_car(QString BrandInput, QString KmInput, QString ModelLine, QString CarStatus, QString MaxSeatLine, QString RentalPriceLine, QString filePath);

private:
};
#endif // CAR_H
