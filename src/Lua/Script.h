/*
 * Copyright 2012-2015 Falltergeist Developers.
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
 */

#ifndef FALLTERGEIST_LUA_SCRIPT_H
#define FALLTERGEIST_LUA_SCRIPT_H

// C++ standard includes
#include <string>
#include <memory>
#include <vector>

// Falltergeist includes

// Third party includes
extern "C"
{
    #include "lua.h"
    #include "lauxlib.h"
    #include "lualib.h"
}

namespace Falltergeist
{
namespace Lua
{
class Module;

class Script
{
public:
    Script(std::string filename);
    ~Script();
    void run();
    static int l_write(lua_State* L);
    void addModule(std::shared_ptr<Module> module);

private:
    std::vector<std::shared_ptr<Module>> _modules;
    std::string _filename;
    lua_State* _lua_State;
};

}
}
#endif // FALLTERGEIST_LUA_SCRIPT_H
