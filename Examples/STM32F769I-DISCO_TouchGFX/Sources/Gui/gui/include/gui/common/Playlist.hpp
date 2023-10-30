/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.10.0 distribution.
  *
  * @attention
  *
  * Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
  

#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include <touchgfx/Bitmap.hpp>

struct PlaylistElement
{
    char filename[60];
    touchgfx::BitmapId bmpId;
    bool used;
};

#endif
