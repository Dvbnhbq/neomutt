/**
 * @file
 * Test code for mutt_file_iter_line()
 *
 * @authors
 * Copyright (C) 2019 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define TEST_NO_MAIN
#include "acutest.h"
#include "config.h"
#include "mutt/mutt.h"

void test_mutt_file_iter_line(void)
{
  // bool mutt_file_iter_line(struct MuttFileIter *iter, FILE *fp, int flags);

  {
    FILE fp = { 0 };
    TEST_CHECK(!mutt_file_iter_line(NULL, &fp, 0));
  }

  {
    struct MuttFileIter muttfileiter = { 0 };
    TEST_CHECK(!mutt_file_iter_line(&muttfileiter, NULL, 0));
  }
}