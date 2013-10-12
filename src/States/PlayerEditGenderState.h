/*
 * Copyright 2012-2013 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef FALLTERGEIST_PLAYEREDITGENDERSTATE_H
#define FALLTERGEIST_PLAYEREDITGENDERSTATE_H

#include "../Engine/State.h"

namespace Falltergeist
{
class Game;
class SurfaceSet;

class PlayerEditGenderState : public State
{
protected:
    SurfaceSet * _maleImage;
    SurfaceSet * _femaleImage;
public:
    PlayerEditGenderState(Game * game);
    void init();
    void onFemaleButtonPress(Event * event);
    void onMaleButtonPress(Event * event);
    void onDoneButtonClick(Event * event);
};

}

#endif // FALLTERGEIST_PLAYEREDITGENDERSTATE_H