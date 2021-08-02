// Copyright (c) 2020 The Tanzanite developers
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
    CAmount nCollateralRequired;
    
    if (nHeight <= 500) {
        nCollateralRequired = 0 * COIN;
    } else if (nHeight <= 1000) {
        nCollateralRequired = 50 * COIN;
    } else if (nHeight <= 10000) {
        nCollateralRequired = 100 * COIN;
    } else if (nHeight <= 20000) {
        nCollateralRequired = 350 * COIN;
    } else if (nHeight <= 30000) {
        nCollateralRequired = 500 * COIN;
    } else if (nHeight <= 50000) {
        nCollateralRequired = 750 * COIN;
    } else if (nHeight <= 60000) {
        nCollateralRequired = 1250 * COIN;
    } else if (nHeight <= 90000) {
        nCollateralRequired = 2500 * COIN;
    } else if (nHeight <= 120000) {
        nCollateralRequired = 5000 * COIN;
    } else if (nHeight <= 150000) {
        nCollateralRequired = 10000 * COIN;
    } else if (nHeight <= 200000) {
        nCollateralRequired = 25000 * COIN;
    } else if (nHeight <= 250000) {
        nCollateralRequired = 40000 * COIN;
    } else if (nHeight <= 300000) {
        nCollateralRequired = 50000 * COIN;
    } else if (nHeight <= 400000) {
        nCollateralRequired = 60000 * COIN;
    } else {
        nCollateralRequired = 750000 * COIN;
    }

    return nCollateralRequired;
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
