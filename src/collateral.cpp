// Copyright (c) 2020 The Altecoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
 
#include <amount.h>
#include <util.h>

/**
 * The number of blocks that both new and old MN collateral value will
 * be accepted, for smoother transition.
 */
const unsigned int COLLATERAL_TRANSITION_BLOCKS = 100;

/**
 * Determine the masternode collateral value based on block height
 */
CAmount CollateralRequired(int nHeight)
{
    if (nHeight > 1800000) return   500000 * COIN;
    if (nHeight > 1700000) return   450000 * COIN;
    if (nHeight > 1600000) return   400000 * COIN;
    if (nHeight > 1500000) return   350000 * COIN;
    if (nHeight > 1400000) return   300000 * COIN;
    if (nHeight > 1300000) return   250000 * COIN;
    if (nHeight > 1200000) return   200000 * COIN;
    if (nHeight > 1100000) return   175000 * COIN;
    if (nHeight > 1000000) return   150000 * COIN;
    if (nHeight >  950000) return   125000 * COIN;
    if (nHeight >  900000) return   100000 * COIN;
    if (nHeight >  850000) return    75000 * COIN;
    if (nHeight >  800000) return    50000 * COIN;
    if (nHeight >  750000) return    40000 * COIN;
    if (nHeight >  700000) return    30000 * COIN;
    if (nHeight >  650000) return    20000 * COIN;
    if (nHeight >  600000) return    15000 * COIN;
    if (nHeight >  550000) return    10000 * COIN;
    if (nHeight >  500000) return     7000 * COIN;
         
    return 5000 * COIN;
}


/**
 * Provide transition period for masternode collateral change to avoid
 * unneccessary issues to masternode operators for the amount of 
 * COLLATERAL_TRANSITION_BLOCKS blocks during the collateral change.
 */
bool IsValidCollateral(CAmount nAmountToCheck, int nHeight)
{
    return (
        nAmountToCheck == CollateralRequired(nHeight) || 
        nAmountToCheck == CollateralRequired(nHeight - floor(COLLATERAL_TRANSITION_BLOCKS / 2)) ||
        nAmountToCheck == CollateralRequired(nHeight + floor(COLLATERAL_TRANSITION_BLOCKS / 2))
        );
}
