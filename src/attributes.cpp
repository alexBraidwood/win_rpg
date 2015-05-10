#include "attributes.h"

void Attributes::add_stat(AttributeType stat_type, int amount) {
    if (amount > MAX_STAT_VALUE)
        return;
    switch(stat_type) {
    case AttributeType::Strength: {
        _strength += amount + _strength > MAX_STAT_VALUE ? 0 : amount;
    } break;
    case AttributeType::Constitution: {
        _constitution += amount + _constitution > MAX_STAT_VALUE ? 0 : amount;
    } break;
    case AttributeType::Wisdom: {
        _wisdom += amount + _wisdom > MAX_STAT_VALUE ? 0 : amount;
    } break;
    case AttributeType::Intelligence: {
        _intelligence += amount + _intelligence > MAX_STAT_VALUE ? 0 : amount;
    } break;
    default:
        break;
    }
}

int Attributes::max_hit_points() {
    return 5 * _constitution;
}

int Attributes::max_magic_points() {
    return 2 * _intelligence;
}
Attributes::Attributes(int strength, int constitution, int wisdom, int intelligence)
    :   _strength(strength),
        _constitution(constitution),
        _wisdom(wisdom),
        _intelligence(intelligence)
{
}
