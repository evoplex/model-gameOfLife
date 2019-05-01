/**
 * Copyright (c) 2018 - Marcos Cardinot <marcos@cardinot.net>
 * Copyright (c) 2018 - Ethan Padden <e.padden1@nuigalway.ie>
 *
 * This source code is licensed under the MIT license found in
 * the LICENSE file in the root directory of this source tree.
 */

#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H

#include <plugininterface.h>

namespace evoplex {
class GameOfLife: public AbstractModel
{
public:
    bool init() override;
    bool algorithmStep() override;
    QStringList parseCmd(const QString &cmd);

private:
    int m_liveAttrId;  // the id of the 'live' node's attribute
    QString m_ruleset; // the model's ruleset (B/S format)
    QStringList m_rulesetLst;
};
} // evoplex
#endif // GAME_OF_LIFEL_H
