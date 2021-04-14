// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2017-2019 The USD Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"
#include "bignum.h"
#include "random.h"
#include "util.h"
#include "utilstrencodings.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of
    (0, uint256("0x00000d97a9593e79a56918e69e70e47359553e9e0b7ce170262a7b04246040c2"));
    

static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1612573080, // * UNIX timestamp of last checkpoint block
    0,          // * total number of transactions between genesis and last checkpoint
                //   (the tx=... number in the SetBestChain debug.log lines)
    1        // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of(0, uint256("0x0000066be01a3145d0bc1e7a1b903a8a25c343d403a463ccb2dbb2b651c89164"));

static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1612576680,
    0,
    1};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of(0, uint256("0x0d3c3e84d7eaefd7a0c1cd2598954ef985c943202cf54f8985411a9ddee95a20"));
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1612580280,
    0,
    1};
class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x4d; // M
        pchMessageStart[1] = 0x55; // U
        pchMessageStart[2] = 0x53; // S
        pchMessageStart[3] = 0x44; // D
        vAlertPubKey = ParseHex("045bafafe9e4af66e6d65261900954fe7534134586aba963bbe9e6773b446c92b34f475f836e2ee2b903b43e01e6a10256dbdc3f7ab36d916c7e7e6116d3474874");
        nDefaultPort = 3080;
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        nSubsidyHalvingInterval = 1050000;
        nMaxReorganizationDepth = 100;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 0;
        nTargetTimespan = 24 * 60 * 60; // Unitedstatedollarcrypto: 1 day
        nTargetSpacing = 1 * 60;  // Unitedstatedollarcrypto: 1 minutes
        nMaturity = 10;
        nMasternodeCountDrift = 20;
        nMaxMoneyOut = 1000000000 * COIN;

        /** Height or Time Based Activations **/
        nLastPOWBlock1 = 499;
        nLastPOWBlock2 = 500;
        nModifierUpdateBlock = 1; // we use the version 2 for USD

        const char* pszTimestamp = "Corporate Treasuries Are Figuring Out Bitcoin on the Balance Sheet";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 0 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("042ba0e1c6b474747657795640ce279c2f975cdc7818777cf893c5fae8e895fd6fc0e383663dcf448408941db2694eeba93201281e714e73d25abbd2cdadf279bc") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1612573080;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 4514805;    

        hashGenesisBlock = genesis.GetHash();     
        assert(hashGenesisBlock == uint256("0x00000d97a9593e79a56918e69e70e47359553e9e0b7ce170262a7b04246040c2"));
        assert(genesis.hashMerkleRoot == uint256("0xd23f46bbb0110697cefc7cb10889ef8167e8912d4cf9f64891d2e0ebd92ee1f4"));
        
        // DNS Seeding
        vFixedSeeds.clear();
        vSeeds.clear();


        // Unitedstatedollarcrypto addresses start with 'M'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 68);
        // Unitedstatedollarcrypto script addresses start with 'b'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 125);
        // Unitedstatedollarcrypto private keys start with 'K'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 79);
        // Unitedstatedollarcrypto BIP32 pubkeys start with 'xpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x08)(0x89)(0xCA)(0xFD).convert_to_container<std::vector<unsigned char> >();
        // Unitedstatedollarcrypto BIP32 prvkeys start with 'xprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x08)(0x89)(0xAC)(0xDF).convert_to_container<std::vector<unsigned char> >();
        // Unitedstatedollarcrypto BIP44 coin type is '119' (0x80000077)
        // BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = false;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = false;
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 3;
        strSporkKey = "041dbc764f68069fd02295a326cb9d93e6249daf15a6609ce9cf5837f0d31bf4c4e9628f1c9304fa1a980e381a9fbd8a8be7000a4597f1e8345cb878dcf1a7c139";
        strMasternodePoolDummyAddress = "MSmn3sZjqPSVgCnc9SvR26X9jaBz9tfSfq";
        nStartMasternodePayments = genesis.nTime + 86400; // Time in Seconds (24 hours after genesis creation)

        nBudget_Fee_Confirmations = 6; // Number of confirmations for the finalization fee
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        pchMessageStart[0] = 0x54; // T
        pchMessageStart[1] = 0x45; // E
        pchMessageStart[2] = 0x53; // S
        pchMessageStart[3] = 0x54; // T
        vAlertPubKey = ParseHex("04b8448e02d735244ee00364339acfb5f315b6fb19949de2ebaac2edbd50ff6a99f9690016df4d553ab04f192b067aa10d7d89dea972af4d12ac357e3feb6eba95");
        nDefaultPort = 13134;
        nEnforceBlockUpgradeMajority = 51;
        nRejectBlockOutdatedMajority = 75;
        nToCheckBlockUpgradeMajority = 100;
        nMinerThreads = 0;
        nTargetTimespan = 24 * 60 * 60; // Unitedstatedollarcrypto: 1 day
        nTargetSpacing = 2 * 60;  // Unitedstatedollarcrypto: 1 minute
        nLastPOWBlock1 = 999;
        nLastPOWBlock2 = 1000;
        nMaturity = 15;
        nMasternodeCountDrift = 4;
        nModifierUpdateBlock = 1;
        nMaxMoneyOut = 1000000000 * COIN;

        //! Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1612576680;
        genesis.nNonce = 1612029;

        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x0000066be01a3145d0bc1e7a1b903a8a25c343d403a463ccb2dbb2b651c89164"));
        assert(genesis.hashMerkleRoot == uint256("0xd23f46bbb0110697cefc7cb10889ef8167e8912d4cf9f64891d2e0ebd92ee1f4"));

        vFixedSeeds.clear();
        vSeeds.clear();

        // Testnet Unitedstatedollarcrypto addresses start with 'T'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 127);
        // Testnet Unitedstatedollarcrypto script addresses start with 't'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 98);
        // Testnet private keys start with 'k'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 135);
        // Testnet Unitedstatedollarcrypto BIP32 pubkeys start with 'tpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x06)(0x42)(0x76)(0xCB).convert_to_container<std::vector<unsigned char> >();
        // Testnet Unitedstatedollarcrypto BIP32 prvkeys start with 'tprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x06)(0x39)(0x23)(0x64).convert_to_container<std::vector<unsigned char> >();
        // Testnet Unitedstatedollarcrypto BIP44 coin type is '119' (0x80000077)
        // Testnet BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));
        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = false;
        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        strSporkKey = "047061b29027c32abc2110b9496a75811aa5f75b09615c38c6e4fdd12226c6753b1701e5ab8668a29d08dfff3c7f12d5e554e87e9db3430e2d60c37337c9722524";
        strMasternodePoolDummyAddress = "TQdFkLXeMwvwwQCt83YF7zeyxbnGrxqejR";
        nStartMasternodePayments = genesis.nTime + 86400; // 24 hours after genesis
        nBudget_Fee_Confirmations = 3; // Number of confirmations for the finalization fee. We have to make this very short
                                       // here because we only have a 8 block finalization window on testnet
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        strNetworkID = "regtest";
        pchMessageStart[0] = 0x52; // R
        pchMessageStart[1] = 0x45; // E
        pchMessageStart[2] = 0x47; // G
        pchMessageStart[3] = 0x54; // T
        nSubsidyHalvingInterval = 150;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 1;
        nTargetTimespan = 24 * 60 * 60; // Unitedstatedollarcrypto: 1 day
        nTargetSpacing = 1 * 60;        // Unitedstatedollarcrypto: 1 minutes
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        genesis.nTime = 1612580280;
        genesis.nBits = 0x207fffff;
        genesis.nNonce = 1;

        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 3181;
        assert(hashGenesisBlock == uint256("0x0d3c3e84d7eaefd7a0c1cd2598954ef985c943202cf54f8985411a9ddee95a20"));
        assert(genesis.hashMerkleRoot == uint256("0xd23f46bbb0110697cefc7cb10889ef8167e8912d4cf9f64891d2e0ebd92ee1f4"));

        vFixedSeeds.clear(); 
        vSeeds.clear();      

        // Testnet Unitedstatedollarcrypto addresses start with 'R'
        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 60);
        // Testnet Unitedstatedollarcrypto script addresses start with 'r'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 122);
        // Testnet private keys start with 'k'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 85);
        // Testnet Unitedstatedollarcrypto BIP32 pubkeys start with 'tpub' (Bitcoin defaults)
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x02)(0x37)(0x85)(0xD2).convert_to_container<std::vector<unsigned char> >();
        // Testnet Unitedstatedollarcrypto BIP32 prvkeys start with 'tprv' (Bitcoin defaults)
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x02)(0x33)(0x85)(0x96).convert_to_container<std::vector<unsigned char> >();
        // Testnet Unitedstatedollarcrypto BIP44 coin type is '119' (0x80000077)
        // Testnet BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 3282;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};
static CUnitTestParams unitTestParams;


static CChainParams* pCurrentParams = 0;

CModifiableParams* ModifiableParams()
{
    assert(pCurrentParams);
    assert(pCurrentParams == &unitTestParams);
    return (CModifiableParams*)&unitTestParams;
}

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    case CBaseChainParams::UNITTEST:
        return unitTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}
