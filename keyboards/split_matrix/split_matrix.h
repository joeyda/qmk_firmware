// Copyright 2022 Joe D. (@joeyda)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k010, k011, k012, k013, k014, k015, k016, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k110, k111, k112, k113, k114, k115, k116, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k210, k211, k212, k213, k214, k215, k216, \
    k30, k31, k32,      k34, k35, k36, k37, k38, k39, k310, k311, k312, k313, k314, k315, k316, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49,    k411,    k412, k413, k414, k415, k416 \
) { \
    { k00, k01, k02, k03,   k04, k05, k06, k07, k08, k09, k010, k011,   k012, k013, k014, k015, k016 }, \
    { k10, k11, k12, k13,   k14, k15, k16, k17, k18, k19, k110, k111,   k112, k113, k114, k115, k116 }, \
    { k20, k21, k22, k23,   k24, k25, k26, k27, k28, k29, k210, k211,   k212, k213, k214, k215, k216 }, \
    { k30, k31, k32, KC_NO, k34, k35, k36, k37, k38, k39, k310, k311,   k312, k313, k314, k315, k316 }, \
    { k40, k41, k42, k43,   k44, k45, k46, k47, k48, k49, KC_NO, k411,  k412, k413, k414, k415, k416 }  \
}
