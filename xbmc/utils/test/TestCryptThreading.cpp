/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#include "utils/CryptThreading.h"

#include "gtest/gtest.h"

TEST(TestCryptThreadingInitializer, General)
{
  std::cout << "g_cryptThreadingInitializer address: " <<
    testing::PrintToString(&g_cryptThreadingInitializer) << "\n";
}