#pragma once
class Calculate
{
public:
    static int count; // Ńňŕňč÷ĺńęŕ˙ ďĺđĺěĺííŕ˙ äë˙ ďîäń÷ĺňŕ ęîëč÷ĺńňâŕ âűçîâîâ

    static double triangle_area(double base, double height) {
        count++;
        return 0.5 * base * height;
    }

    static double rectangle_area(double length, double width) {
        count++;
        return length * width;
    }

    static double square_area(double side) {
        count++;
        return side * side;
    }

    static double rhombus_area(double diagonal1, double diagonal2) {
        count++;
        return (diagonal1 * diagonal2) / 2;
    }

    static int get_count() {
        return count; // Âîçâđŕůŕĺň ęîëč÷ĺńňâî ďîäń÷ĺňîâ ďëîůŕäč
    }
};
