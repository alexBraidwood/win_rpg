#pragma once



enum class AttributeType {
    None,
    Strength,
    Constitution,
    Wisdom,
    Intelligence
};

class Attributes
{
    public:
        Attributes(int strength, int constitution, int wisdom, int intellegence);

    public:
        int max_hit_points();
        int max_magic_points();

        void add_stat(AttributeType stat_type, int amount);
    private:

        int _strength;
        int _constitution;
        int _wisdom;
        int _intelligence;

        const int MAX_STAT_VALUE = 255;

};
