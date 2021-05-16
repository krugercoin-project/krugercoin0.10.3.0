// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINADDRESSVALIDATOR_H
#define BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class KrugercoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KrugercoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Krugercoin address widget validator, checks for a valid bitcoin address.
 */
class KrugercoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit KrugercoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOINADDRESSVALIDATOR_H
