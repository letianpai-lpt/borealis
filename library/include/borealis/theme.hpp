/*
    Borealis, a Nintendo Switch UI Library
    Copyright (C) 2019  natinusala
    Copyright (C) 2019  p-sam

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include <nanovg.h>

namespace brls
{

typedef struct
{
    float backgroundColor[3]; // gl color
    NVGcolor backgroundColorRGB;

    NVGcolor textColor;
    NVGcolor descriptionColor;

    NVGcolor separatorColor;

    NVGcolor sidebarColor;
    NVGcolor activeTabColor;
    NVGcolor sidebarSeparatorColor;

    NVGcolor highlightBackgroundColor;
    NVGcolor highlightColor1;
    NVGcolor highlightColor2;

    NVGcolor listItemSeparatorColor;
    NVGcolor listItemValueColor;
    NVGcolor listItemFaintValueColor;

    NVGcolor tableEvenBackgroundColor;
    NVGcolor tableBodyTextColor;

    NVGcolor dropdownBackgroundColor;

    NVGcolor nextStageBulletColor;

    NVGcolor spinnerBarColor;

    NVGcolor headerRectangleColor;
} Theme;

extern Theme themeLight;
extern Theme themeDark;

} // namespace brls