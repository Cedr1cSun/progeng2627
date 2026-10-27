#include <iostream>

bool leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2)
{
    int days_in_month = 31;
    if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
        days_in_month = 30;
    } else if (m1 == 2) {
        if (leap_year(y1)) {
            days_in_month = 29;
        } else {
            days_in_month = 28;
        }
    }

    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;
    if (d2 > days_in_month) {
        d2 = 1;
        m2 = m1 + 1;
        if (m2 > 12) {
            m2 = 1;
            y2 = y1 + 1;
        }
    }
}

int main()
{
    int d, m, y;

    next_date(27, 10, 2026, d, m, y);
    std::cout << "27/10/2026 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(30, 4, 2026, d, m, y);
    std::cout << "30/4/2026 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(31, 1, 2026, d, m, y);
    std::cout << "31/1/2026 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(31, 12, 2026, d, m, y);
    std::cout << "31/12/2026 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(28, 2, 2026, d, m, y);
    std::cout << "28/2/2026 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(28, 2, 2024, d, m, y);
    std::cout << "28/2/2024 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(29, 2, 2024, d, m, y);
    std::cout << "29/2/2024 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(28, 2, 1900, d, m, y);
    std::cout << "28/2/1900 -> " << d << "/" << m << "/" << y << std::endl;

    next_date(28, 2, 2000, d, m, y);
    std::cout << "28/2/2000 -> " << d << "/" << m << "/" << y << std::endl;
}
